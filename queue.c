#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int queue[MAX];
int top=-1;
int top1=-1;
int top2=3;
void push(int a) {
	queue[++top]=a;
}
int pop() {
	return queue[0];
}
void ss(){
	int b;
	queue[0]=queue[1];
	queue[1]=queue[2];
	queue[2]=queue[3];
	queue[3]=queue[++top2];	
}
int main(int argc, char *argv[]) {

int i,b,c,counter;
counter=0;
    while(1){
    printf("Enter a number");
    scanf("%d",&b);
    push(b);
    counter++;
    if (counter>MAX){
     printf("Outgoing Number:%d\n",pop());
     ss();
    for(i=0;i<4;i++){
    	printf("%d ",queue[i]);
}
printf("\n");
}
}
system("PAUSE");
	return 0;
}
