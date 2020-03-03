#include <stdio.h>
//#include <windows.h>
int main() {
	int A=0, B=0, i=0;
    for(i=0;i<4;i++){
        scanf("%d %d", &A, &B);
        printf("%d\n",A+B);
    }
}