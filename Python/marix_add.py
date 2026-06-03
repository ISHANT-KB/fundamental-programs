def main():
    r_c = input("Enter number of rows and columns: ").split()
    r = int(r_c[0])
    c = int(r_c[1])

    mat1 = [[0 for _ in range(c)] for _ in range(r)]
    mat2 = [[0 for _ in range(c)] for _ in range(r)]
    sum_mat = [[0 for _ in range(c)] for _ in range(r)]

    print("Enter elements of first matrix:")
    for i in range(r):
        for j in range(c):
            mat1[i][j] = int(input())

    print("Enter elements of second matrix:")
    for i in range(r):
        for j in range(c):
            mat2[i][j] = int(input())

    for i in range(r):
        for j in range(c):
            sum_mat[i][j] = mat1[i][j] + mat2[i][j]

    print("Sum of the two matrices:")
    for i in range(r):
        for j in range(c):
            print(f"{sum_mat[i][j]} ", end="")
        print()


if __name__ == "__main__":
    main()

