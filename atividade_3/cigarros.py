cigarros_por_dia = int(input("Quantidade de cigarros fumados por dia: "))
anos_fumados = int(input("Quantos anos você já fumou: "))

total_cigarros = cigarros_por_dia * 365 * anos_fumados
tempo_perdido_minutos = total_cigarros * 10  

tempo_perdido_dias = tempo_perdido_minutos / (24 * 60)  


print(f"Um fumante perderá aproximadamente {tempo_perdido_dias:.2f} dias de vida.")
