#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top=0;

void push(int a){
stack[top++]=a;
}
int pop(){
return stack[top--];
}

int main(){
int a,number,i;
while(top!=5){

printf("1)Push \n");
printf("2)Pop \n");
printf("3)Display \n");
scanf("%d",&a);

switch(a){

case 1:printf("Enter the number");
       scanf("%d",&number);
       push(number);
       break;
case 2: pop();
        break;
case 3:for(i=0;i<top;i++){
printf("%d ",stack[i]);
}
printf("\n");
break;

}
}
for(i=0;i<top;i++){
printf("%d ",stack[i]);
}
printf("\n");
return 0;
}
