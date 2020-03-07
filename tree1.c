#include <stdio.h>
#include <stdlib.h>

struct n {
	char info;
	struct n * left;
    struct n * right;
};

typedef struct n node;

void pretrav(node * tree){
	if(tree==NULL)
	return;
		printf("%c ",tree->info);
		pretrav(tree->left);
		pretrav(tree->right);
}
void intrav(node * tree){
	if(tree==NULL)
	return;
	    intrav(tree->left);
		printf("%c ",tree->info);
		intrav(tree->right);
}
void posttrav(node * tree){
	if(tree==NULL)
	return;
	    posttrav(tree->left);
		posttrav(tree->right);
		printf("%c ",tree->info);
}
struct n * insert(char info)
{
     struct n* n = (struct n*)malloc(sizeof(struct n));
     n->info = info;
     n->left = NULL;
     n->right = NULL;
 
     return(n);
}
int main(int argc, char *argv[]) {

    node * root;
    node * iter=root;
    
    iter=insert('A');
    iter->left=insert('B');
    iter->right=insert('C');
    iter->left->left=insert('D');
    iter->left->right=insert('E');
    iter->left->left->right=insert('H');
    iter->left->right->left=insert('I');
    iter->right->left=insert('F');
    iter->right->right=insert('G');
    iter->right->right->right=insert('L');
    iter->right->left->left=insert('J');
    iter->right->left->right=insert('K');
    iter->right->left->left->left=insert('M');

pretrav(iter);
printf("\n");
intrav(iter);
printf("\n");
posttrav(iter);
printf("\n");

printf("\n");
system("PAUSE");

	return 0;
}
