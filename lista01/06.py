# 6. Faça um programa que calcule e mostre a área de um trapézio.

# ALGORITMO area_trapezio

b_menor = float(input("Qual o tamanho da base menor do trapézio? "))
b_maior = float(input("Qual o tamanho da base maior do trapézio? "))
altura = float(input("Qual a altura do trapézio? "))

area = (b_menor+b_maior) * altura / 2

print ("A área é: ", area)