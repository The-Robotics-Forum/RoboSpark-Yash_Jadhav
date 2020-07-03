#include <stdio.h>
#include <stdlib.h>

typedef struct stud
{
    char name[20];
    int roll[5];
    int roll_no;
    int rear,front;
}stud;

void initialize(stud* q)
{
    q->rear = 0;
    q->front = 0;
}

void enqueue(stud* q, int no)
{
    if(no%2 == 0)
    {
        q->roll[q->rear++] = no;
    }
}

void print(stud* q)
{
    if(isEmpty(q))
    {
        printf("Queue is empty");
        return;
    }
    printf("\nFront ");
    for(int i=q->front; i<q->rear; i++)
    {
        printf("%d ",q->roll[i]);
    }
    printf(" Rear\n");
}

int isEmpty(stud* q)
{
    return q->front == q->rear;
}

int main()
{
    struct stud student;
    stud* q1 = (stud*)malloc(sizeof(stud));
    initialize(q1);
    printf("Enter details for 5 Student");
    for(int i=1;i<=5;i=i+1)
    {
        printf("\nEnter Stud_%d Name : ",i);
        scanf("%s",student.name);
        printf("\nEnter Roll : ");
        scanf("%d",&student.roll_no);
        enqueue(q1,student.roll_no);
    }
    print(q1);

}
