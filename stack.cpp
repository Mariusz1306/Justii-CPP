#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#define pSTACKSIZE 8
int ssize = pSTACKSIZE;

stack::stack()
{
	this->top=0;
	this->dane=(int *)malloc(ssize*sizeof(int));
	assert(this->dane);
}

stack::~stack()
{
    free(this->dane);
}

void stack::clear()
{
	this->top=0;
}

void stack::push(int a)
{
	if (this->top>=ssize)
        ssize *= 2;
        this->dane=(int*)realloc(this->dane,ssize*sizeof(int));
	this->dane[this->top++]=a;
}

int stack::pop()
{
	if(this->top==0){
	this->~stack();
	assert(this->top>0);}
	return this->dane[--this->top];
}

bool stack::isEmpty(){
	return (this->top==0 ? true : false);
}

