//1.Write a program to Print Fibonacci Series using recursion

int fibonacci(int n);
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the num : ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d \t",fibonacci(i));
	}
}

int fibonacci(int n)
	{
		if(n==0)
		return 0;
		else if(n==1)
		return 1;
		else
		return (fibonacci(n-1)+fibonacci(n-2));
	}