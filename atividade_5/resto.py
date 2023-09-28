def calcular_resto_divisao(dividendo, divisor):
    while dividendo >= divisor:
        dividendo -= divisor
    return dividendo

dividendo = int(input("Digite o dividendo: "))
divisor = int(input("Digite o divisor: "))

resto = calcular_resto_divisao(dividendo, divisor)

print(f"O resto da divisao de {dividendo} por {divisor} e: {resto}")
