#include <stdio.h>
#define pi 3.1415
const float PI=3.1415;
main(){
	int age=16;
	char gender= 'M';
	char name[26]="Panpat Charoensrichairat";
	float gpa = 3.71;
	printf("I am %d year old. \n", age);
	printf("I am %c \n", gender);
	printf("My name is %s \n", name);
	printf("%c \t %.3f \n", name[7], PI);
	printf("GPA = %.2f", gpa);
}