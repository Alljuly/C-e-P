frase1 = input("Digite a primeira frase: ")
frase2 = input("Digite a segunda frase: ")

def inverter_e_substituir(frase):
    return ''.join(['*' if letra in 'Aa' else letra for letra in reversed(frase)])

frase1_invertida = inverter_e_substituir(frase1)
frase2_invertida = inverter_e_substituir(frase2)

print(f"Frase 1 invertida com A trocado por *: {frase1_invertida}")
print(f"Frase 2 invertida com A trocado por *: {frase2_invertida}")
