'''
5. Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a
escolha do usuário.
'''

n1 = int(input("Insira o primeiro número: "))
n2 = int(input("Insira o segundo número: "))
escolha = int(input("Digite a opção: "))

if escolha == 1: #média
    print((n1 + n2)/2)
elif escolha == 2: #diferença
    if n1 > n2:
        print(n1 - n2)
    else:
        print(n2 - n1)
elif escolha == 3: #produto
    print(n1*n2)
elif escolha == 4: #divisão
    if n2 != 0:
        print(n1/n2)
    else:
        print("A divisão não pode ser por zero!")