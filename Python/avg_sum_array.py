def main():
    n = int(input("Enter the number of elements: "))
    arr = []
    total = 0.0

    print(f"Enter {n} elements:")
    for _ in range(n):
        x = float(input())
        arr.append(x)
        total += x

    average = total / n if n != 0 else 0.0

    print(f"Sum: {total:.2f}")
    print(f"Average: {average:.2f}")


if __name__ == "__main__":
    main()

