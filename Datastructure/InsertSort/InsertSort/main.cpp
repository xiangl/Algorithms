#include <stdio.h>
#include <conio.h>

void InsertSort(char * const str,int n)
{
	int i,j;
	char flag;
	for(i=0;i<n-1;i++)//��������str[0]Ϊflag,str[1]Ϊ����
	{
		/*if(str[i]<str[i+1])//�߽�����
			i++//�߽���չ�����Ի�һ�ַ���
		*/
		printf("i=%d\n",i);
		printf("str=%s\n",str);
		if(str[i]>str[i+1])//�߽�����
		{
			flag=str[i+1];//�������ڱ�����
			printf("	str[i]=%c\n",str[i]);
			printf("	str[i+1]=%c\n",str[i+1]);
			printf("	flag=%c\n",flag);
			for(j=i;j>=0;j--)//�����������飬�ɹ��Ĺؼ������ڱ߽�����á��ڱ����뵽������
			{
				printf("		j=%d\n",j);
				printf("	str[j]=%c\n",str[j]);
				printf("	str[j+1]=%c\n",str[j+1]);
				printf("		flag=%c\n",flag);
				if(flag<str[j])
					{
						str[j+1]=str[j];//���������ƶ�
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

