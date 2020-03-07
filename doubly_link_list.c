#include <stdio.h>
#include <stdlib.h>

struct n{
	int x;
struct	n * next;
struct	n * prev;
};

typedef struct n node;

int main(int argc, char *argv[]) {

node * root=(node*)malloc(sizeof(node));
node * iter=root;
root->prev=NULL;

int a,i,b;

printf("How many number you'll enter");
scanf("%d",&a);

for(i=0;i<a;i++){
	printf("Enter a number");
	scanf("%d",&b);
	iter->next=(node*)malloc(sizeof(node));
	iter->next->prev=iter;
	iter->x=b;
	iter=iter->next;	
}
while(iter->prev!=NULL){
	iter=iter->prev;
	printf("%d ",iter->x);
}
	system("PAUSE");
	return 0;
}
