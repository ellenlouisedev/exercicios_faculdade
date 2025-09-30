'''
5. Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
• a quantidade de pessoas com idade superior a 50 anos;
• a média das alturas das pessoas com idade entre 10 e 20 anos;
• a porcentagem de pessoas com peso inferior a 40 kg em todas as pessoas analisadas.
'''

cont = 0
qntdIdade = 0
qntdAlturas = 0
somaAlturas = 0
qntPeso = 0

while cont < 5:
    idade = int(input("Digite a idade: "))
    altura = float(input("Digite a altura: "))
    peso = float(input("Digite o peso:"))
    if idade >= 51:
        qntdIdade = qntdIdade + 1
    if idade >= 10 and idade <=20:
        qntdAlturas = qntdAlturas + 1
        somaAlturas = somaAlturas + altura
    if peso < 40:
        qntPeso = qntPeso + 1
    cont = cont + 1
    
mediaAlturas = somaAlturas/qntdAlturas
porcentagem = qntPeso/cont*100

print("Pessoas com idade superior a 50 anos: ",qntdIdade)
print("Média das alturas das pessoas com idade entre 10 e 20 anos",mediaAlturas)
print(f"Porcentagem de pessoas com peso inferior a 40 kg em todas as pessoas analisadas: {porcentagem:.2f}")