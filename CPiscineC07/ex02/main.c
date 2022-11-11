#include<stdio.h>
int ft_ultimate_range(int **range, int min, int max);

int main()
{	int a;
	int *aa = &a;
	int **abc = &aa;
	printf("%d\n",ft_ultimate_range(abc,5,10)); 
}
