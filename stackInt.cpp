#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct
{
    int top;
    int* arr;
    int size;
}stackINT;

stackINT * initializeINT(int size)
{
    stackINT * s2;
    s2->arr = (int*)malloc(sizeof(int) * size);
    s2->top = 0;
    s2->size = size;
    return s2;
}

bool is_emptyINT(stackINT s)
{
    if (s.top == 0)
        return true;
    else
        return false;
}

bool is_fullINT(stackINT s)
{
    if (s.top > s.size)
        return true;
    else
        return false;
}

int peekINT(stackINT s)
{
    return s.arr[s.top - 1];
}

void pushINT(stackINT* s, int value)
{
    if (s->top < s->size)
    {
        s->arr[s->top] = value;
        (s->top)++;
    }
    else
        printf("full");
}

int popINT(stackINT* s)
{
    if (s->top > 0)
    {
        s->top -= 1;
        int popped = s->arr[s->top];
        return popped;
    }
    else
    {
        printf("Empty");
    }
}

void printINT(stackINT s)
{
    for (int i = 0; i < s.top; i++)
    {
        printf("%d--", s.arr[i]);
    }
}
