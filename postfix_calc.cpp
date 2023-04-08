#include<stdlib.h>
#include "header.h"
#include <stdio.h>
#include<ctype.h>
#include <cstring>
#define MAX_TOKENS 100

char ** splitString(char* str, const char delim) {
    char** tokens = (char **)malloc(MAX_TOKENS * sizeof(char*));
    char* token;
    int i = 0;

    token = strtok(str, &delim);
    while (token != NULL) {
        tokens[i++] = token;
        token = strtok(NULL, &delim);
    }
    tokens[i] = NULL;

    return tokens;
}


float calc(int op1,int op2,int c){
    switch(c){
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op1*op2;
        case '/':
            return (float)op1/op2;
    }
}

float postFixCalc(char ** exp)
{
    float result = 0;



}
