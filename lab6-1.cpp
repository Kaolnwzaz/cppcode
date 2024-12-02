#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main() {
	struct Student ST1;
	struct Student ST2;
	
	strcpy(ST1.name, "Panpat");
	strcpy(ST2.name, "Boss");
	ST1.age = 16;
	ST2.age = 15;
	ST1.grade = 3.99;
	ST2.grade = 1.00;
	
	printf("Name : %s\n", ST1.name);
	printf("Age : %d\n", ST1.age);
	printf("grade : %.2f\n", ST1.grade);
	printf("--------------------------------\n");
	printf("Name : %s\n", ST2.name);
	printf("Age : %d\n", ST2.age);
	printf("grade : %.2f\n", ST2.grade);
	
	return 0;
}