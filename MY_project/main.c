#include <stdio.h>
#include "file.h"

int main() {
    int mode;
    printf("Welcome to the Breakfast Machine!\n");
    printf("Select Mode:\n");
    printf("1. Admin\n");
    printf("2. User\n");
    scanf("%d", &mode);

    Admin_User(mode); // Call the Admin_User function based on mode

    return 0;
}
