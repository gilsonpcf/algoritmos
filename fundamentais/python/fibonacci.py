# Algoritmo Fundamental Nº 6
# Descrição : Geração da sequência de Fibonacci
# Problema  : Gerar e imprimir os n primeiros termos da sequência
#             de Fibonacci, onde n >= 1. Os primeiros termos são:
#             0, 1, 1, 2, 3, 5, 8, 13, ...
#             Cada termo, além dos dois primeiros, é derivado da
#             soma de seus dois antecessores mais próximos.
# Aplicações: Botânica, teoria das redes elétricas, ordenação e pesquisa.

n = int(input('Número de termos: '))

a = 0
b = 1
i = 2

if (n == 1):
  print(a, end='')
else:
  print(a, b, end='')

while i < n:
  c = a + b
  print('', c, end='')
  a = b
  b = c
  i += 1