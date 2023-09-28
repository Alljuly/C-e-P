def calcular_raiz_quadrada(n):
    b = 2 
    while abs(n - b * b) > 0.0001:
        p = (b + (n / b)) / 2
        b = p
    return b

numero = float(input("Digite o número para calcular a raiz quadrada: "))
raiz_quadrada = calcular_raiz_quadrada(numero)
print(f"A raiz quadrada de {numero} é aproximadamente {raiz_quadrada:.4f}")
