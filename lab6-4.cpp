#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main() {
	FILE *file = fopen("C:\\Users\\kao\\Documents\\Overwatch\\watermelon", "w");
	if (file == NULL) {
		printf("Could not open file");
	}
	struct Student ST[7];
	for (int i = 0; i < 7; i++) {
		printf("Student %d :", i+1);
		printf("Name = ");
		scanf("%s", &ST[i].name);
		printf("Age = ");
		scanf("%d", &ST[i].age);
		printf("Grade = ");
		scanf("%f", &ST[i].grade);
		printf("\n");
	}
	
	for(int i=0; i<7; i++){
		printf("%s \t", ST[i].name);
		printf("%d \t", ST[i].age);
		printf("%f \n", ST[i].grade);
		
		fprintf(file, "n\nName : %s\n", ST[i].name);
		fprintf(file, "Age : %s\n", ST[i].age);
		fprintf(file, "Grade : %s\n", ST[i].grade);
	}
	return 0;
}