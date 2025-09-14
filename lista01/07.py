# 7. Faça um programa que calcule e mostre a área de um círculo. 

# ALGORITMO area_circulo
import math

raio = float(input("Insira o raio do círculo: "))

area = math.pi * raio**2

print(f"A área do círculo é {area:.2f}")