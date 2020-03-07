#include <stdio.h>
#include <stdlib.h>

struct n{
	int x;
	struct n * next;
};

typedef struct n  node;

int main(int argc, char *argv[]) {
	
	node * root=(node*)malloc(sizeof(node));
	node * iter=root;
	int a,i,b;
	printf("How many number you will enter?");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		printf("Enter number");
		scanf("%d",&b);
    	iter->next=(node*)malloc(sizeof(node));
    	iter->x=b;
        iter=iter->next;
        iter->next=root;
	}
    iter=root;
    while(iter->next!=root){
	printf("%d ",iter->x);
	iter=iter->next;
}
	system("PAUSE");
	return 0;
}
