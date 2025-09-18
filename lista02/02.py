'''
2. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se
encontra na tabela a seguir:
'''

n1 = float(input("Insira a primeira nota: "))
n2 = float(input("Insira a segunda nota: "))

media = (n1+n2)/2

if media >= 7:
    print("Aprovado")
elif  media >= 3 and media < 7:
    print("Exame")
else:
    print("Reprovado")