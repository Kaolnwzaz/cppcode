#include <stdio.h>

void menu() {
    printf("-----------MENU-----------\n");
    printf("1. Pepsi \t 20 bath \n");
    printf("2. Fanta \t 25 bath \n");
    printf("3. Singcha \t 65 bath \n");
    printf("4. Heineken \t 75 bath \n");
    printf("5. Red Wine \t 200 bath \n");
    printf("--------------------------\n");
}

int main() {
    int menu1, price;
    menu();
    printf("Please select Menu: ");
    scanf("%d", &menu1);
    
    switch (menu1) {
        case 1:
        	price = 20;
            printf("You selected: Pepsi\n");
            break;
        case 2:
        	price = 25;
            printf("You selected: Fanta\n");
            break;
        case 3:
        	price = 65;
            printf("You selected: Singcha\n");
            break;
        case 4:
        	price = 75;
            printf("You selected: Heineken\n");
            break;
        case 5:
        	price = 200;
            printf("You selected: Red Wine\n");
            break;
    }
    printf("this is your order right?\n");
    printf("[Y/N]\n");
    scanf("%c");
    char(order);
    scanf("%c", &order);
    
    if(order =='y'){
    	printf("Thank you for your order,Your total is: %d bath\n", price);
	}else if(order =='n'){
		printf("Please select a new order");
	}
}