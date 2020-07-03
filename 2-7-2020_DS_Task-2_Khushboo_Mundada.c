#include <stdio.h>
#include <stdlib.h>

int push(char elem,char *sta,int top)
{
    sta[++top]=elem;
}
int pop(char*sta,int top)
{
    if(top ==-1)
    {
        return top;

    }
    else
    {
        return --top;

    }
}

int isEmpty(int top)
{
   if(top ==-1)
    {
        return 1;

    }
    else
    {
        return 0;

    }
}
int main ()
{
    char arr[50];
    int top = -1;
    int i =0;
    printf("enter the brackets ");
    scanf("%s",arr);
    while (arr !='\0')
    {
        if(arr[i] == '(')
        {
            top = push(arr[i],arr,top);

        }
        else if(arr[i]==')')
        {
            top = pop(arr,top);

        }
        i++;
    }

    if(isEmpty(top))
    {
        printf("balanced");
    }
    else
    {
        printf("not balanced");
    }

}