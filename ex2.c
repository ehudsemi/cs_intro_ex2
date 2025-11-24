/******************
Name: Ehud Semidubersky
ID: 217931336
Assignment: ex2
*******************/

#include <stdio.h>

int main()
{
    int selection=0;
    while (selection !=6) {
        printf("Welcome to our games, please choose an option:\n"
           "1. Ducky's Unity Game\n"
           "2. The Memory Game\n"
           "3. Professor Pat's Power Calculation\n"
           "4. The Duck Parade\n"
           "5. The Mystery of the Repeated Digits\n"
           "6. Good Night Ducks\n");
        scanf(" %d", &selection);
        switch (selection) {
            case 1: 
                int num1;
                printf("please enter a positive number:\n");
                while (1) {
                    scanf(" %d", &num1);
                    if (num1 > 0) {
                        int count=0;
                        while (num1 != 0) {
                            if ((1&num1)==1) {
                                count++;
                            }
                            num1=num1>>1;
                        }
                        printf("Ducky earns %d corns\n", count);
                        break;
                    }
                    else {
                        printf("Invalid number, please try again\n");
                    }
                }
        
                break;
            

            case 2:

                break;


            case 3:

                break;


            case 4:

                break;


            case 5:

                break;


            case 6:
                printf("Good night! See you at the pond tomorrow.");
                break;

            default:
                printf("Invalid option, please try again\n");
                break;

        }   
    
    }  




    return 0;
}
