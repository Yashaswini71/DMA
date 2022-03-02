/*call by reference*/
#include<stdio.h>
int rectangle (int l,int b)
{
    return l*b;
}
int main()
{
    int l,b,a;
    printf("\nenter length:\t");
    scanf("%d",&l);
    printf("\nenterbreradth:\t");
    scanf("%d",&b);
    a=rectangle(l,b);
    printf("\n\narea of rectangle is\t%d",a);
    return 0;
}

/*call by value*/
#include<stdio.h>
int rectangle (int *l,int *b)
{
    return *l* *b;
}
int main()
{
    int l,b,a;
    printf("\nenter length:\t");
    scanf("%d",&l);
    printf("\nenterbreradth:\t");
    scanf("%d",&b);
    a=rectangle(&l,&b);
    printf("\n\narea of rectangle is\t%d",a);
    return 0;
}