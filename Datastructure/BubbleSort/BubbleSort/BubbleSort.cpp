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
		for(j=0;j<n-1-i;j++)//�Ż�ǰ�ȿ���Խ�����⣬����Խ��
							//1.�ȿ���ָ��Խ������.
							//1.1���ʹ�õ���ָ��* str����str++�ǲ��еģ���Ϊ�����±���ָ���Ǹ�����ָ�룬�����ƶ����������ֻ�������ָ��p����str���ƶ�
							//1.2ѭ�����õ���j+1,�����Ǵ�0��ʼ��������û���ڱ�λ����ôĩλ�±�Ӧ����n-1,��j+1���Ϊn-1������j���Ϊn-2.�����ָ�룬����С�����ָ���±�nλ����'\0'λ��ʱ��ָ������Ϊ�ա������������ָ��'\0'λ�����Ϊ�գ�����һλΪ����
							//1.3�����С����ָ����������±�ָ����'\0'������\0����ĸ����������̨��ʾ�������ĸԽ��Խ�ٵĴ�����
							//ð������ļ����������Ż���ԭ��ѭ��������for(j=0;j<n-1;j++)
							//1.j����Ǵ�ǰ����������Ϊ���ڽ�������ǰ�����У�����ÿ��ð��������������ǰ�沿��Ϊ��������Ϊ�˼����������Ƚϣ���Ҫ����j����Ϊ��j<n-1-i
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
		for(j=n-2;j>=i;j--)//��Ϊ�Ǵ�0��ʼ��������������±���n-1��������j+1�ļ��㣬Ϊ�˲�Խ�磬j���ֻ��Ϊn-2��n-1λ������j+1��
		{
			if(str[j] > str[j+1])//ð������ļ����������Ż���
							//1.j����ǴӺ���ǰ��������Ϊ���ڽ������ɺ���ǰ���У�����ÿ��ð������ǰ������򣬺��沿��Ϊ���������ȽϷ��ϡ�ð������ϸ���������˼�롣Ϊ�˼����������Ƚϣ���Ҫ����j����Ϊ��j>=i
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
	gets(strin);//Ҫ���ַ����Ͳ�Ҫ��scanf��������c��scanfû���Զ���'\0'��Ҫ��gets()����
	int n = CountArray(strin);
	SortBubble(strin,n);
	printf("str=%s\n",strin);
	BetterSortBubble(strin,n);
	printf("betterstr=%s\n",strin);
	getch();
	return 0;
}

