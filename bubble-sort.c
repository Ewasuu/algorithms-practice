#include <stdio.h>

void change_positions(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int input_vector[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (input_vector[j] > input_vector[j + 1])
            {
                change_positions(&input_vector[j], &input_vector[j + 1]);
            }
        }
    }
}

int print_array(int input_vector[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("value %d: %d \n", i + 1, input_vector[i]);
    }

    printf("\n bubble sort finished");
}

int main(int argc, char const *argv[])
{
    int input_vector[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(input_vector) / sizeof(input_vector[0]);

    bubbleSort(input_vector, n);

    print_array(input_vector, n);
    return 0;
}
