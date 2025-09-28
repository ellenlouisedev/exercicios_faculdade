'''
Faça um programa para calcular a área de um triângulo e que não permita a entrada de dados inválidos,
ou seja, medidas menores ou iguais a 0.
'''

l1 = float(input("Digite a medida do primeiro lado do triângulo: "))
l2 = float(input("Digite a medida do segundo lado do triângulo: "))
l3 = float(input("Digite a medida do terceiro lado do triângulo: "))
base = float(input("Digite a base do triângulo: "))
altura = float(input("Digite a altura do triângulo: "))

if l1 <= 0 or l2 <= 0 or l3 <= 0 or base <= 0 or altura <= 0:
    print("As medidas devem ser maiores que zero.")
elif (l1 + l2 > l3) and (l1 + l3 > l2) and (l2 + l3 > l1):
    area = base * altura / 2
    print("A área do triângulo é: ",area)
else:
    print("Os lados não formam um triângulo válido.")