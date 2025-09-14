"""
8. Faça um programa que receba um número positivo e maior que zero, calcule e mostre: 
(a) o número digitado ao quadrado; 
(b) o número digitado ao cubo; 
(c) a raiz quadrada do número digitado; 
(d) a raiz cúbica do número digitado.
"""

# ALGORITMO abcd

num = float(input("Digite um número positivo e maior que zero: "))

ao_quadrado = num**2
ao_cubo = num**3
raiz_quadrada = num**(1/2)
raiz_cubica = num**(1/3)


print ("O resultado do número ao quadrado é: ",ao_quadrado)
print ("O resultado do número ao cubo é: ", ao_cubo)
print (f"O resultado da raiz quadrada do número é: {raiz_quadrada:.2f}")
print (f"O resultado da raiz cubica do número é: {raiz_cubica:.2f}")