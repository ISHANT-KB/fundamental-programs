def main():
    n = int(input("Enter a number: "))
    temp = n

    digits = list(str(abs(n)))
    power = len(digits)

    s = 0
    for ch in digits:
        d = int(ch)
        s += d ** power

    if s == abs(temp):
        print("Armstrong number")
    else:
        print("Not an Armstrong number")


if __name__ == "__main__":
    main()

