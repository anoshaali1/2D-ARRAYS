#include <stdio.h>

void multiplication(int arr1[][column1], int arr2[][column2], int result[][column2], int row1, int column1, int row2, int column2)
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < column1; k++)
                result[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
}

int main()
{
    int row1, column1;
    int row2, column2;

    printf("Enter the number of rows of the 1st matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns of the 1st matrix: ");
    scanf("%d", &column1);
    printf("Enter the number of rows of the 2nd matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns of the 2nd matrix: ");
    scanf("%d", &column2);

    if (column1 != row2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int arr1[row1][column1];
    int arr2[row2][column2];
    int result[row1][column2];

    printf("Enter the elements of the 1st matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        printf("Enter the elements of row %d: \n", i + 1);
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the elements of column %d: ", j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");

    printf("Enter the elements of the 2nd matrix: \n");
    for (int i = 0; i < row2; i++)
    {
        printf("Enter the elements of row %d: \n", i + 1);
        for (int j = 0; j < column2; j++)
        {
            printf("Enter the elements of column %d: ", j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n");

    multiplication(arr1, arr2, result, row1, column1, row2, column2);

    printf("The multiplication matrix is: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
