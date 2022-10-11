#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//구조화 Combination 

//입력값 받틈
int combination(int n,int r);
int factorial(int n);
int get_integer(void);

int main(void)
{
	int n,r;
	
//	get_integer();
printf("n 입력:");
	scanf("%i",&n);
	
	printf("r 입력:");
	scanf("%i",&r);
	printf("%i",combination(n,r));
	return 0;
}

int combination(int n, int r)
{
	int comb;
	comb=factorial(n)/(factorial(n-r)*factorial(r));
	return (comb);
}

int factorial(int n)
{
	int i;
	int res=1;
	for (i=1;i<=n;i++)
		res=res*i;
	return res;
}

int get_integer(void)
{
	int n;
	int r;
	
	printf("n 입력:");
	scanf("%i",&n);
	
	printf("r 입력:");
	scanf("%i",&r);
	
	return n,r;
}
//분모/분자 계산 팩토리얼 여러개> 계산 함수 

//최종 값 출력
 
