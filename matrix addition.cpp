#include <stdio.h>
#include <stdlib.h>

int row, column;

void inputArray(int** arr)
{
    for (int i = 0; i < row; i++)
    {
        printf("Enter the elements of %d row: \n", i + 1);
        for (int j = 0; j < column; j++)
        {
            printf("Enter the elements of %d column: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int** arr)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

void addArray(int** arr1, int** arr2, int** result)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main()
{
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    // Allocate memory for arr1
    int** arr1 = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++)
    {
        arr1[i] = (int*)malloc(column * sizeof(int));
    }

    // Allocate memory for arr2
    int** arr2 = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++)
    {
        arr2[i] = (int*)malloc(column * sizeof(int));
    }

    // Allocate memory for result
    int** result = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++)
    {
        result[i] = (int*)malloc(column * sizeof(int));
    }

    printf("Enter the Elements of 1st Matrix: \n");
    inputArray(arr1);

    printf("Enter the Elements of 2nd Matrix: \n");
    inputArray(arr2);

    printf("\n");
    printf("The Elements of 1st Matrix: \n");
    printArray(arr1);

    printf("\n");
    printf("The Elements of 2nd Matrix: \n");
    printArray(arr2);

    addArray(arr1, arr2, result);

    printf("\n");
    printf("The Elements of resultant Matrix: \n");
    printArray(result);

    // Free the dynamically allocated memory
    for (int i = 0; i < row; i++)
    {
        free(arr1[i]);
        free(arr2[i]);
        free(result[i]);
    }
    free(arr1);
    free(arr2);
    free(result);

    return 0;
}
