#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
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