'''
8. Crie um algoritmo ou programa que solicite ao usuário um número inteiro positivo N e, em seguida,
imprima na tela todos os números primos que existem no intervalo de 2 a N.
'''

numero_solicitado = int(input("Digite um número inteiro positivo: "))

for numero_testado in range(2, numero_solicitado + 1):
    primo = True
    for divisor in range(2, int(numero_testado ** 0.5) + 1):
        if numero_testado % divisor == 0:
            primo = False
    if primo:
        print(numero_testado)