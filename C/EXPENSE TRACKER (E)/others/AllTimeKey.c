#include <stdio.h>
#include <conio.h>  // For getch()

void wait_for_user() {
    printf("\nPress 'X' to exit or 'M' to return to the main menu: ");
    char ch = _getch();  // Use _getch to capture key input without Enter
    if (ch == 'm' || ch == 'M') {
        printf("\nReturning to the main menu...\n");
    } else if (ch == 'x' || ch == 'X') {
        printf("\nExiting the program. Goodbye!\n");
        exit(0);
    } else {
        printf("\nInvalid key. Please press 'M' or 'X'.\n");
        wait_for_user();
    }
}


int main() {
    wait_for_user();
    return 0;
}

