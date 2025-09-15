'''
10. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre: 
a) o valor correspondente ao lucro do distribuidor; 
b) o valor correspondente aos impostos; 
c) o preço final do veículo.
'''

preco_fabrica = float(input("Insira o valor de fábrica do veículo: "))
percent_lucro_dist = float(input("Insira o percentual de lucro do distribuidor: "))
percent_impostos = float(input("Insira o percentual de impostos: "))

lucro_dist = preco_fabrica*percent_lucro_dist/100
valor_impostos = preco_fabrica*percent_impostos/100
preco_final = preco_fabrica + lucro_dist + valor_impostos

print("O valor correspondente ao lucro do distribuidor: ",lucro_dist)
print("O valor correspondente aos impostos: ",valor_impostos)
print("O preço final do veículo: ",preco_final)