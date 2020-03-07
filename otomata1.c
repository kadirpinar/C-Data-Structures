#include <stdio.h>
#include <stdlib.h>

struct n{
	char info;
	struct n *next;
};
typedef struct n node;
char array[5];

struct n * insert(char info)
{
struct n * n = (struct n*)malloc(sizeof(struct n));
n->info=info; 	
}

int main(int argc, char *argv[]) {
	
	node * root;
	node *iter=root;
	
	iter=insert('A');
	iter->next=insert('B');
	iter->next->next=insert('C');
    iter->next->next->next=insert('D');
    
    int i,a;
    char b;
    printf("Enter data:");
    scanf("%s",&array);
    a=strlen(array);
    for(i=0;i<a;i++){
    	iter=iter->next;
    	if(i==2){
    		printf("Trap State");
    		break;
		}
	}
    printf("Result: %c",iter->info);
	return 0;
}
