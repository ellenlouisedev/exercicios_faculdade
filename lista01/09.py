'''
9. Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
(a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
(b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. 
'''

peso = float(input("Digite o peso: "))

peso_engordar = peso + (peso*0.15)
peso_emagrecer = peso - (peso*0.20)

print(f"O peso após engordar 15% seria: {peso_engordar:.3f}")
print(f"O peso após emagrecer 15% seria: {peso_emagrecer:.3f}")