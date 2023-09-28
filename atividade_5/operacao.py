num1 = int(input("Digite o primeiro numero:\n"))
num2 = int(input("Digite o segundo numero:\n"))

opc = int(input("Qual a operacao:\n1 - SOMA\n2 - SUBTRACAO\n3 - MULTIPLICACAO\n4 - DIVISAO\nDigite o numero referente a operacao: "))

if opc == 1:
    res = num1 + num2
    print("O resultado e:", res)
elif opc == 2:
    res = num1 - num2
    print("O resultado e:", res)
elif opc == 3:
    res = num1 * num2
    print("O resultado e:", res)
elif opc == 4:
    if num2 != 0:
        res = num1 / num2
        print("O resultado e:", res)
    else:
        print("Divisao por zero nao e permitida.")
else:
    print("Operacao invalida.")
