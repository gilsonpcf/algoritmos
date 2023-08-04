# Algoritmo Fundamental Nº 3
# Descrição : Soma de um conjunto de números
# Problema  : Dado um conjunto de n números, calcular a soma desses números.
#             Assumir que n é maior ou igual a zero.
# Aplicações: Cálculos de média, cálculos de variância e mínimos quadrados.

n = int(input('Quantidade de números: '))
soma = 0
i = 0

while i < n:
  i = i + 1
  numero = int(input('Número: '))
  soma = soma + numero

print('Soma =', soma)