#include<stdio.h>

#include "header.h"

#include <cstring>

int main(){
    printf("check\n");
    char infix[]="(300+333+23)/(84+7)";
    printf("check\n");
    char * exp = infix_to_postfix(infix,strlen(infix));
    char ** expp = splitString(exp, ' ');
    for(int i = 0; expp[i] != NULL; ++i){
        printf("%s\n",expp[i]);
    }
    printf("%s\n",infix_to_postfix(infix,strlen(infix)));
    return 0;

}
