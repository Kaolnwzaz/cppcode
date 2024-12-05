#include <stdio.h>
#include <string.h>

struct Foodmanu {
    char food[50];
    int price;
};

void menu() {
	printf("--------------Menu--------------\nPizza     \t - 20$\nFish'n'chip\t - 15$\nBeef Wellington\t - 350$\nLasagna   \t - 15$\nSteak tartare\t - 20$\n");
	printf("--------------------------------\n");
}
int main() {
	menu();
    struct Foodmanu menu[5] = {
        {"Pizza", 20},
        {"Fish'n'chip", 15},
        {"Beef Wellington", 350},
        {"Lasagna", 15},
        {"Steak tartare", 20}
	};
    
    char order[50];
    int jamnueu,found = 0;

    printf("What's your order? : ");
    scanf("%s", order);
    printf("How many do you want? ");
    scanf("%d", &jamnueu);
    
    for (int i = 0; i < 5; i++) {
        if (strcmp(order, menu[i].food) == 0) {
            found = 1;
            int totalprice = menu[i].price * jamnueu;
            float tax = totalprice * 0.07;
            float total = totalprice + tax;
            
            printf("Order: %s\n", menu[i].food);
            printf("Price: %d $\n", menu[i].price);
            printf("Vax7%%: %.2f $\n", tax);
            printf("Total: %.2f $\n", total);
            break;
        }
    }
    FILE *file = fopen("C:\\Users\\kao\\Documents\\Embarcadero_Dev-Cpp_6.3_TDM-GCC_9.2_Setup", "w");
            if (file == NULL) {
                printf("Could not open file\n");
                return 1;
            }
    
    if (!found) {
        printf("We don't have this, sorry\n");
    }
    
    return 0;
}