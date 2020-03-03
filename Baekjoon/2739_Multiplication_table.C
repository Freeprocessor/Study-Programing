#include <stdio.h>
//#include <windows.h>
int main() {
	int A=0, i=0;
	scanf("%d", &A);   
    for(i=1; i<10; i++){
        printf("%d * %d = %d\n",A, i, i*A);
    }
//    system("pause");
}