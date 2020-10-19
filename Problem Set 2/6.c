/*
6. Update Kth(take input K from user) in the array with the value X(take input X from user).
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
    printf("\n");
    printf("Enter Index K :\n");
    scanf("%d",&k);

    if(k<0 || k>=maxSize)
    {
      printf("\nArray Out of Bound\n");
    }

    else if(k>=size)
    {
      printf("\nArray Out of Range\n");
    }

    else
    {

        printf("Enter Value X :\n");
        scanf("%d",&x);
         a[k] = x;
        printf("Result :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n");

    }

    return 0;
}
