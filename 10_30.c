#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	char ch1;
	printf("put a character\n");
	ch1 = getchar();
	if (ch1 >= '0' && ch1 <= '9')
		printf("it is a number");
	else
		printf("it is not a number");
	return 0;
}*/
/*
int main()
{
	int a, b, c;
	printf("input a b c 使得它们能够组成三角形\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
	{
		if (a==b && b==c)
			printf("等边三角形\n");
		else if (a ==b || b ==c || a ==c)
			printf("等腰三角形\n");
		else if (a* a== b * b + c * c || b * b ==a * a + c * c || c * c ==a * a + b * b)
			printf("直角三角形\n");
		else
			printf("一般三角形\n");

	}
	else
		printf("输入的数无法构成三角形\n");
	return 0;
}*/
/*int main()
{
	double p, p1;
	int t;
	printf("iuput prince p and time t 中间用空格隔开\n");
	scanf("%lf %d", &p, &t);
	switch (t)
	{
	case 1:
	case 2:
		p1 = p; break;
	case 3:
	case 4:
	case 5:
		p1 = p * 0.98; break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
		p1 = p * 0.95; break;
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		p1 = p * 0.92; break;
	default:
		p1 = p * 0.90; break;
	}
	printf("price=%.4lf\n", p);
	printf("time=%d\n", t);
	printf("打折后=%.4lf\n", p1);
	
	return 0;
}*/
/*int main()
{
	double p, w, d, f;
	int r;
	printf("input price p   weight w  route r中间用空格隔开\n");
	scanf(" %lf %lf %d", &p, &w, &r);
	if (r < 250)
		d = 0;
	else if (r >= 250 && r < 500)
		d = 0.05;
	else if (r >= 500 && r < 1000)
		d = 0.10;
	else if (r >= 1000 && r < 2000)
		d = 0.15;
	else if (r >= 2000 && r < 3000)
		d = 0.20;
	else if (r >= 3000)
		d = 0.30;
	else
		printf("请输入正常整数值\n");
	f = p * w * r * (1 - d);
	printf("最终运费为%.3lf\n", f);
	return 0;
}*/
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