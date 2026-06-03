def main():
    n = int(input("Enter a number: "))
    n = abs(n)
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    print("Sum of digits:", s)


if __name__ == "__main__":
    main()

