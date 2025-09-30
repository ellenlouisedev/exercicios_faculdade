'''
6. Faça um programa que receba um valor N e retorne e N-ésimo termo da sequência de Fibonacci.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, · · ·
'''

N = int(input("Digite um número inteiro N: "))
if N ==1:
    print(0)
elif N == 2:
    print(1)
else:
    contador = 3
    anterior = 0
    atual = 1
    while contador <= N:
        proximo = anterior + atual
        anterior = atual
        atual = proximo
        contador = contador + 1

        print (atual)