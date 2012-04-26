#include <stdio.h>
#include <conio.h>
#include <string.h>

void CreatHashtable(char * const strin,int n,char * const strout)
	{
		int a;
	}

int main()
{
	char SrcStr[100];
	char DstStr[100];
	int n;
	printf("请输入字符串：\n");
	gets(SrcStr);
	CreatHashtable(SrcStr,n,DstStr);
	/*int i=0;
	int j=0;
	int count=1;
	int length=strlen(SrcStr);
		while(i<length&&j<length)
			{	
				
				if(SrcStr[i]==SrcStr[i+1])
					{
						count++;
						i++;
						printf("SrcStr[i]=%c\n",SrcStr[i]);
						printf("DstStr[j]=%c\n",DstStr[j]);
						printf("i=%d\n",i);
						printf("j=%d\n",j);
						printf("count=%d\n",count);
					}
				else
					{
						DstStr[j]=SrcStr[i];
						
						DstStr[j+1]=count-'0';//int怎样专场char
						printf("DstStr[j]=%c\n",DstStr[j]);
						printf("DstStr[j+1]=%c\n",DstStr[j+1]);
						printf("DstStr[j-1]=%c\n",DstStr[j-1]);
						if(count>1)
							j=j+2;
						else
							j++;
						
					}
				DstStr[j]='\0';
			}
		printf("String is %s",DstStr);
		*/
		getch();
	return 0;
}