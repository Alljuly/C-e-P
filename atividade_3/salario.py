salario = float(input("Digite o valor do salário: "))
aumento_percentual = float(input("Digite a porcentagem de aumento: "))


valor_aumento = salario * (aumento_percentual / 100)

novo_salario = salario + valor_aumento

print(f"O valor do aumento é: {valor_aumento}")
print(f"O novo salário é: {novo_salário}")
