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
	int count=0;
	while(left<right)
	{
		while(left < right && pivotkey <= str[right])
			right--;
		while(left < right && pivotkey >= str[left])
			left++;
		count++;
	}
	return left;//×îºóÊÇleft=right
}

void QuickSort(int left,int right,char * const str)
{
	int pivot;
	if(left<right)
	{
		pivot=Partition(left,right,str);	
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