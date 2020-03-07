#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int stack[20];
int top=-1;

void push(int a) {
	stack[++top]=a;
}

int pop() {
	return stack[top--];
}

int main(int argc, char *argv[]) {
int i,temp,x,y,z;	
char array[10];
scanf("%s",&array);
for(i=0;array[i]!='\0';i++){

   if(isdigit(array[i])){
	array[i]=array[i]-48;    
	push(array[i]);
 }
else {
	x=pop();
	y=pop();
    if(array[i]=='+') {
	z=x+y;
}
	else if(array[i]=='-'){
	z=x-y;
	}
	else if(array[i]=='*'){
	z=x*y;
	}
	else if (array[i]=='/'){
	z=x/y;
}
			
	push(z);				
}
}
	printf("%d",pop());
   
    printf("\n");

	system("PAUSE");
	
	return 0;
}
