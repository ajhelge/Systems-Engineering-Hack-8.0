/*
Author: Alec Helgeson
Date: 10/27/2022
Purpose: To practice manipulation of strings in C.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "string_utils.h"



void replaceChar(char *s, char oldChar, char newChar){
    if((s == NULL)){
        return;
    }
    else{
        int length = strlen(s);
        for(int i = 0; i < length; i++){
            if(s[i] == oldChar){
                s[i] = newChar;
            }
        }
    }
    return;
}


char * replaceCharCopy(const char *s, char oldChar, char newChar){
    if((s == NULL)){
            return NULL;
    }
    int length = strlen(s);
    char *newS = malloc(sizeof(char) * (length + 1));
    strncpy(newS, s, length);
    replaceChar(newS, oldChar, newChar);
    return newS;
}


void removeChar(char *s, char c){
    if((s == NULL)){
            return;
    }
    int length = strlen(s);
    for(int i = 0; i < length; i++){
        if(s[i] == c){
            for(int j = i; j <= length; j++){
                if(j == length){
                    s[j] = '\0';
                }
                else{
                    s[j] = s[j + 1];
                }
            }
        i--;
        }
    }
}


char * removeCharCopy(const char *s, char c){
    if((s == NULL)){
            return NULL;
    }
    int length = strlen(s);
    char *newString = malloc(sizeof(char) * length);
    strcpy(newString, s);
    removeChar(newString, c);
    return newString;
}


char **lengthSplit(const char *s, int n){
   if((s == NULL) || (n < 1)){
            return NULL;
    }

    int numGroups = ceil(strlen(s) / (double) n);
    char **Array = (char**)malloc(sizeof(char*) * numGroups);
    for(int i = 0; i < numGroups; i++){
        Array[i] = (char*)malloc(sizeof(char) * (n + 1));
    }

    int index = 0;
    for(int i = 0; i < numGroups; i++){
        for(int j = 0; j < n; j++){
            Array[i][j] = s[index];
            index++;
        }
        Array[i][n] = '\0';
    }

    return Array;
}