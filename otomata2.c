#include <stdio.h>
#include <stdlib.h>

struct n{
	char info;
	struct n *next;
	struct n *down;
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
	iter->down=insert('C');
    
    printf("Enter data:");
    scanf("%s",&array);
    	if(array[0]=='1'){
    		iter=iter->down;
    		printf("Trap State ");
		}
			if(array[0]=='0'){
    		iter=iter->next;
    		printf("Finite State ");
		}
    printf("Result: %c",iter->info);
	return 0;
}
