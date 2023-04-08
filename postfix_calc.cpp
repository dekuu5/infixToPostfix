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
    stackINT *s = initializeINT(MAX_TOKENS);
    char* ch;
    for (int i = 0; exp[i] != NULL; ++i) {
        ch = exp[i];
        if (isdigit(*ch)) {
            pushINT(s,*ch - '0');
        } else {
            int val1 = popINT(s);
            int val2 = popINT(s);
            pushINT(s, calc(val1,val2,*ch));
        }
    }
    return popINT(s);

}
