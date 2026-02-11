#include <stdio.h>

int main() {
    // Step 1: Declare and initialize speed variable
    int speed = 55;  // Speed in kilometers per hour

    // Step 2: Use if-else if structure to check the severity of speeding
    if (speed > 120) {
        printf("You are speeding excessively! Ticket issued.\n");
    } 
    else if (speed > 80) {
        printf("You are speeding! Ticket issued.\n");
    } 
    else {
        printf("You are driving within the speed limit.\n");
    }

    return 0;
}
