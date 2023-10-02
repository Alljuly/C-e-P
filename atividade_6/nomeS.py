nome_completo = input("Digite o nome completo: ")


palavras = nome_completo.split()

if len(palavras) >= 2:
    sobrenome = palavras[-1]
    nome = ' '.join(palavras[:-1])  
    print(f"{sobrenome.upper()}/{nome}")
else:
    print("Nome incompleto ou inválido.")
