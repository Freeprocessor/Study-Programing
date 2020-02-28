#include <stdio.h>
//#include <windows.h>
int main() {
	int A=0, B=0, C=0, D=0, E=0;
	scanf("%d", &A);
	scanf("%d", &B);    
    C=(int)A*(B%10);
    D=(int)A*((B%100)/10);
    E=(int)A*(B/100);
	printf("%d\n", C);
	printf("%d\n", D);
	printf("%d\n", E);
    printf("%d\n", A*B);
//	system("pause");
}