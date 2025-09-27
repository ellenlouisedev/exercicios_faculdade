'''
2. Faça um programa que receba a idade de oito pessoas, calcule e mostre:
(a) a quantidade de pessoas em cada faixa etária;
(b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
(c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas

FAIXA ETÁRIA | IDADE
    1ª       | Até 15 anos
    2ª       | De 16 a 30 anos
    3ª       | De 31 a 45 anos
    4ª       | De 46 a 60 anos
    5ª       | Acima de 60 anos
'''

faixaEtaria1 = 0
faixaEtaria2 = 0
faixaEtaria3 = 0
faixaEtaria4 = 0
faixaEtaria5 = 0
cont = 0

while cont < 8:
    idade = int(input("Digite a idade: "))
    if idade <= 15:
        faixaEtaria1 = faixaEtaria1 + 1
    elif idade >= 16 and idade <= 30:
        faixaEtaria2 = faixaEtaria2 + 1
    elif idade >= 31 and idade <= 45:
        faixaEtaria3 = faixaEtaria3 + 1
    elif idade >= 46 and idade <= 60:
        faixaEtaria4 = faixaEtaria4 + 1
    elif idade > 60:
        faixaEtaria5 = faixaEtaria5 + 1
    cont = cont + 1

print("Quantidade de pessoas em cada faixa etária: ")
print("1ª :",faixaEtaria1)
print("2ª :",faixaEtaria2)
print("3ª :",faixaEtaria3)
print("4ª :",faixaEtaria4)
print("5ª :",faixaEtaria5)

print("Porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas: ",(faixaEtaria1/cont)*100)
print("Poncentagem de pessoas na última faixa etária com relação ao total de pessoas: ",(faixaEtaria5/cont)*100)