while True:
    print("Menu de Operacoes:")
    print("1 - Adicao")
    print("2 - Subtracao")
    print("3 - Multiplicacao")
    print("4 - Divisao")
    print("5 - Sair")

    opcao = input("Escolha uma opcao: ")

    if opcao == '5':
        print("Saindo do programa. Adeus!")
        break

    num = int(input("Digite um numero para calcular a tabuada: "))

    if opcao == '1':
        print(f"Tabuada de Adicao para {num}:")
        for i in range(1, 11):
            print(f"{num} + {i} = {num + i}")
    elif opcao == '2':
        print(f"Tabuada de Subtracao para {num}:")
        for i in range(1, 11):
            print(f"{num} - {i} = {num - i}")
    elif opcao == '3':
        print(f"Tabuada de Multiplicacao para {num}:")
        for i in range(1, 11):
            print(f"{num} x {i} = {num * i}")
    elif opcao == '4':
        print(f"Tabuada de Divisao para {num}:")
        for i in range(1, 11):
            print(f"{num} / {i} = {num / i:.2f}")
    else:
        print("Opcao invalida. Tente novamente.")
