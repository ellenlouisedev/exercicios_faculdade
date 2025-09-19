'''
Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de
aumento encontra-se na tabela a seguir.
'''

salario = float(input("Insira o seu salário: "))

if salario <= 300:
    novo_salario = salario + (salario*0.35)
    print(novo_salario)
elif salario > 300:
    novo_salario = salario + (salario*0.15)
    print(novo_salario)