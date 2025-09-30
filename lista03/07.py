'''
Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço final, quantidade de parcelas e valor da parcela. Considere o seguinte:
• o preço final para compra à vista tem desconto de 20%;
• a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60;
os percentuais de acréscimo encontram-se na tabela a seguir.

QUANTIDADE DE PARCELAS | PERCENTUAL DE ACRÉSCIMOSOBRE O PREÇO FINAL
         6             |         3%
         12            |         6%
         18            |         9%
         24            |         12%
         30            |         15%
         36            |         18%
         42            |         21%
         48            |         24%
         54            |         27%
         60            |         30%
'''

valor = float(input("Digite o valor do carro: "))

aVista = valor - (valor * 0.20)

for cont in range (6, 61, 6):
    acrescimo = (cont // 6) * 3
    total = valor + (valor * acrescimo / 100)
    parcela = total / cont
    print (cont, "x de R$", round(parcela, 2), "- Total: R$",total)