#include<stdio.h>
#include <string.h>

int c2857()
{
	int i=0;
	
	char fbi_1[11]={0};
	char fbi_2[11]={0};
	char fbi_3[11]={0};
	char fbi_4[11]={0};
	char fbi_5[11]={0};
	char fbi[10]={0};
	
	fgets(fbi_1, sizeof(fbi_1)+1, stdin);//gets_s는 1급 표준 함수가 아니어서 컴파일이 불가능하다 ㅅㅂ,.,
	fgets(fbi_2, sizeof(fbi_2)+1, stdin);
	fgets(fbi_3, sizeof(fbi_3)+1, stdin);
	fgets(fbi_4, sizeof(fbi_4)+1, stdin);
	fgets(fbi_5, sizeof(fbi_5)+1, stdin);
	
	for(i=0; i<9; i++)
	{
		if(fbi_1[i]=='F'&&fbi_1[i+1]=='B'&&fbi_1[i+2]=='I')
		{
			fbi[0]=1;
		}
		if(fbi_2[i]=='F'&&fbi_2[i+1]=='B'&&fbi_2[i+2]=='I')
		{
			fbi[2]=2;
		}
		if(fbi_3[i]=='F'&&fbi_3[i+1]=='B'&&fbi_3[i+2]=='I')
		{
			fbi[4]=3;
		}
		if(fbi_4[i]=='F'&&fbi_4[i+1]=='B'&&fbi_4[i+2]=='I')
		{
			fbi[6]=4;
		}
		if(fbi_5[i]=='F'&&fbi_5[i+1]=='B'&&fbi_5[i+2]=='I')
		{
			fbi[8]=5;
		}
	}
	
	//for(i=0; i<10; i++)
	//{
		printf("%s",fbi);
	//}
	return 0;
}