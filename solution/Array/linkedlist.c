#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prior;
    struct Node* next;
} Node, *Linkedlist;

Node* create() {
    Node* node = (Node*)malloc(sizeof(Node));
    node->prior = NULL;
    node->next = NULL;
    printf("Create Linkedlist successful!\n");
    return node;
}

int insert(Node* head, int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = head->next;
    node->prior = head;
    if (head->next) {
        head->next->prior = node;
    }
    head->next = node;
    printf("Insert %d successful!\n", data);
    return 1;
}

int delete(Node* head, int data) {
    if (head->next == NULL) {
        printf("The Linkedlist is empty.\n");
        return 1;
    }
    head = head->next;
    do {
        if (head->data == data) {
            head->prior->next = head->next;
            head->next->prior = head->prior;
            free(head);
        }
        head = head->next;
    } while (head->next != NULL);
}

int print(Node* head) {
    if (head->next == NULL) {
        printf("The Linkedlist is empty.\n");
        return 0;
    }
    for (; head->next != NULL; head = head->next) {
        Node* next = head->next;
        printf("%d\t", next->data);
    }
    printf("\n");
    return 1;
}

int main(void) {
    Node* head = create();
    insert(head, 1);
    insert(head, 3);
    insert(head, 4);
    insert(head, 9);
    print(head);
    delete (head, 4);
    print(head);
    return 0;
}