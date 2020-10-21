/*
3. Scan values from user into an array until user input is 0(zero).
*/

#include<stdio.h>
int main()
{
   int a[100];
   int i,size=100;
   for(i=0;i<=size;i++){
   scanf("%d",&a[i]);
    if(a[i]==0){
        break;
    }
   }
   for(i=0;i<=size-1;i++){
    printf("%d",a[i]);
   }
    return 0;
}
