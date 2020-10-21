/*
7. Print entire array in reverse , each element separated by space
*/

#include<stdio.h>
int main(){
int a[100]={1,2,3,4,5,6,7,8,9,10},higherBound=10;
int i;
for(i=higherBound-1;i>-1;--i){
printf("%d ",a[i]);
}
return 0;
}
