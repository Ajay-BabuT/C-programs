#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int flag=0,i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0){
        flag=1;
        break;}
    }{
    if(flag==0){
        printf("Prime number");}
        else{
            printf("Not Prime");}
    }
        return EXIT_SUCCESS;
}