#include <stdio.h>
#include <conio.h>
int CountArray(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}	
	//printf("length=%d",i); check
	return i;
}

int BinarySearch(char * const str,int n,int key)
{
	int mid,left=0,right=n-1;
	int location;
	while(left<right)
	{
		mid = (left+right)/2;
		if(key>str[mid])
			left = mid+1;
		if(key<str[mid])
			right = mid-1;
		if(key=str[mid])
			location = mid;
		return location;
	}
	//if(key>mid)
		//BinarySearch(str,可以用递归方法，设置两个flag类似快排来查找，不过代码复杂
	return -1;
}

int main()
{
	char strin[100];
	int n;
	char key;
	int keylocation;
	printf("请输入字符串：\n");
	gets(strin);
	printf("请输入需要查找的字符：\n");
	key=getch();
	n=CountArray(strin);
	keylocation=BinarySearch(strin,n,key);
	printf("str=%s\n",strin);
	printf("keylocaition=%d",keylocation);
	getch();
	return 0;
}