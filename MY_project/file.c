#include <stdio.h>
#include <string.h>

// Define structures for Admin, User, and Item
typedef struct {
    char name[20];
    char pass[20];
} Admin;

typedef struct {
    char name[50];
    char pass[20];
    float bonus; // Corrected typo: "bonus" instead of "bouns"
} User;

typedef struct {
    char name[50];
    float price;
    int quantity;
} Item;

// Global variables for admin, users, and items
Admin admin = {"Admin", "123456"};

User users[10] = {
    {"Ammar", "0123456", 100.0},
    {"Amr", "741852", 100.0},
    {"Ahmed", "96385", 100.0}
};

Item items[] = {
    {"Biscuits", 5.0, 10},
    {"Molto", 12.0, 20},
    {"Pies", 20.0, 8},
    {"Coffee", 15.0, 100},
    {"Spirospates", 13.0, 20},
    {"Tea", 15.0, 100},
    {"Ice Tea", 15.0, 100},
    {"Appetizers", 11.75, 200},
    {"Cheese Sandwiches", 30.50, 140},
    {"Hot Chocolate", 15.5, 150}
};

// Function to display available items with prices and quantities
void display_items() {
    printf("Available Items:\n");
    for (int i = 0; i < sizeof(items) / sizeof(items[0]); i++) {
        printf("%d. %s - $%.2f (%d in stock)\n", i + 1, items[i].name, items[i].price, items[i].quantity);
    }
}

// Function to handle the "Admin" or "User" mode
void Admin_User(int mode) {
    if (mode == 1) { // Admin mode
        char name[20], pass[20];
        printf("Enter the username: ");
        scanf("%s", name);
        printf("Enter the password: ");
        scanf("%s", pass);

        if (strcmp(admin.name, name) == 0 && strcmp(admin.pass, pass) == 0) {
            printf("Welcome, Admin!\n");
            // Admin actions (view/edit items)
            display_items(); // Display available items
        } else {
            printf("Invalid credentials for Admin.\n");
        }
    } else if (mode == 2) { // User mode
             int user_type;
        printf("Welcome!\n");
        printf("1. Subscriber\n");
        printf("2. Guest\n");
        printf("Enter your choice: ");
        scanf("%d", &user_type);

        if (user_type == 1) { // Subscriber
            char username[50], password[20];
            printf("Enter Username: ");
            scanf("%s", username);
            printf("Enter Password: ");
            scanf("%s", password);

            int user_found = 0;
            for (int i = 0; i < sizeof(users) / sizeof(users[0]); i++) {
                if (strcmp(users[i].name, username) == 0 && strcmp(users[i].pass, password) == 0) {
                    printf("Welcome, %s!\n", username);
                    display_items();
                    int num1;
			printf("choose from items:- ");
			scanf("%d",&num1);
for(int j=0;j<10;j++ ){
if(j==(num1-1)){
	printf("the %s\n the price :- $%0.2f ",items[j].name,items[j].price);	
	printf("\nwill you pay cash or visa:- ");	
		   printf("\n1.Visa\n");
        printf("2.cash\n");
		int n;
		scanf("%d",&n);
		if(n==1){
	printf("\nyour current balance is %0.2f",users[i].bonus-items[j].price);    
break;	
		}
	else if (n==2){
		
		
		printf("\nenter the money:- ");
float money;	
	scanf("%f",&money);
	if(money==items[j].price){
	printf("thank you for dealing for us =)");	
break;	
	}
	else if(money>items[j].price){
	printf("take the rest of the money 0.2%f\n thank you for dealing for us =)",(money-items[i].price));		
break;	
	
	}
else if(money<items[j].price){	
	printf("enter %f ",(items[i].price-money));		
	float num2;
	scanf("%f",&num2);
	if(num2==(items[j].price-money)){
		
	printf("thank you for dealing for us =)");				
	}
else if(num2>(items[j].price-money)){
	printf("take the rest of the money %0.2f\n thank you for dealing for us =)",num2-(items[i].price-money));	
	
}
break;	

}
		
		
		
		
		
		
		
			
	}

	}
	}					
								
					user_found = 1;
					break;
                }
             if (!user_found) {
                printf("Invalid username or password for Subscriber.\n");
		}
		}} 
		
         else if (user_type == 2) { 
            printf("Welcome, Guest!\n");
            display_items();
			int num1;
			printf("choose from items:- ");
			scanf("%d",&num1);
for(int i=0;i<10;i++ ){
	if(i==(num1-1)){
	printf("the %s\n the price :- $%0.2f ",items[i].name,items[i].price);	
	printf("\nenter the money:- ");
float money;	
	scanf("%f",&money);
	if(money==items[i].price){
	printf("thank you for dealing for us =)");		
	}
	else if(money>items[i].price){
	printf("take the rest of the money 0.2%f\n thank you for dealing for us =)",(money-items[i].price));		
	
	}
else if(money<items[i].price){	
	printf("enter %f ",(items[i].price-money));		
	float num2;
	scanf("%f",&num2);
	if(num2==(items[i].price-money)){
		
	printf("thank you for dealing for us =)");				
	}
else if(num2>(items[i].price-money)){
	printf("take the rest of the money %0.2f\n thank you for dealing for us =)",num2-(items[i].price-money));	
	
}

}
break;
	}		

}
 }   
		
		
		else {
            printf("Invalid user type selection.\n");
        }
    } else {
        printf("Invalid mode selection.\n");
    }
}


