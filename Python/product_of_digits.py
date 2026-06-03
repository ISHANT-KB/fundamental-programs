def main():
    n = int(input("Enter a number: "))
    n = abs(n)

    prod = 1
    if n == 0:
        prod = 0
    else:
        while n > 0:
            prod *= n % 10
            n //= 10

    print("Product of digits:", prod)


if __name__ == "__main__":
    main()

