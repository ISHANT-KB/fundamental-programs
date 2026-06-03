def main():
    a = 10
    b = 20
    c = 30

    if a >= b and a >= c:
        result = a
    elif b >= a and b >= c:
        result = b
    else:
        result = c

    print(f"greatest number is {result}")


if __name__ == "__main__":
    main()

