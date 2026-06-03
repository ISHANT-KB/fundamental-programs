def main():
    n = int(input("Enter the value of n: "))

    a = 0
    b = 1

    if n <= 0:
        print("Invalid input")
    elif n == 1:
        print(f"The {n}th Fibonacci number is {a}")
    elif n == 2:
        print(f"The {n}th Fibonacci number is {b}")
    else:
        for _ in range(3, n + 1):
            c = a + b
            a = b
            b = c
        print(f"The {n}th Fibonacci number is {b}")


if __name__ == "__main__":
    main()

