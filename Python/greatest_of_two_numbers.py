def main():
    a, b = map(int, input("Enter two numbers: ").split())

    if a >= b:
        print(f"Greatest number is {a}")
    else:
        print(f"Greatest number is {b}")


if __name__ == "__main__":
    main()


