def main():
    n = int(input("Enter a number: "))

    isPrime = 1
    if n <= 1:
        isPrime = 0
    else:
        i = 2
        while i * i <= n:
            if n % i == 0:
                isPrime = 0
                break
            i += 1

    if isPrime:
        print(f"{n} is a Prime Number")
    else:
        print(f"{n} is Not a Prime Number")


if __name__ == "__main__":
    main()

