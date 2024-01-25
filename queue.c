// First in first out
#include <stdio.h>
#define SIZE 5

int values[SIZE], currentSize = -1;

void enQueue(int value)
{
    if (currentSize == SIZE - 1)
    {
        printf("Our queue is full\n");
    }
    else
    {
        currentSize++;
        values[currentSize] = value;
        printf("value %d has been inserted correctly\n", value);
    }
}

void deQueue()
{
    if (currentSize == -1)
        printf("Our queue is empty\n");
    else
    {
        int value = values[0];

        int longitude = sizeof(values) / sizeof(values[0]);

        for (size_t i = 0; i < longitude; i++)
        {
            values[i] = values[i + 1];
        }

        currentSize--;

        printf("value %d has been deleted correctly\n", value);
    }
}

void printQueue()
{
    if (currentSize == -1)
    {
        printf("There are no values in the queue");
    }
    else
    {
        printf("The values in the queue are: \n");

        int longitude = sizeof(values) / sizeof(values[0]);

        for (size_t i = 0; i < longitude; i++)
        {
            printf("value %d: ", (i + 1));
            printf("%d\n", values[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    deQueue();
    deQueue();
    enQueue(10);
    printQueue();
    return 0;
}
