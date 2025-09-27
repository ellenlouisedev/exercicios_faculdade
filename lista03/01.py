'''
1. Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
• a média aritmética das duas notas de cada aluno; e
• a mensagem que está na tabela a seguir:

MÉDIA ARITMÉTICA MENSAGEM
Até 3 Reprovado
Entre 3 e 7 Exame
De 7 para cima Aprovado

• o total de alunos aprovados;
• o total de alunos de exame;
• o total de alunos reprovados;
• a média da classe.
'''
aprovados = 0
exames = 0
reprovados = 0
cont = 0
somaMedias = 0
while cont < 6:
    n1 = float(input("Digite a primeira nota: "))
    n2= float(input("Digite a segunda nota: "))
    media = (n1 + n2) / 2
    print("Média: ",media)
    somaMedias = somaMedias + media
    if media >= 7:
            print("Aprovado")
            aprovados = aprovados + 1
    elif media >= 3 and media <= 6.99:
            print("Exame")
            exames = exames + 1
    else:
            print("Reprovado")
            reprovados = reprovados + 1
    cont = cont + 1

print ("Aprovados: ",aprovados, "Exames: ",exames, "Reprovados: ",reprovados)
print ("A média da sala é: ",somaMedias / 6)