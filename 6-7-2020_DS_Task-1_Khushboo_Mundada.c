#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));

    head->data = 100;
    head->next = NULL;

    Node *second_link = (Node *)malloc(sizeof(Node));

    second_link->data = 200;
    second_link->next = NULL;

    head->next = second_link;

    Node *third_link = (Node *)malloc(sizeof(Node));

    third_link->data = 300;
    third_link->next = NULL;

    second_link->next = third_link;

    Node *forth_link = (Node *)malloc(sizeof(Node));

    forth_link->data = 400;
    forth_link->next = NULL;

    third_link->next = forth_link;

    Node *temp = head;

    while(temp-> next!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("%d -> NULL\n\n",temp->data);

    //Insertion code
    Node *new_link = (Node *)malloc(sizeof(Node));

    new_link->data = 250;

    new_link->next = second_link->next;
    second_link->next = new_link;

    Node *temp2 = head;

    printf("After insertion of node :\n");
    while(temp2-> next!=NULL)
    {
        printf("%d -> ",temp2->data);
        temp2 = temp2->next;
    }
    printf("%d -> NULL\n\n",temp2->data);

    //Deletion code
    Node *prev = second_link;
    Node *curr = new_link;

    prev->next = curr->next;
    curr->next = NULL;

    free(curr);

    Node *temp3 = head;
    printf("Original Link after deletion of node :\n");
    while(temp3-> next!=NULL)
    {
        printf("%d -> ",temp3->data);
        temp3 = temp3->next;
    }
    printf("%d -> NULL\n",temp3->data);


    return 0;
}
