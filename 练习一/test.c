//��Ŀ����ʧ�����֣���һ��0-n���飬��������һ�������ҳ���ʧ����
#include<stdio.h>
int research(int* nums, int numsize)
{
	int x = 0;
	for (int i = 0; i < numsize;i++)
	{
		x ^= nums[i];//����������������
	}
	for (int i = 0; i < numsize; i++)
	{
		x ^= i;//���Ѿ����ȱ�������������벻ȱ�ٵ�������򣬵õ��ľ�Ϊ��ʧ����
	}
	return x;
}
int main()
{
	int nums[10] = { 9,8,7,6,0,5,3,2,1 };
	int ret = research(nums,10);
	printf("��ʧ������Ϊ%d\n",ret);
	return 0;
}