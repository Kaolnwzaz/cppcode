#include <stdio.h>
#include <cmath>
const float pi = 3.14;

main(){
	float R;
	printf("Enter R:");
	scanf("%f", &R);
	float area = pi*pow(R,2);
	printf("area is %.2f", area);
}