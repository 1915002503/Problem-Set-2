/*
5. Print entire array each element separated by space
*/

#include<stdio.h>
int main(){
int a[100]={1,2,3,4,5,6,7,8,9,10},higherBound=10;
int i;
for(i=0;i<higherBound;i++){
printf(" %d",a[i]);
}
return 0;
}
