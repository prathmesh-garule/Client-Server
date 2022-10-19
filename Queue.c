#include <stdio.h>
#define max 10

int arr[max], i, opt, front = -1, rear = -1;

void main()
{

    while (1)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Show\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Enter a valid Choice");
            break;
        }
    }
}

void enqueue()
{
    int val;
    if (rear == max - 1)
    {
        printf("The Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter the value to insert: ");
        scanf("%d", &val);
        rear++;
        arr[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Element deleteed from the Queue: %d\n", arr[front]);
        front++;
    }
}

void show()
{
    if (front == -1 || front > rear)
    {
        printf("No Element is present\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}
