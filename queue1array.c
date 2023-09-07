#include <stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (rear == size - 1)
    {
        printf("overflow");
    }
    else
    {
        if (front == -1)
        front = 0;
        rear++;
        queue[rear] = x;
        printf("Inserted the value %d.\n", queue[rear]);
    }
};
void dequeue()
{
    if (front == -1)
    {
        printf("The queue is empty.\n");
    }
    else
    {
        printf("The deleted element is %d\n", queue[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
};
void display()
{
    if (rear == -1)
    {
        printf("The queue is empty.\n");
    }
    else
    {
        int i;
        printf("The queue elements are \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d \n",queue[i]);
        }
    }
};
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    dequeue();
    display();
    return 0;
}