# 5. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

# ALGORITMO salario

salario_atual = float(input("Digite o salário atual: "))
percent_aumento = float(input("Digite o percentual de aumento: "))

aumento = salario_atual*percent_aumento/100
novo_salario = salario_atual+aumento

print("Você recebeu um aumento de",aumento,"e o novo salário será:",novo_salario)