#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum=sum+i;}
    printf("%d",sum);
    return 0;
}