/*
10. Delete a value from before Kth index(take input K from user) from the array shift all other value to left.
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10}, maxSize = 100, size = 10;
    int i,k;
    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter Index K :\n");
    scanf("%d",&k);
    k--;
    if(k<0 || k>=maxSize)
    {
      printf("\nArray Index Out of Bound\n");
    }
    else if(k>=size)
    {
      printf("\nArray Index Out of Range\n");
    }
    else
    {
        for(i=k;i<size-1;i++)
        {
          a[i] = a[i+1];
        }
         size--;
        printf("Result :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

    }

    return 0;
}

