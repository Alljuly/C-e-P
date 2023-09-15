preco_mercadoria = float(input("Digite o preço da mercadoria: "))
percentual_desconto = float(input("Digite o percentual de desconto: "))

valor_desconto = preco_mercadoria * (percentual_desconto / 100)

preco_a_pagar = preco_mercadoria - valor_desconto

print(f"O valor do desconto é: {valor_desconto}")
print(f"O preço a pagar é: {preco_a_pagar}")
