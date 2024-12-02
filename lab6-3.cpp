#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main() {
	struct Student students[7];
	
	for (int i = 0; i < 7; i++) {
		printf("Student %d :", i+1);
		printf("Name = ");
		scanf("%s", &students[i].name);
		printf("Age = ");
		scanf("%d", &students[i].age);
		printf("Grade = ");
		scanf("%f", &students[i].grade);
		printf("\n");
	}
	
	for(int i=0; i<7; i++){
		printf("%s \t", students[i].name);
		printf("%d \t", students[i].age);
		printf("%f \n", students[i].grade);
	}
	return 0;
}