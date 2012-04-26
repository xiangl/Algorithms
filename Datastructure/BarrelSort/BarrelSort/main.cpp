for(strOutCout=0;)
	printf("str=%s",strOut);
}

int main()
{
	char strin[100];
	char strout[100];
	gets(strin);
	int n = CountArray(strin);
	BucketsSort(strin,n,strout);
	printf("str=%s",strin);
	getch();
	return 0;
}