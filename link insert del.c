#include <stdio.h>
#include <stdlib.h>
int k[10];
struct n{
 int x;
 struct n * next;
};
typedef struct n node;

void display(node * r){
	r=r->next;
	int f=0;
	while(r!=NULL){
	if(r->x==k[f]) {
	f++; r=r->next; 
	  } 
	else {
	    printf("%d ",r->x);
		r=r->next;
	}	
	}
	
}

void insert(node *r,int x){
	while(r->next!=NULL){
		r=r->next;
	}
	r->next=(node*)malloc(sizeof(node));
	r->next->x=x;
	r->next->next=NULL;
}

int main(int argc, char *argv[]) {

int b,a,i,d;
int e=0;
node*root;
root=(node*)malloc(sizeof(node));
node * iter;
root->next=NULL;
while(1){
	printf("1)Insert\n2)Delete\n3)Display\n");
	scanf("%d",&b);
	switch(b){
		case 1: printf("Enter elements number");
		        int temp=d;
		        scanf("%d",&d);
		     	for(i=0;i<d;i++){
	            printf("Enter a number");
	            scanf("%d",&a);
	            insert(root,a);
                }
				 d=temp+d; 
				break;
		case 2:printf("Enter a number for delete");
	            scanf("%d",&k[e]);	
				e++;          	
	            break;

	    case 3:display(root);
	           printf("\n");
		       break;
	    default: break;
	}
	

}
system("PAUSE");
	return 0;
}
