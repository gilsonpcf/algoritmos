# Algoritmo Fundamental Nº 5
# Descrição : Cálculo de uma série infinita
# Problema  : Calcular o valor de S, conforme definido
#             pela seguinte série infinita:
#             S = x/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
# Aplicações: Cálculos matemáticos e estatísticos.

# Subrotina para calcular o fatorial
def fatorial(n):
  fator = 1

  for i in range(1, n+1):
    fator = i * fator

  return fator

# Rotina principal
n = int(input('Número de termos: '))
x = float(input('Valor de x: '))

s = 0.0
i = 1
sinal = 1

for j in range(n):
  termo = x**i / fatorial(i)
  s = s + sinal * termo
  i = i + 2
  sinal = -sinal

print('S = %f' % s)