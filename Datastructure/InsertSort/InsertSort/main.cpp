#include <stdio.h>
#include <conio.h>

void InsertSort(char * const str,int n)
{
	int i,j;
	char flag;
	for(i=0;i<n-1;i++)//无序区，str[0]为flag,str[1]为有序
	{
		/*if(str[i]<str[i+1])//边界有序
			i++//边界扩展，所以换一种方法
		*/
		printf("i=%d\n",i);
		printf("str=%s\n",str);
		if(str[i]>str[i+1])//边界无序
		{
			flag=str[i+1];//无序区哨兵复制
			printf("	str[i]=%c\n",str[i]);
			printf("	str[i+1]=%c\n",str[i+1]);
			printf("	flag=%c\n",flag);
			for(j=i;j>=0;j--)//！！！！经验，成功的关键就在于边界的设置。哨兵插入到有序区
			{
				printf("		j=%d\n",j);
				printf("	str[j]=%c\n",str[j]);
				printf("	str[j+1]=%c\n",str[j+1]);
				printf("		flag=%c\n",flag);
				if(flag<str[j])
					{
						str[j+1]=str[j];//有序区后移动
						printf("		movestr=%s\n",str);
						str[j]=flag;
						printf("		laststr=%s\n",str);
						printf("		str[j]=%c\n",str[j]);
					}
			}
		}

	}
}
int CountArray(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}	
	return i;
}



int main()
{
	char strin[100];
	gets(strin);
	int n = CountArray(strin);
	InsertSort(strin,n);
	printf("str=%s\n",strin);
	getch();
	return 0;
}

