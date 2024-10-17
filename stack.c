#include <stdio.h>
// #include <conio.h>
#define MAXSIZE 10

int stack[MAXSIZE], top = -1;

// Function to push an element onto the stack
void push() {
    if (top == MAXSIZE - 1) {
        printf("\nStack Overflow\n");
    } else {
        int value;
        printf("Enter value to push: ");
        scanf("%d", &value);
        stack[++top] = value;
        printf("%d pushed onto stack\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("\nStack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

// Function to display the elements of the stack
void display() {
    if (top == -1) {
        printf("\nStack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\n ----Stack-----");
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("\nExiting...\n"); break;
            default: printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}