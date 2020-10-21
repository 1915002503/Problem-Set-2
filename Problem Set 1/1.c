/*
1. Scan N( take input N from user ) values from user into an array.

*/
#include<stdio.h>
int main()
{
    int a[100];
    int n,i;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("Enter value : ");
        for(i=0;i<n;i++){
                  scanf("%d",&a[i]);
        }
    return 0;
}

