/*
14. Delete a value after X (take input X from user) from the array shift all other value to left. If X is not
present in the given array print "Element Not Found". Only delete the first occurrence of the value.
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10}, maxSize = 100, size = 10;
    int i,x,index=-1;
    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\nEnter Value X :\n");
    scanf("%d",&x);
    for(i=0;i<size;i++)
    {
      if(x == a[i])
        {
         index=i;
         index++;
         break;
        }
    }
    if(index == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        if(index>=size)
        {
          printf("Out of Range\n");
        }
        else
        {
        for(i=index;i<size-1;i++)
            {
              a[i] = a[i+1];
            }
             size--;

        printf("Result \n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

        }
    }
    return 0;
}
