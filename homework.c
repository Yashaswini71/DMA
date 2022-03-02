#include<stdio.h>
void area_rect_cbv(int l1,int b1)
{
    printf("\narea of rectangle:\t%d  (call by value)",l1*b1);
}

void area_rect_cbr(int *l1,int *b1)
{
    printf("\narea of rectangle:\t%d  (call by reference)",*l1**b1);
}

void area_sq_cbv(int l1)
{
    printf("\narea of square:\t%d  (call by value)",l1*l1);
}

void area_sq_cbr(int *l1)
{
    printf("\narea of square:\t%d  (call by reference)",*l1**l1);
}

void even_odd_cbv(int n1)
{
    if(n1==0)
        printf("\n0 is neither even nor odd");
    else if(n1%2==0)
        printf("\n%d is even",n1);
    else if(n1%2==1)
        printf("\n%d is odd",n1);
}

void even_odd_cbr(int *n1)
{
    if(*n1==0)
        printf("\n0 is neither even nor odd");
    else if(*n1%2==0)
        printf("\n%d is even",*n1);
    else if(*n1%2==1)
        printf("\n%d is odd",*n1);
}

void fibonacii_cbv(int n)
{
    int n1=0,n2=1,n3;    
    printf("\n%d %d",n1,n2);
    for(int i=2;i<n;i++)  
    {    
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    }  
}

enum day_fun{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    int c;
    printf("\n\nenter an option fromthe list\n");
    printf("0 - Area of rectangle (call by value)\n");
    printf("1 - Area of rectangle (call by reference)\n");
    printf("2 - Area of square (call by value)\n");
    printf("3 - Area of square (call by reference)\n");
    printf("4 - check number is even or odd (call by value)\n");
    printf("5 - check number is even or odd (call by reference)\n");
    printf("6 - Fibonacii series (call by value)\n\n");
    scanf("%d",&c);
    
    switch(c)
    {
        case sunday:
        {
            int l,b;
            printf("\nlength:\t");
            scanf("%d",&l);
            printf("\nbreadth:\t");
            scanf("%d",&b);
            area_rect_cbv(l,b);
        }
        break;
        case monday:
        {
            int l,b;
            printf("\nlength:\t");
            scanf("%d",&l);
            printf("\nbreadth:\t");
            scanf("%d",&b);
            area_rect_cbr(&l,&b);
        }
        break;
        case tuesday:
        {
            int l;
            printf("\nlength:\t");
            scanf("%d",&l);
            area_sq_cbv(l);
        }
        break;
        case wednesday:
        {
            int l;
            printf("\nlength:\t");
            scanf("%d",&l);
            area_sq_cbr(&l);
        }
        break;
        case thursday:
        {
            int n;
            printf("\nenter a number:\t");
            scanf("%d",&n);
            even_odd_cbv(n);
        }
        break;
        case friday:
        {
            int n;
            printf("\nenter a number:\t");
            scanf("%d",&n);
            even_odd_cbr(&n);
        }
        break;
        case saturday:
        {
            int n;
            printf("\nenter number of digits in fibonacii series to print:\t");
            scanf("%d",&n);
            fibonacii_cbv(n);
        }
    }
    return 0;
}