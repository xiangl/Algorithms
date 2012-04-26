#include <stdio.h>
#include <conio.h>
#include <string.h>

void CountSort();
/////////////////////伪代码////////////////////////////圆括号数字表示思考顺序
/*
1.根据桶原则映射：
1）i //src数组计数器
2）idx //tmp数组计数器
4）for i=0 to n-1 //遍历映射
3）		tmp[src[i]]//src数组映射到桶数组,将src元素值作为tmp的下标

2.tmp数组从第一位开始，改写src数组值:
6) k=length(*tmp)//需要求到tmp的长度
5）for(i=idx=0;idx<k-1;idx++)
2）		while(tmp[idx]!=0) do //temp数组内容是src数组中重复元素的个数                                      /
1）			src[i] = idx//tmp数组下标是src数组值                                                          /1)-4)表示完成tmp数组中一位的改写
3)			i++;//src移动到下一个位置
4)			tmp[idx]--//因为temp数组内容是src数组中重复元素的个数，所以每次赋值后，temp数组内中的值要减1	 /			
*/





int main()
{
	int SrcStr[100];
	int TmpStr[100];
	int i = 0;
	int n;
	printf("请输入数字：\n");
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