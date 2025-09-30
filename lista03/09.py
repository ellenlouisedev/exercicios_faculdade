'''
9. Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.
'''
primos = 0

for contador in range(10):
    num = int(input("Digite um número: "))
    eh_primo = True

    if num < 2:
        eh_primo = False
    else:
        for i in range(2, num // 2 + 1):
            if num % i == 0:
                eh_primo = False

    if eh_primo == True:
        primos += 1

print("Quantidade de números primos digitados:", primos)