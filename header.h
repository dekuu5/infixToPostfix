//
// Created by refaa on 4/7/2023.
//

#ifndef INFIX2POSTFIX_PROJECT_HEADER_H
#define INFIX2POSTFIX_PROJECT_HEADER_H
//stach.cpp
typedef struct {

}stack;

stack *intialize(int size);
bool is_empty(stack *s);
bool is_full(stack *s);
void push(stack *s,char value);
char pop(stack *s);
char peek(stack *s);
void print_stack(stack s);

//infix_to_postfix.cpp
bool is_operator(char c);
int precedence(char c);
char * infix_to_postfix(char exp[],int length);

//posfix_calc.cpp

char ** splitString(char* str, char delim);
float calc(int op1,int op2,int c);
float postFixCalc(char ** exp);

// stckInt.c

typedef struct {

}stackINT;
stackINT * initializeINT(int size);
bool is_emptyINT(stackINT s);
bool is_fullINT(stackINT s);
int peekINT(stackINT s);
void pushINT(stackINT* s, int value);
int popINT(stackINT* s);
void printINT(stackINT s);


#endif //INFIX2POSTFIX_PROJECT_HEADER_H
