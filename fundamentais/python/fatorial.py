# Algoritmo Fundamental Nº 4
# Descrição : Cálculo do fatorial
# Problema  : Dado um número n, calcular o fatorial de n, onde n >= 0.
# Aplicações: Probabilidade, cálculos estatísticos e matemáticos.

n = int(input('Número: '))
fator = 1

for i in range(1, n+1):
    fator = i * fator

print('Fatorial =', fator)