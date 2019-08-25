// Space Invaders
// Autor: Ayo Oyewole
// Adaptado por: Gilson Pereira
// Código fonte original: http://www.ayodeji.ca/space-invaders/

// Programa principal

var tela
var c;

var canhao;
var laser;
var alien;

var canhaoX = 180;
var canhaoY = 529;
var laserX = 193;
var laserY = 520;
var alienX = 0;
var alienY = 0;
var inicioLaser = false;
var impactoLaserX;
var laserMovendo;
var intervalo = 10;
var posicao = 0;

var alienLinhas = [10, 38, 66, 94, 122, 150, 178, 206, 234, 262, 290];
var alienColunas = [55, 85, 115, 145, 175];
var aliensRestantes = [];

const C_ALTURA = 600;
const C_LARGURA = 400;

const TECLA_ESQUERDA = 37;
const TECLA_DIREITA = 39;
const TECLA_ACIMA = 38;

onkeydown = moverCanhao; // Define função chamada ao se pressionar uma tecla

iniciar(); // Chama função inicial do jogo


// Sub-rotinas (funções)

function iniciar() {
    tela = document.getElementById("tela");
    c = tela.getContext("2d");
	
	c.fillStyle = "black";
	c.fillRect(0, 0, C_LARGURA, C_ALTURA);

    posicionarAlien();
    carregarImagens();

	setInterval("moverAliens()", intervalo);
    setInterval("alienAtingido()", 6);
}    

function posicionarAlien() {
    for (var i = 0; i < alienLinhas.length; i++){
        for (var j = 0; j < alienColunas.length; j++){
            var novoAlien = {
                posX : alienLinhas[i],
                posY : alienColunas[j],
                foiAtingido : false
			};
			
            aliensRestantes[aliensRestantes.length] = novoAlien;
        }
    }
}    

function carregarImagens() {
    canhao = new Image();
    canhao.src = "canhao.png";
    canhao.onload = function(){
        c.drawImage(canhao, canhaoX, canhaoY);
    }
    
    laser = new Image();
    laser.src = "laser.png";
    
    alien = new Image();
    alien.src = "alien.png";
}

function moverAliens(){
        if (posicao <= 65){
            alienX += 1;
            posicao += 1;
        } else if ((posicao > 65) && (posicao <= 80)){
            alienX += 1;
            alienY += 1
            posicao += 1;            
        } else if ((posicao > 80) && (posicao <= 147)){
            alienX -= 1;
            posicao += 1;
        } else if ((posicao > 147) && (posicao < 162)){
            alienX -= 1;
            alienY += 1;
            posicao += 1;
        } else{
            posicao = 0;
        }
        
        for (var i = 0; i < aliensRestantes.length; i++){
            if (!aliensRestantes[i].foiAtingido){
                c.fillRect((alienX + aliensRestantes[i].posX - 1), (alienY + aliensRestantes[i].posY - 1), 20, 25);
                c.drawImage(alien, (alienX + aliensRestantes[i].posX), (alienY + aliensRestantes[i].posY));
				
                if ((aliensRestantes[i].posY + alienY + 23) >= 530){
                    fimDeJogo();
                }
            }
        }
}

function alienAtingido(){
    for(var i = 0; i < aliensRestantes.length; i++){
        if ((laserY >= (alienY + aliensRestantes[i].posY)) && (laserY <= (alienY + aliensRestantes[i].posY + 20)) && 
            (impactoLaserX >= (alienX + aliensRestantes[i].posX - 5)) && (impactoLaserX <= (alienX + aliensRestantes[i].posX + 18))){
            if (!aliensRestantes[i].foiAtingido){
                c.fillStyle = "black";
                c.fillRect((alienX + aliensRestantes[i].posX - 1), (alienY + aliensRestantes[i].posY - 1), 20, 25);
                aliensRestantes[i].foiAtingido = true;
                c.fillRect(impactoLaserX, laserY, 6, 19);
                laserY = 0;
            }
        }
    }    
}

function fimDeJogo(){
    canhaoX = 180;
    laserX = 193;
    laserY = 520;
    alienX = 0;
    alienY = 0;
    posicao = 0;
    aliensRestantes = [];
    inicioLaser = false;
	
    c.fillStyle = "black";
	c.fillRect(0, 0, C_LARGURA, C_ALTURA);
    
    c.textAlign = "center";
    c.font = "16px Arial";
    c.fillStyle = "white";
    c.fillText("Fim de Jogo", C_LARGURA/2, C_ALTURA/2);

    onkeydown = null;
}

function moverCanhao(tecla){
    var codigo = tecla.keyCode;
    
    if ((codigo == TECLA_DIREITA) && (canhaoX <= 360)){
        c.fillStyle = "black";
        c.fillRect(canhaoX, 537, 31, 19);
        canhaoX += 8;
        laserX += 8;
		c.drawImage(canhao, canhaoX, canhaoY);
    }
    
    if ((codigo == TECLA_ESQUERDA) && (canhaoX >= 9)){
        c.fillStyle = "black";
        c.fillRect(canhaoX, 537, 31, 19);
        canhaoX -= 8;
        laserX -= 8;
		c.drawImage(canhao, canhaoX, canhaoY);
    }
    
    if ((codigo == TECLA_ACIMA) && !inicioLaser){
        inicioLaser = true;
        c.drawImage(laser, laserX, laserY);
        impactoLaserX = laserX;
        laserMovendo = setInterval("dispararLaser()", 5);
    }
}

function dispararLaser(){
    if (inicioLaser && (laserY >= 60)){
        laserY -= 10;
        c.fillStyle = "black";
        c.fillRect(impactoLaserX, (laserY + 10), 6, 19);
		
        if (laserY >= 70){
            c.drawImage(laser, impactoLaserX, laserY);
        }
    }
	
    if (laserY < 60){
        clearInterval(laserMovendo);
        inicioLaser = false;
        laserY = 520;
    }
}