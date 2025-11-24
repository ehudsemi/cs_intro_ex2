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
                int numDucks;
                printf("please enter the number of ducks:\n");
                scanf("%d", &numDucks);
                while (numDucks <= 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &numDucks);
                }
                printf("you entered %d ducks\n", numDucks);
                long long ducks=0; //store all the sounds here
                for (int i = 0; i < numDucks; i++) {
                    int sound;
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n", i + 1);
                    scanf("%d", &sound);
                    while (sound != 0 && sound != 1) {
                        printf("Invalid number, please try again\n");
                        scanf("%d", &sound);
                    }
                    if (sound == 1) {
                        ducks = ducks | (1 << i);  //set bit i to 1, if 0 stay 0
                    }
                }
                for (int i = 0; i < numDucks; i++) {
                    if ((ducks & (1 << i)) != 0) {      //Check if bit i is 1
                        printf("duck number %d do Quak\n", i + 1);
                    }
                    else {
                        printf("duck number %d do Sh...\n", i + 1);
                    }
                }  
                    
                break;

            case 3:
                int number;
                printf("please enter the number\n");
                scanf("%d", &number);
                while (number < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &number);
                }
                int exponent;
                printf("please enter the exponent\n");
                scanf("%d", &exponent);
                while (exponent < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &exponent);
                }
                if (exponent == 0) {
                    printf("your power is: %d\n", 1);
                    break;
                }
                if (number == 0) {
                    printf("your power is: %d\n", 0);
                    break;
                }
                int sum=number;
                for (int i=1; i<exponent; i++) {
                    sum = sum * number;
                }
                printf("your power is: %d\n", sum);
                break;

            case 4: 
                int duckCount;
                printf("please enter number of ducks:\n");
                scanf("%d", &duckCount);

                while (duckCount < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &duckCount);
                }

                if (duckCount == 0) {
                    break;
                }

                int remaining = duckCount;

                while (remaining > 0) {
                // How many ducks in this row?
                    int inThisRow = remaining;
                    if (inThisRow > 10) {
                        inThisRow = 10;
                    }
    
                    //Line 1
                    for (int i = 0; i < inThisRow; i++) {
                        printf("   _\t\t");
                    }
                    printf("\n");
    
                    //Line 2
                    for (int i = 0; i < inThisRow; i++) {
                        printf("__(o)>\t\t");
                    }
                    printf("\n");
    
                    //Line 3
                    for (int i = 0; i < inThisRow; i++) {
                        printf("\\___)\t\t");
                    }
                    printf("\n");
    
                    remaining = remaining - inThisRow;
                }           

                break;

            case 5:
                int num2;
                printf("please enter number\n");
                scanf("%d", &num2);

                while (num2 <= 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &num2);
                }
                while (num2 != 0) { //32232
                    int LSB = num2%10;
                    int num3 = num2/10;
                    while (num3 != 0) {
                        if (num3%10 == LSB) {
                            printf("%d appears more than once!\n", LSB);
                            break;
                        }
                        num3 = num3/10;
                    }
                    num2 = num2/10;
                }

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
