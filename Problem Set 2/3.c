/*
3. Insert value X(take input X from user) in the array at the third(3rd)
   index and shift all other value to the right.
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

    printf("Enter Value X :\n");
    scanf("%d",&x);

    int index = 3;
    for(i=size-1;i>=index;i--)
    {
       a[i+1] = a[i];
    }
     a[index] = x;
     size++;

    printf("\n Result \n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
