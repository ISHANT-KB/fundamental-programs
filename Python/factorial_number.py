def main():
    num = int(input("Enter a number to find factorial: "))
    fact = 1

    if num > 20:
        print("Factorial result may overflow for numbers greater than 20.")
        return

    if num < 0:
        print("Factorial is not defined for negative numbers.")
    else:
        for i in range(1, num + 1):
            fact *= i
        print(f"Factorial of {num} is {fact}")


if __name__ == "__main__":
    main()

