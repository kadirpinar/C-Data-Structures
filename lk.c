#include <stdio.h>
#include <stdlib.h>

struct n{
 int x[10];
 struct n * next;
};

typedef struct n node;

int main(int argc, char *argv[]) {
	int i;
	node*root;
	node * iter;
	iter=root;
	root=(node*)malloc(sizeof(node));
	for(i=1;i<=10;i++){
	iter=(node*)malloc(sizeof(node));
	iter->x[i]=10*i;
    printf("%d ",iter->x[i]);
    iter=iter->next;
}
  printf("%d ",root->x[i]);
system("PAUSE");
	return 0;
}
