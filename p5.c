#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����ȭ Combination 

//�Է°� ��ƴ
int combination(int n,int r);
int factorial(int n);
int get_integer(void);

int main(void)
{
	int n,r;
	
//	get_integer();
printf("n �Է�:");
	scanf("%i",&n);
	
	printf("r �Է�:");
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
	
	printf("n �Է�:");
	scanf("%i",&n);
	
	printf("r �Է�:");
	scanf("%i",&r);
	
	return n,r;
}
//�и�/���� ��� ���丮�� ������> ��� �Լ� 

//���� �� ���
 
