#include <stdio.h>
#include <stdlib.h>

struct n {
	char info;
	struct n * left;
    struct n * right;
    struct n * father;
};

typedef struct n node;

void pretrav(node * tree){
	
    
    node* p=(node*)malloc(sizeof(node));
    node* q=(node*)malloc(sizeof(node));
    
	q=NULL;
	p=tree;
	
	do{
		while(p!=NULL){
			q=p;
			p=p->left;
		}
		if(q!=NULL){
			printf("%c ",q->info);
			p=q->right;
		}
		while(q!=NULL&&p==NULL){
			do{
				p=q;
				q=p->father;
			}
			while(q!=NULL);
			if(q!=NULL){
				printf("%c ",q->info);
				p=q->right;
			}
		}
	}while(q!=NULL);	
}
struct n * insert(char info)
{
     struct n* n = (struct n*)malloc(sizeof(struct n));
     n->info = info;
     n->left = NULL;
     n->right = NULL;
 
     return(n);
}
void intrav(node * tree){
	
    
    node* p=(node*)malloc(sizeof(node));
    node* q=(node*)malloc(sizeof(node));
    
	q=NULL;
	p=tree;
	
	do{
		while(p!=NULL){
			q=p;
			p=p->left;
		}
		if(q!=NULL){
			printf("%c ",q->info);
			p=q->right;
		}
		while(q!=NULL&&p==NULL){
			do{
				p=q;
				q=p->father;
			}
			while(q!=NULL);
			if(q!=NULL){
				printf("%c ",q->info);
				p=q->right;
			}
		}
	}while(q!=NULL);	
}
void posttrav(node * tree){
	
    
    node* p=(node*)malloc(sizeof(node));
    node* q=(node*)malloc(sizeof(node));
    
	q=NULL;
	p=tree;
	
	do{
		while(p!=NULL){
			q=p;
			p=p->left;
		}
		if(q!=NULL){
			printf("%c ",q->info);
			p=q->right;
		}
		while(q!=NULL&&p==NULL){
			do{
				p=q;
				q=p->father;
			}
			while(q!=NULL);
			if(q!=NULL){
				printf("%c ",q->info);
				p=q->right;
			}
		}
	}while(q!=NULL);	
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
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       

       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
    printf("A B D H E I C F S M K G L\n");
    printf("D H B I E A M S F K C G L\n");
    printf("H D I E B M S K F L G C A\n");
	
	system("PAUSE");
	
	return 0;
}
