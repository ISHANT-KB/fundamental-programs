def main():
    n = int(input("Enter a number: "))
    n = abs(n)

    if n == 0:
        print("Count of digits:", 1)
        return

    count = 0
    while n > 0:
        count += 1
        n //= 10

    print("Count of digits:", count)


if __name__ == "__main__":
    main()

