def main():
    n = int(input("Enter a number: "))
    sign = -1 if n < 0 else 1
    n = abs(n)

    rev = 0
    while n > 0:
        rev = rev * 10 + (n % 10)
        n //= 10

    print("Reversed number:", sign * rev)


if __name__ == "__main__":
    main()

