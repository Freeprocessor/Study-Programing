#include <stdio.h>
//#include <windows.h>
int main() {
	int A=0,B=0,C=0;
	scanf("%d %d %d", &A, &B, &C);
    if(((A<=B)&&(B<=C))||((C<=B)&&(B<=A)))
        printf("%d", B);
    else if (((B<=A)&&(A<=C))||((C<=A)&&(A<=B)))
        printf("%d", A);
    else if (((B<=C)&&(C<=A))||((A<=C)&&(C<=B)))
        printf("%d", C);
//	system("pause");
	return 0;
}