sal = float(input("Digite seu salario: "))

if sal > 1250:
    novoSal = sal + sal * 0.10
elif sal < 1250:
    novoSal = sal + sal * 0.30

print(novoSal)