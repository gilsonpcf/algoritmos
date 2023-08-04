# Algoritmo Fundamental Nº 1
# Descrição : Troca dos valores de duas variáveis
# Problema  : Dadas duas variáveis, trocar os valores atribuídos a elas.
# Aplicações: Algoritmos de ordenação.

a = input('Valor da variável A: ')
b = input('Valor da variável B: ')

aux = a
a = b
b = aux

print('Novo valor da variável A:', a)
print('Novo valor da variável B:', b)