/*
2. Insert value X(take input X from user) in the array at the end of currently stored elements.
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10}, maxSize = 100, size = 10;
    int i,x;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("Push value :\n");
    scanf("%d",&x);

    printf("\n\n");

    a[size] = x;
    size++;

    printf("Result : \n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
