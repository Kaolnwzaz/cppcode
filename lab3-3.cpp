#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[100];
	int pass;
	char name1[] = "kao";
	int pass1 = 1234;
	
	int ptr;
	printf("username : ");
	scanf("%s" ,&name);
	printf("password : ");
	scanf("%d" ,&pass);
	
if (strcmp(name1, name) == 0 && pass1 == pass) { 
        printf("pass\n");
    } else {
        printf("error\n");
    }
return(0);
}