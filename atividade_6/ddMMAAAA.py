data = input("Digite a data no formato 'DD/MM/AAAA': ")
formato_valido = False

if len(data) == 10 and data[2] == '/' and data[5] == '/':
    dia, mes, ano = map(int, data.split('/'))
    
    if 1 <= dia <= 31 and 1 <= mes <= 12 and ano >= 0:
        formato_valido = True

if formato_valido:
    print(f"Dia: {dia:02d}")
    print(f"Mês: {mes:02d}")
    print(f"Ano: {ano:04d}")
else:
    print("Formato de data inválido.")
