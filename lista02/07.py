'''
Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores de R$ 500,00.
Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma
mensagem, caso ele não tenha direito ao aumento.
'''

salario = float(input("Insira o seu salário: "))

if salario <= 500:
    novo_salario = salario + (salario*0.30)
    print(novo_salario)
else:
    print("Você não tem direito ao aumento.")