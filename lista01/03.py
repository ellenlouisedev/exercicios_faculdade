# 3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

# ALGORITMO mp

nota1 = float(input("Insira a primeira nota: "))
p1 = int(input("Insira o peso da primeira nota: "))
nota2 = float(input("Insira a segunda nota: "))
p2 = int(input("Insira o peso da segunda nota: "))
nota3 = float(input("Insira a terceira nota: "))
p3 = int(input("Insira o peso da terceira nota: "))

media_ponderada = (nota1*p1 + nota2*p2 + nota3*p3) / (p1+p2+p3)

print ("A média ponderada é: ", media_ponderada)