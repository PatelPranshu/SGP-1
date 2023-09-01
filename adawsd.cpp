#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;   
    if (head != NULL) {
        head->prev = newNode;
    }   
    return newNode;
}
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
   if (head == NULL) {
        return newNode;
    }
   struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
   current->next = newNode;
    newNode->prev = current;
        return head;
}
struct Node* deleteAtBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
    struct Node* newHead = head->next;
    if (newHead != NULL) {
        newHead->prev = NULL;
    }
   free(head);
    return newHead;
}
struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
   if (head->next == NULL) {
        free(head);
        return NULL;
    }
   struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
   if (current->prev != NULL) {
        current->prev->next = NULL;
    }
   free(current);
    return head;
}
void display(struct Node* head) {
    printf("Linked List: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main() {
    struct Node* head = NULL;
    int choice, value;
   while (1) {
        printf("\n");
        printf("1. Insert at beginning\t");
        printf("2. Insert at end\t");
        printf("3. Delete at beginning\t");
        printf("4. Delete at end\t");
        printf("5. Display\t");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
       switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;
            case 3:
                head = deleteAtBeginning(head);
                break;
            case 4:
                head = deleteAtEnd(head);
                break;
            case 5:
                display(head);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
   return 0;
}