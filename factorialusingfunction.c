#include<stdio.h>

int fact(int n);
int main(){

    int n,f;
    printf("Enter number to find factorial\n");
    scanf("%d",&n);

    f=fact(n);
    printf("factorial is %d",f);
    return 0;
}

int fact(int n){
    if(n==1||n==0)
        return 1;
    else
        return (n*fact(n-1));//using recursion
}
