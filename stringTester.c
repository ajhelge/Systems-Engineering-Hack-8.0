/*
Author: Alec Helgeson
Date: 10/27/2022
Purpose: To test the practice of string manipulation in C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_utils.h"

char testString1[100] = "Hey Man!";
char testString2[100] = "Get away from me!";

int main(){


    char testString3[100] = "WooHoo!!";
    char testString4[100] = "Audi A6...Amazing";

    printf("\nNow testing 'replaceCharCopy'\n");
    // Test 2.1
    printf("Input: WooHoo!!\n");
    printf("Expected output: WaaHaa!!\n");
    printf("Output recieved: %s\n\n", replaceCharCopy(testString3, 'o', 'a'));

    // Test 2.2
    printf("Input: WooHoo!!\n");
    printf("Expected output: WeeHee!!\n");
    printf("Output recieved: %s\n\n", replaceCharCopy(testString3, 'o', 'e'));

    // Test 2.3
    printf("Input: Audi A6...Amazing\n");
    printf("Expected output: Audi A6...Amazing\n");
    printf("Output recieved: %s\n\n", replaceCharCopy(testString4, 'A', 'B'));

    char testString5[100] = "assassin!";
    char testString6[100] = "3.0T...Speed";
    char testString7[100] = "LOLO";

    printf("Now testing 'removeChar'\n");
    // Test 3.1
    removeChar(testString5, 's');
    printf("Input: assassin!\n");
    printf("Expected Output: aain!\n");
    printf("Output recieved: %s\n\n", testString5);

    // Test 3.2
    removeChar(testString6, '.');
    printf("Input: 3.0T...Speed\n");
    printf("Expected Output: 30TSpeed\n");
    printf("Output recieved: %s\n\n", testString6);

    // Test 3.3
    removeChar(testString7, 'L');
    printf("Input: LOLO\n");
    printf("Expected Output: OO\n");
    printf("Output recieved: %s\n\n", testString7);

    char testString8[100] = "Roblox!";
    char testString9[100] = "Minecraft";
    char testString10[100] = "Need For Speed";

    printf("Now testing 'removeCharCopy'\n");
    // Test 4.1
    char *test = removeCharCopy(testString8, 'o');
    printf("Input: Roblox!\n");
    printf("Expected Output: Rblx!\n");
    printf("Output recieved: %s\n\n", test);
    free(test);

    // Test 4.2
    test = removeCharCopy(testString9, 'e');
    printf("Input: Minecraft\n");
    printf("Expected Output: Mincraft\n");
    printf("Output recieved: %s\n\n", test);
    free(test);

    // Test 4.3
    test = removeCharCopy(testString10, 'e');
    printf("Input: Need For Speed\n");
    printf("Expected Output: Nd For Spd\n");
    printf("Output recieved: %s\n\n", test);
    free(test);



    printf("Now testing 'lengthSplit'");
    printf("Ran out of time for the night, maybe next time...");

    return 0;
}
