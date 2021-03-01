//题目：消失的数字，有一个0-n数组，但是少了一个数，找出消失的数
#include<stdio.h>
int research(int* nums, int numsize)
{
	int x = 0;
	for (int i = 0; i < numsize;i++)
	{
		x ^= nums[i];//将数组的所有数异或
	}
	for (int i = 0; i < numsize; i++)
	{
		x ^= i;//将已经异或缺少数的数组在与不缺少的数组异或，得到的就为消失的数
	}
	return x;
}
int main()
{
	int nums[10] = { 9,8,7,6,0,5,3,2,1 };
	int ret = research(nums,10);
	printf("消失的数字为%d\n",ret);
	return 0;
}