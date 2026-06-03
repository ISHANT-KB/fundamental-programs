def main():
    ch = input("Enter a character: ").strip()
    if not ch:
        return
    c = ch[0].lower()

    if c.isalpha() and c in "aeiou":
        print("Vowel")
    else:
        print("Consonant")


if __name__ == "__main__":
    main()

