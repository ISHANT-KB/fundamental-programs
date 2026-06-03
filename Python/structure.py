def main():
    name = input("enter name: ").strip().split()[0]
    age = int(input("enter age: ").strip())
    marks = float(input("enter marks: ").strip())

    print("Student Details:")
    print(f"Name: {name}")
    print(f"Age: {age}")
    print(f"Marks: {marks:.2f}")


if __name__ == "__main__":
    main()

