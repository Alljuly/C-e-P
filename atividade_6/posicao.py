palavra = input("Qual a palavra:\n")
p, c = input("Qual a posição e o caractere:\n").split()
p = int(p)

for i in range(p, len(palavra)):
    if palavra[i] == c:
        print(f"O caractere {c} foi encontrado na posição {i}")
        break
