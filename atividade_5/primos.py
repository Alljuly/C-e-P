def is_prime(num):
    if num <= 1:
        return False
    elif num == 2:
        return True
    elif num % 2 == 0:
        return False
    else:
        for i in range(3, int(num ** 0.5) + 1, 2):
            if num % i == 0:
                return False
        return True

num = int(input("Digite um numero: "))

if is_prime(num):
    print(f"{num} e um numero primo.")
else:
    print(f"{num} nao e um numero primo.")
