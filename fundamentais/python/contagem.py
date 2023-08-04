# Algoritmo Fundamental Nº 2
# Descrição : Contagem
# Problema  : Dado um conjunto de n notas de alunos em um exame,
#             fazer uma contagem do número de alunos que foram
#             aprovados no exame. Será considerado aprovado o aluno
#             que tirar nota 50 ou maior (no intervalo de 0 a 100).
# Aplicações: Todas as formas de contagem.

n = int(input('Número de notas: '))
contagem = 0
i = 0

while i < n:
  i = i + 1

  nota = int(input('Nota do aluno: '))

  if nota >= 50:
    contagem = contagem + 1

print('Número de aprovações:', contagem)