def is_palindrome(number):
   
    number_str = str(number)
    
   
    if number_str == number_str[::-1]:
        return True
    else:
        return False


number = int(input("Digite um número: "))


if is_palindrome(number):
    print(f"{number} é um número palíndromo.")
else:
    print(f"{number} não é um número palíndromo.")
