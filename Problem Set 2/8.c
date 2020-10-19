/*
8. Search a value X(take input X from user) in the array and print the index
   if X found in the array otherwise print -1.
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
    printf("\n");
    printf("Enter Value X :\n");
    scanf("%d",&x);
    for(i=0;i<size;i++)
    {
      if(x == a[i])
        {
         index = i;
        }
    }

    if(index==-1)
    {
     printf("&&&Index Error,Index Returned to %d\n",index);
    }
    else
    {
     printf("Found at index : %d\n",index);
    }

    return 0;
}
