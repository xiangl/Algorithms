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

void SortBubble(char* const str,int n)
{
	int i,j;
	char temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)//优化前先考虑越界问题，对于越界
							//1.先考虑指针越界问题.
							//1.1如果使用的是指针* str，则str++是不行的，因为数组下标做指针是个常量指针，不能移动；解决方法只有另给个指针p代替str来移动
							//1.2循环中用到了j+1,并且是从0开始计数，即没有哨兵位，那么末位下标应该是n-1,即j+1最多为n-1，所以j最多为n-2.如果用指针，当不小心溢出指到下标n位（即'\0'位）时，指针会输出为空。而如果用数组指到'\0'位能输出为空，再下一位为？。
							//1.3如果不小心用指针或者数组下标指到了'\0'，则会把\0与字母交换，控制台显示结果是字母越来越少的错误结果
							//冒泡排序的计数方向与优化：原来循环条件是for(j=0;j<n-1;j++)
							//1.j如果是从前向后计数，因为相邻交换是由前向后进行，所以每轮冒泡在最后输出有序，前面部分为无序区。为了减少有序区比较，需要调节j调节为：j<n-1-i
		{
			if(str[j] > str[j+1])
				{
						
					temp = str[j+1];
					str[j+1] = str[j];
					str[j] = temp;
			
				}
		
		}
	
	}
}
void  BetterSortBubble(char* const str,int n)
{
	
	int i,j;
	char temp;
	for(i=0;i<n;i++)
	{
		for(j=n-2;j>=i;j--)//因为是从0开始计数，数组最后下标是n-1。由于有j+1的计算，为了不越界，j最多只能为n-2，n-1位是留给j+1用
		{
			if(str[j] > str[j+1])//冒泡排序的计数方向与优化：
							//1.j如果是从后向前计数，因为相邻交换是由后向前进行，所以每轮冒泡在最前输出有序，后面部分为无序区，比较符合“冒泡轻的上浮”即向上思想。为了减少有序区比较，需要调节j调节为：j>=i
				{
						
					temp = str[j+1];
					str[j+1] = str[j];
					str[j] = temp;
			
				}
		
		}
	
	}
}

int main()
{
	char strin[100];
	gets(strin);//要用字符串就不要用scanf函数——c中scanf没有自动加'\0'，要用gets()函数
	int n = CountArray(strin);
	SortBubble(strin,n);
	printf("str=%s\n",strin);
	BetterSortBubble(strin,n);
	printf("betterstr=%s\n",strin);
	getch();
	return 0;
}

