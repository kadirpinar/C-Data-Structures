#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int i,counter,counterr,a,b; 	
char str[10];
scanf("%s",&str);
counter=0;
for(i=0;i<10;i++){
	
	if(str[i]=='('){
		counter++;
		b=i;
	}
	else if(str[i]==')'){
		counter--;
		a=i;
	}
	else if(str[i]==']'){
		counterr--;
	}
	else if(str[i]=='['){
	counterr--;
	}
   
}	
if(counter+counterr==0&&a>b)
{
	printf("balance");
}
else printf("not balance");
    
    printf("\n");
	system("PAUSE");

	return 0;
}
