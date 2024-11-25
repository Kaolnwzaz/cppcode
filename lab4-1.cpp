#include <stdio.h>
void tanII(int num);
void tanVIII(int numI);
void tanXVIII(int numV);

int main()
{
    int num;
    int numI;
    int numV;
    int numX;

    printf("Input your number : ");
    scanf("%d", &num);

    printf("tanII = ");
    tanII(num);
    printf("\ntanVIII = ");
    tanVIII(numI);
    printf("\ntanXVIII = ");
    tanXVIII(numV);

    return 0;
}

void tanII(int num)
{
    if (num > 1) {
        tanII(num / 2);
    }
    printf("%d", num % 2);
}

void tanVIII(int numI)
{
	if (numI > 1) {
        tanVIII(numI / 8);
    }
    printf("%d", numI % 8);
}

void tanXVIII(int numV)
{
	if (numV > 1) {
        tanII(numV / 16);
    }
    printf("%d", numV % 16);
}