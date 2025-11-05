#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i, a, b, c, sum, arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	sum = 0;
	printf("input year a mmonth b and day c中间用空格隔开\n");
	scanf("%d %d %d", &a, &b, &c);
	if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
		arr[1] = 29;
	for (i = 0; i < b-1; i++)
		sum = sum + arr[i];
	sum = c + sum;
	printf("这是该年的第%d天\n", sum);
	return 0;                                                    

}
