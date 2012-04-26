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

void swap(char * const a,char * const b)
{
	char c;
	c = *a;
	*a = *b;
	*b = c;
}

int Partition(int left,int right,char *const str)
{
	char pivotkey=str[left];
	//printf("right=%d\n",right);
	//printf("pivotkey=%c\n",pivotkey);
	//printf("str[right]=%c\n",str[right]);
	int count=0;
	while(left<right)
	{
		while(left < right && pivotkey <= str[right])//pivotkey在这个由左右flag抓住不放的算法中，也可以写成str[left]/str[right]，这里这样写是为了方便
			right--;
			//printf("	right=%d\n",right);
			//printf("	str[right]=%c\n",str[right]);
			//printf("	str=%s\n",str);
			swap(&str[left],&str[right]);//如果不减则交换
			//printf("	str=%s\n",str);
		while(left < right && pivotkey >= str[left])
			left++;
			//printf("	left=%d\n",left);
			//printf("	str[left]=%c\n",str[left]);
			//("	str=%s\n",str);
			swap(&str[left],&str[right]);//如果不加则交换
			//printf("	str=%s\n",str);
		count++;
		//printf("	count=%d\n",count);
	}
	return left;//最后是left=right
}

void QuickSort(int left,int right,char * const str)
{
	int pivot;
	if(left<right)
	{
		pivot=Partition(left,right,str);	
		//printf("left=%d\n",left);
		//printf("right=%d\n",right);
		QuickSort(left,pivot-1,str);
		QuickSort(pivot+1,right,str);
	}
}



int main()
{
	char strin[100];
	gets(strin);
	int strleft,strright;
	strleft=0;
	strright=CountArray(strin)-1;
	QuickSort(strleft,strright,strin);
	printf("str=%s",strin);
	getch();
	return 0;
}