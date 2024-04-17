#include<stdio.h>
int sum();

int main(){
int s;
s=sum();
printf("Sum = %d",s);
return 0;}

	int sum(){
		int a,b,sum=0;
		printf("Enter a and b\n");
		scanf("%d%d",&a,&b);
		sum=a+b;
		return sum;}
