#include<stdio.h>

enum output{no,yes};

void even_odd_cbv(int a)
{
    if(a==no)
        printf("\n0 is neither even nor odd\n");
    else if(a%2!=no)
        printf("\n%d is odd\n",a);
    else 
        printf("\n%d is even\n",a);
}

void even_odd_cbr(int *a)
{
    if(*a==no)
        printf("\n0 is neither even nor odd\n");
    else if(*a%2!=no)
        printf("\n%d is odd\n",*a);
    else 
        printf("\n%d is even\n",*a);
}

int main()
{
    int a;
    printf("\nenter a number");
    scanf("%d",&a);
    // even_odd_cbv(a);//check a number is even or odd using call by value
    even_odd_cbr(&a);//check a number is even or odd using call by reference
}