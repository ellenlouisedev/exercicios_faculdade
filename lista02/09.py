'''
Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano.
Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com
a tabela a seguir. Mostre o saldo médio e o valor do crédito.
'''

saldo_medio = float(input("Insira o saldo médio: "))

if saldo_medio > 400:
    credito = saldo_medio + (saldo_medio*0.30)
elif saldo_medio <= 400 and saldo_medio == 300:
    credito = saldo_medio + (saldo_medio*0.25)
elif saldo_medio <= 300 and saldo_medio == 201:
    credito = saldo_medio + (saldo_medio*0.20)
elif saldo_medio <= 200:
    credito = saldo_medio + (saldo_medio*0.10)

print("Saldo médio: ",saldo_medio)
print("Valor do crédito: ",credito)