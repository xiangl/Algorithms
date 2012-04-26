#include <stdio.h>
#include <conio.h>

void SelectionSort(char * const str,int n)
{
	int i,j;
	int min;
	char temp;
	//printf("n=%d\n",n);check
	for(i=0;i<n;i++)
	{
		min = i;
		//printf("i=%d\n",i);check
		for(j=i+1;j<n;j++)
		{
			/*printf(" j=%d\n",j);check
			printf("beginstr=%s\n",str);
			printf(" beginmin=%d\n",min);
			*/
			if(str[min]>str[j])
				min=j;
			//printf(" compare min=%d\n",min);check
		/*	one	3	2	5	1	4
				m
				2	3	5	1	4
					m
				2	3	5	1	4
							m
				1	3	5	2	4
					m
		*/
		}
		if(i!=min)
		{
			temp = str[min];
			str[min]=str[i];
			str[i]=temp;
		}
		else
			min = i;
	}
}
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



int main()
{
	char strin[100];
	gets(strin);//要用字符串就不要用scanf函数——c中scanf没有自动加'\0'，要用gets()函数
	int n = CountArray(strin);
	SelectionSort(strin,n);
	printf("str=%s\n",strin);
	getch();
	return 0;
}

