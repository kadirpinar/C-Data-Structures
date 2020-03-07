#include <stdio.h>
#include <stdlib.h>

struct n {
	char info;
	struct n * left;
    struct n * right;
};

typedef struct n node;

char array[20];
int  level[20];
int main(int argc, char *argv[]) {
	
	int i=1;
	int j;
	int k=0;
	int a=0;
	char nod;
	int counter=0;
	node * root=(node*)malloc(sizeof(node));
    node * iter=root;
    iter->info='A';
    iter->left=(node*)malloc(sizeof(node));
    iter->left->info='B';
    iter->right=(node*)malloc(sizeof(node));
    iter->right->info='C';
    ////////////////
    iter->left->left=(node*)malloc(sizeof(node));
    iter->left->left->info='D';
    iter->left->left->right=NULL;
    iter->left->left->left=NULL;
    iter->left->right=(node*)malloc(sizeof(node));
    iter->left->right->info='E';
    iter->left->right->right=NULL;
    iter->left->right->left=NULL;
    iter->right->left=(node*)malloc(sizeof(node));
    iter->right->left->info='F';
    iter->right->left->right=NULL;
    iter->right->left->left=NULL;
    iter->right->right=(node*)malloc(sizeof(node));
    iter->right->right->info='G';
    iter->right->right->right=NULL;
    iter->right->right->left=NULL;
  
iter=root;
	printf("LEVEL %d:",i);
	printf("%c\n",iter->info);
	level[a]=i;
	i++;
	array[k]=iter->info;
	k++;
for(j=0;j<3;j++){

  if(iter->left!=NULL&&iter->right!=NULL){
  	printf("LEVEL %d:%c ",i,iter->left->info);
  	array[k]=iter->left->info; k++;a++;level[a]=i;
  	printf("LEVEL %d:%c ",i,iter->right->info);
  	array[k]=iter->right->info; k++;a++;level[a]=i;
  	i++;
  	counter++;
  }
  
 if(counter==2) {
 iter=root->right;
 i--;
 }
 else  {
 iter=iter->left; 
 printf("\n");
}

}
	printf("Enter a node name ");
	scanf(" %c",&nod);
	
	for(i=0;array[i]!='\0';i++){
	if(nod==array[i]) printf("LEVEL %d %d.point node name:%c",level[i],i+1,array[i]);
}
	
	
	return 0;
}
