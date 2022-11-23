#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int exchange(int m)
{
	int ret = m;
	int ex = 0;
	int surplus = 0;
	ex = m;
	while (ex >= 1) 
	{
		ex += surplus;
		ret += ex / 2;
		surplus = ex % 2;
		ex /= 2;
	}
	return ret;
}
int main()
{
	int m = 20;
	int a=exchange(m);
	printf("%d", a);
	return 0;
}