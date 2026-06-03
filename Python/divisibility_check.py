def main():
    a, b = map(int, input("Enter two numbers: ").split())

    if b == 0:
        print("Cannot divide by zero")
        return

    if a % b == 0:
        print(f"{a} is divisible by {b}")
    else:
        print(f"{a} is not divisible by {b}")


if __name__ == "__main__":
    main()

