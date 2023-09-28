consumo = int(input("Digite a quantidade de kWh consumida: "))
tipo = input("Digite o tipo de instalação (R para residências, C para comércios, I para indústrias): ")

if tipo.lower() == 'r':
    if consumo <= 500:
        preco = consumo * 0.40
    else:
        preco = consumo * 0.65
elif tipo.lower() == 'c':
    if consumo <= 1000:
        preco = consumo * 0.55
    else:
        preco = consumo * 0.60
elif tipo.lower() == 'i':
    if consumo <= 5000:
        preco = consumo * 0.55
    else:
        preco = consumo * 0.60
else:
    print("Tipo de instalação inválido.")
    exit(1)  

print(f"O preço a pagar é: R$ {preco:.2f}")
