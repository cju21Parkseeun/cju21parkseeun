#include <stdio.h>

int rec_sum(int n);

int main(void)
{

	int n;
	scanf_s("%d", &n);
	
	printf("%d", rec_sum(n));
	return 0;

}

int rec_sum(int n)
{

	if (n == 1)
	{
		return 1;
	}
	else return (n + rec_sum(n - 1));

}