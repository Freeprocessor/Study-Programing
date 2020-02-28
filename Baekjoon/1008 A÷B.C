#include <stdio.h>

int main() {
	double A=0, B=0;
	scanf("%lf %lf", &A, &B);
    //if((A<0 && A>10)||(B<0 && B>10)) 
    //    return 0;
	printf("%0.9lf", (double)A/B);
    return 0;
}