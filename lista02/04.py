'''
4. Verificar se um determinado ano, fornecido pelo usuário, é bissexto. Um ano é bissexto se for divisível
por 400 ou se for divisível por 4 e não for divisível por 100. O algoritmo deve mostrar uma das seguintes
mensagens: "ano bissexto"ou "ano normal".

Joãozinho chegou antes de você nesta questão e já começou a respondê-la. Ele desenvolveu o seguinte
algoritmo, porém, seu professor disse que a resolução está errada. Ajude o Joãozinho a consertar seu
algoritmo.
'''

# '-'

'''
ALGORITMO questao04;
VARIAVEIS
ano: inteiro;
INICIO
se (ano mod 400) entao
    se (ano mod 4 = 0) e (ano mod 100 = 0) entao
        escreva ("ano bissexto");
    senao
        escreva ("ano normal");
    fimse;
fimse;
FIM.
'''

# corrigindo:

ano = int(input("Insira um ano: "))

if (ano % 400 == 0 or ano % 100 != 0) and ano % 4 == 0:
    print("ano bissexto")
else:
    print("ano normal")