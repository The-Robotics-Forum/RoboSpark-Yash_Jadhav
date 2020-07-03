//Task_1 - Make Student Record
#include <stdio.h>

struct info
{
    int stud_id;
    char stud_name[30];
    char stud_year[10];
    float stud_cgpa;
};

int main()
{
    struct info stud_1;
    struct info stud_2;
    struct info stud_3;
    struct info stud_4;

    printf("Record for Student_1 : ");
    printf("\nStudent_1 id : ");
    scanf("%d",&stud_1.stud_id);
    printf("\nStudent_1 name : ");
    scanf("%s",stud_1.stud_name);
    printf("\nStudent_1 year : ");
    scanf("%s",stud_1.stud_year);
    printf("\nStudent_1 cgpa : ");
    scanf("%f",&stud_1.stud_cgpa);

    printf("\n\nRecord for Student_2 : ");
    printf("\nEnter id : ");
    scanf("%d",&stud_2.stud_id);
    printf("\nEnter name : ");
    scanf("%s",stud_2.stud_name);
    printf("\nEnter year : ");
    scanf("%s",stud_2.stud_year);
    printf("\nEnter cgpa : ");
    scanf("%f",&stud_2.stud_cgpa);

    printf("\n\nRecord for Student_3 : ");
    printf("\nEnter id : ");
    scanf("%d",&stud_3.stud_id);
    printf("\nEnter name : ");
    scanf("%s",stud_3.stud_name);
    printf("\nEnter year : ");
    scanf("%s",stud_3.stud_year);
    printf("\nEnter cgpa : ");
    scanf("%f",&stud_3.stud_cgpa);

    printf("\n\nRecord for Student_4 : ");
    printf("\nEnter id : ");
    scanf("%d",&stud_4.stud_id);
    printf("\nEnter name : ");
    scanf("%s",stud_4.stud_name);
    printf("\nEnter year : ");
    scanf("%s",stud_4.stud_year);
    printf("\nEnter cgpa : ");
    scanf("%f",&stud_4.stud_cgpa);

}