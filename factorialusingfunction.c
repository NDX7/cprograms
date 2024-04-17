#include<stdio.h>

int fact(int);
int main(){

int n,f;
printf("Enter number to find factorial");
scanf("%d",&n);

f=fact(n);
printf("factorial is %d",n);
return 0;
}

int fact(int n){
	if(n==1||n==0){
	printf("factorial is 1");}
	else{
		return n*fact(n-1);
		}}
