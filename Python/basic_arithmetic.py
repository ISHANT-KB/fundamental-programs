def main():
    a_b = input("Enter two integers: ").split()
    a = int(a_b[0])
    b = int(a_b[1])

    sum_ = a + b
    difference = a - b
    product = a * b
    quotient = (a / b) if b != 0 else 0.0

    print(f"Sum: {sum_}")
    print(f"Difference: {difference}")
    print(f"Product: {product}")

    if b != 0:
        print(f"Quotient: {quotient:.2f}")
    else:
        print("Quotient: Division by zero is undefined.")


if __name__ == "__main__":
    main()

