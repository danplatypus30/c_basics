#include <stdio.h> // define the header file
#include <stdbool.h> // to use bool type variables
int main()        // define the main function
{
    printf("Welcome to Daniel's C test project"); // print the statement.
    printf("\nsecond line of\tinput\n\nman \\im \"excited\" to ace C\n");
    
    /* also this multi line comment
    need to try creating variables too
    hehehehhee */
    /*
    int a = 1;
    float b;
    b = 1.25;
    char c = 'J';
    printf("%d\n", 1+7); //testing this, printing equations muahahaha

    printf("%c\n", c );
    printf("%f\n", b);
    printf("here is the value of a: %d\n", a);
    float d = 2.37;
    b = b + d;
    int e = 3, f = 9, g = 25;
    printf("value of a: %d, value of b: %.2f, value of c: %c\n", a, b, c);
    printf("%d", e * f - g);
    */

    // %s is for strings

    // variable name, letters, digits, underscores
    // must begin w letter or underscore
    // case sensitive
    // no whitespace, special char
    // reserved words e.g, int cannot use

    // float sum = 5 / 2; //both 5 and 2 are integer types
    // float sum2 = (float) 5 / 2; //convert 5 to float
    // float sum3 = 5 / (float) 2; 
    // printf("sum: %.2f\nsum2: %.2f\nsum3: %.2f\n", sum, sum2, sum3);

    const float PI = 3.14; //good practise, declare const in uppercase
    // operators + - * / %(mod) ++(increment) --(decrement) 

    // Assignment Operators
    // = += -+ *= /= %= 
    // a &= 3; means a = a & 3;
    // &= (bitwise AND), |= (bitwise OR), ^= (bitwise XOR) 
    // >>= (right shift, shift binary by x digits right, should be a smaller number)
    // <<= (left shift, shift binary by x left digits, should be a bigger number)
    
    // Comparison Operators
    // == != > < >= <=

    // Logical Operators
    // && || !      e.g, x < 5 && y > 10;       !(x < 5);

    // sizeof operator, checks memory size (in bytes) of data type or variable

    //int myInt = 888;
    //printf("sizeof int variable (in bytes) is: %lu\n", sizeof(myInt));  
    // %lu is long unsigned int, safer to use than %d, int, as default expected return is %lu

    // Boolean Variables, need declare stdbool.h header
    //bool cs2040cIsScary = true; // returned as integers, 1 (or any num that is not 0)
    //bool danielWillScoreA = false; // returned as 0
    //printf("false bool: %d\n", danielWillScoreA);
    //printf("%d\n", cs2040cIsScary != danielWillScoreA);

    /* if(5 < 6) {
        printf("condition 1 true");
    } else if (5 > 3){
        printf("condition 1 false, condition 2 true");
    } else {
        printf("all false");
    } */
    //!(5 < 6) ? printf("condition 1 true") : (5 > 3) ? printf("1 false 2 true") : printf("all false");

    /*int level = 6;
    switch(level) {
        case 1:
            printf("level 1");
            break;
        case 2:
            printf("level 2");
            break;
        default:
            printf("level error");
    }*/

    // while loops
    /*
    int w = 0;
    printf("while\n");
    while (w < 5){
        printf("%d", w++);
    } // w is incremented one last time to 5
    printf("\nok now do while\n");
    do { 
        printf("%d", w--); 
    } while (w >= 0); // w decrements to 0, does not go below 0
    */

    // for loop
    /*
    int f;
    for (f = 0; f < 5; f++){
        if (f == 2){
            printf("\nskipped muahaha");
            continue;
        }
        // if (f == 3){
        //     printf("\nam stopping this loop");
        //     break;
        // }
        printf("%d", f);
    } // similar to while loop, f increments one last time to 5
    printf("\nfinal value of f: %d", f); 
    */
    // 'break' breaks out of the loop, continue after the loop
    // 'continue' breaks one iteration of the loop, will not read remaining lines in the loop after 'continue'
    // 'continue' will continue with next iteration of loop, essentially skipping one iteration

    // arrays
    int numbers[] = {1,5,7};
    printf("array 1st index: %d", numbers[0]);



    return 0; //does not matter unless calling main() function
}