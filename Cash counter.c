#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int customer) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = customer;
        printf("Customer %d added\n", customer);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Customer %d served\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}
