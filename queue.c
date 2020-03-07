#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int queue[SIZE];
int top=0;
void push(int a)
{
queue[top++]=a;
}
int pop(){
top--;
return queue[0];
}

void transfer(){
queue[0]=queue[1];
queue[1]=queue[2];
queue[2]=queue[3];
queue[3]=queue[4];
}

int main(){

int number,i;
int counter=0;
while(1){
printf("Enter a number");
scanf("%d",&number);
push(number);
counter++;
if(counter>SIZE){
printf("Outgoing number %d \n",pop());
transfer();
for(i=0;i<SIZE;i++){
printf("%d ",queue[i]);
}
printf("\n");
}
}

return 0;
}

