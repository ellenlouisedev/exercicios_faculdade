'''
3. Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que
receba o código e o valor de quinze transações, calcule e mostre:
• o valor total das compras à vista;
• o valor total das compras a prazo;
• o valor total das compras efetuadas; e
• o valor de primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três
vezes.
'''
cont = 0
transacaoV = 0
transacaoP = 0

while cont < 15:
    codigo = (input("Digite o código: "))
    transacao = float(input("Digite o valor da transação: "))
    if codigo == 'V':
        transacaoV = transacaoV + transacao
    elif codigo == 'P':
        transacaoP = transacaoP + transacao
    else:
        print("Digite um código válido")
    cont = cont + 1

print("O valor total das compras á vista: ",transacaoV)
print("O valor total das compras a prazo: ",transacaoP)
print("O valor total das compras efetuadas: ",transacaoV + transacaoP)
print("O valor de primeira prestação das compras a prazo juntas: ",transacaoP/3)