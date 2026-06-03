def main():
    n = int(input("Enter a number: "))
    temp = n

    total = 0
    if n < 0:
        print("Not a strong number")
        return

    while temp > 0:
        d = temp % 10
        fact = 1
        for i in range(1, d + 1):
            fact *= i
        total += fact
        temp //= 10

    if total == n:
        print("Strong number")
    else:
        print("Not a strong number")


if __name__ == "__main__":
    main()

