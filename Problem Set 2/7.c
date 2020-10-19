/*
7. Search a value X(take input X from user) in the array and print "Found"
   if X found in the array otherwise print "Not Found".
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10}, maxSize = 100, size = 10;
    int i,x,count=0;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter Value X :\n");
    scanf("%d",&x);
    for(i=0;i<size;i++)
    {
      if(x == a[i])
        {
         count = 1;
        }
    }

    if(count==1)
    {
     printf("Found\n");
    }
    else
    {
     printf("Not Found\n");
    }

    return 0;
}

