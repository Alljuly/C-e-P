def calcPrest(valor, par):
    return valor / par

sal = float(input("Qual o seu salario:\n"))
valor = float(input("Qual o valor da casa:\n"))
par = int(input("Qual a quantidade de parcelas:\n"))

prest = calcPrest(valor, par)

if prest > sal * 0.3:
    print("Seu emprestimo foi NEGADO.")
else:
    print("Seu emprestimo foi APROVADO.")
    
print("Cada prestação ficaria no valor de: {:.2f}".format(prest))
