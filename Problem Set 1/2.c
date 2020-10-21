/*
2. Scan values from user into an array until end of file.
*/
#include<stdio.h>
int main()
{
    int a[100];
    int i;
    while(scanf("%d",&a[i])!=EOF){
        printf("%d",a[i]);
    }
    return 0;
}
