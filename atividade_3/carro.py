km_percorridos = float(input("Digite a quantidade de km percorridos: "))
dias_aluguel = int(input("Digite a quantidade de dias de aluguel: "))

diaria = 60
preco_km = 0.15

preco_total = (dias_aluguel * diaria) + (km_percorridos * preco_km)

print(f"O preço a pagar é de R$ {preco_total:.2f}")
