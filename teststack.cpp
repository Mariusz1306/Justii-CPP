#include <stdio.h>
#include "stack.h"

int main()
{
	stack s1;
	for(int i=0;i<10;i++)
        s1.push(i);
	for(int i=0;i<17;i++)
        printf("%d\n",s1.pop());
	return 0;
}
