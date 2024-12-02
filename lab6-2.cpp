#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main() {
	struct Student students[2];
	
	strcpy(students[0].name, "Kao");
	students[0].age = 16;
	students[0].grade = 3.99;
	
	strcpy(students[1].name, "sebast");
	students[1].age = 2;
	students[1].grade = 0.25;
	
	for (int i = 0; i < 2; i++) {
		printf("Student %d\n", i+1);
		printf("Name = %s\n", students[i].name);
		printf("Age = %s\n", students[i].age);
		printf("Grade = %s\n", students[i].grade);
		printf("-----------------------------\n");
	}
	return 0;
}