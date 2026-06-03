def main():
    n = int(input("Enter the value of n: "))
    count = 0
    num = 2

    if n <= 0:
        print("Invalid input")
        return

    while count < n:
        isPrime = 1
        i = 2
        while i * i <= num:
            if num % i == 0:
                isPrime = 0
                break
            i += 1

        if isPrime:
            count += 1
        num += 1

    print(f"The {n}th prime number is {num - 1}")


if __name__ == "__main__":
    main()

