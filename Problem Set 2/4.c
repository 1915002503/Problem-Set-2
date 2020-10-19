/*
4. Insert value X(take input X from user) in the array at Kth(take input K from user)
index and shift all other value to the right.
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10}, maxSize = 100, size = 10;
    int i,x,k;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("Enter Value X :\n");
    scanf("%d",&x);
    printf("Enter Index K :\n");
    scanf("%d",&k);

    if(k<0 || k>=maxSize)
    {
      printf("\nArray Index Out of Bound\n");
    }

    else if(k>size)
    {
      printf("\nArray Index Out of Range\n");
    }

    else
    {

        for(i=size-1;i>=k;i--)
        {
           a[i+1] = a[i];
        }
         a[k] = x;
         size++;

        printf("\n\nAfter :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n");

    }

    return 0;
}
