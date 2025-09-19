'''
6. Crie um programa que solicite ao usuário o nome e o preço de um produto. Em seguida, o programa
deve pedir para que o usuário informe a categoria do produto usando um código caractere, que pode
ser uma das seguintes letras:
'''

produto = input("Digite o nome do produto: ")
preco = float(input("Insira o preço do produto: "))
categoria = input("Informe a categoria do produto: ")

if categoria == 'e' or 'E':
    desconto = preco - (preco*0.15)
elif categoria == 'v' or 'V':
    desconto = preco - (preco*0.10)
elif categoria == 'a' or 'A':
    desconto = preco - (preco*0.5)
else:
    print("Escolha uma categoria entre E, V ou A.")

print("Nome do produto: ",produto)
print("Categoria: ",categoria)
print("Preço original: ",preco)
print("Desconto: ",desconto)
print("Preço final: ",preco - desconto)
