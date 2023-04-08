#include<stdio.h>

#include "header.h"
#include<string.h>

int main(){
    printf("check\n");
    char infix[]="(300+23)/(84+7)";
    printf("check\n");
    printf("%s\n",infix_to_postfix(infix,strlen(infix)));
    return 0;

}git config --global user.email "you@example.com"
