#include <stdio.h>
#include <conio.h>
#include <string.h>

void CountSort();
/////////////////////α����////////////////////////////Բ�������ֱ�ʾ˼��˳��
/*
1.����Ͱԭ��ӳ�䣺
1��i //src���������
2��idx //tmp���������
4��for i=0 to n-1 //����ӳ��
3��		tmp[src[i]]//src����ӳ�䵽Ͱ����,��srcԪ��ֵ��Ϊtmp���±�

2.tmp����ӵ�һλ��ʼ����дsrc����ֵ:
6) k=length(*tmp)//��Ҫ��tmp�ĳ���
5��for(i=idx=0;idx<k-1;idx++)
2��		while(tmp[idx]!=0) do //temp����������src�������ظ�Ԫ�صĸ���                                      /
1��			src[i] = idx//tmp�����±���src����ֵ                                                          /1)-4)��ʾ���tmp������һλ�ĸ�д
3)			i++;//src�ƶ�����һ��λ��
4)			tmp[idx]--//��Ϊtemp����������src�������ظ�Ԫ�صĸ���������ÿ�θ�ֵ��temp�������е�ֵҪ��1	 /			
*/





int main()
{
	int SrcStr[100];
	int TmpStr[100];
	int i = 0;
	int n;
	printf("���������֣�\n");
	do
	{
		scanf("%d",&SrcStr[i]);
		i++;
	}
	while(SrcStr[i-1]!=-1);
	void CountSort();
	getch();
	return 0;
}