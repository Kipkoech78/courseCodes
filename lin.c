#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Unable to push element %d.\n", data);
        return;
    }

    newNode->data = data;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d into the stack.\n", data);
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }

    struct Node* temp = top;
    top = top->next;
    int poppedData = temp->data;
    free(temp);
    printf("Popped element: %d\n", poppedData);
}

void display() {
    if (top == NULL) {
        printf("Stack is empty. Nothing to display.\n");
        return;
    }

    struct Node* current = top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty. No item at the top.\n");
        return;
    }
    printf("Item at the top: %d\n", top->data);
}

int main() {
    int choice, data;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Display the item at the top\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
