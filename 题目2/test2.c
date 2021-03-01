//一个数组里面的数都出现了2次，只有2个数出现了一次，求出这2个数
#include<stdio.h>
int* search(int* nums, int numsize,int returnsize )
{
	int ret = 0;
	int m = 0;
	int x1 = 0;
	int x2 = 0;
	for (int i = 0; i < numsize; i++)
	{
		ret ^= nums[i];
	}
	while (m < 32)
	{
		if (ret & (1 << m))
			break;
		else
			m++;
	}
	for (int i = 0; i < numsize; i++)
	{
		if (nums[i] & (1 << m))
			x1 ^= nums[i];
		else
			x2 ^= nums[i];
	}
	int* array = (int*)malloc(sizeof(int) * 2);
	array[0] = x1;
	array[1] = x2;
	return array;
}

int main()
{
	int nums[] = {1,1,2,2,3,3,4,4,5,5,6,7};
	int* arr = search(nums,sizeof(nums)/sizeof(nums[0]),2);   
	
	printf("2个数分别为%d%d\n",arr[0],arr[1]);
	return 0;
}