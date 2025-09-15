# 2. Joãozinho fez um curso onde recebeu três notas: 7.5, 5.3 e 8.1. Ele fez o cálculo da média e obteve o valor 6.96. Como Joãozinho pretende fazer outros cursos, ele, então, resolveu elaborar um algoritmo para calcular a média aritmética. Entretanto, após elaborar o algoritmo, ele percebeu que os resultados não saiam como o esperado. O que deve ser alterado para corrigir este algoritmo? Justifique cada alteração.

'''
ALGORITMO EX02; 
VARIAVEIS 
NOTA1, NOTA2, NOTA3, NOTA3, MEDIA: INTEIRO; 
INICIO 
LEIA(NOTA1); 
LEIA(NOTA2); 
LEIA(NOTA3); 
MEDIA <- NOTA1 + NOTA2 + NOTA3/3; 
ESCREVA("MEDIA = ", MEDIA); 
FIM.
'''

# A variável nota3 foi declarada 2 vezes, precisa remover a repetição
# Variáveis de nota e média não podem ser inteiro pois podem ter casas decimais, logo o correto seria declarar como real
# Erro no calculo da média, primeiro seria feito a divisão entre a nota3 por 3 por causa da ordem das operações, o correto seria somar as notas entre parênteses