#include<stdio.h>
int main()
{
	int a,b,result;
	int prime[10];
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	result=lcm(a,b);
	printf("The lcm of number %d and %d \n=%d",a,b,result);
	return 0;
}
int lcm(int a, int b)
{
	static int temp=1;
	if(temp%a==0 && temp%b==0)
	{
		return temp;
	}
	temp++;
	lcm(a,b);
	return temp;
}
