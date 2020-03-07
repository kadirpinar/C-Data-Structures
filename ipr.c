#include <stdio.h>
#include <stdlib.h>


struct n {
	char info;
	struct n * left;
    struct n * right;
};

typedef struct n node;

int array[7]={0,1,2,3,4,5,6};


int main(int argc, char *argv[]) {

int i,hr=0,hl=0,ct=0,ct1=0;
int imb;
int ipr=0;

node * root=(node*)malloc(sizeof(node));
node * iter=root;

 
root->info=array[0];
int temp,temp1,temp2;
for(i=0;i<7;i++){
if(array[i]<array[i+1])
{
	imb++;
	iter->info=temp; 
	iter=iter->right; ipr++;
	iter=(node*)malloc(sizeof(node));
	iter->info=temp1;
	temp2=temp1;
	iter->info=array[i+1];
	hr++;
	if(hr>hl+1){
	
		ct1++;
		if(ct1=1){
		iter=root; ipr++;
	}
	iter->info=temp2;
		iter->right=(node*)malloc(sizeof(node)); 
		iter->right->info=temp1;
	    iter->left=(node*)malloc(sizeof(node)); ipr++;
		iter->left->info=temp;
		
    if(imb==2)
	{
		iter=iter->left; ipr=ipr+ipr;
	for(i=0;i<7;i++){
if(array[i]<array[i+1])
{
	imb++;
	iter->info=temp; 
	iter=iter->right; ipr++;
	iter=(node*)malloc(sizeof(node));
	iter->info=temp1;
	temp2=temp1;
	iter->info=array[i+1];
	hr++;
	if(hr>hl+1){
	
		ct1++;
		if(ct1=1){
		iter=root;
	}
	iter->info=temp2;
		iter->right=(node*)malloc(sizeof(node));
		iter->right->info=temp1; ipr++;
	    iter->left=(node*)malloc(sizeof(node));
		iter->left->info=temp; ipr++;
		
	}
	
}
		
	}
	}
	
}
}


else	{
	ct++;
	if(ct==1){
	iter=root->left; ipr++;
}
  	iter->info=temp; 
	iter=iter->right;
	iter=(node*)malloc(sizeof(node));
	iter->info=temp1;
	temp2=temp1;
	iter=(node*)malloc(sizeof(node));
	iter->info=array[i+1];
	hl++;	
	if(hr>hl+1){
	
		ct1++;
		if(ct1=1){
		iter=root;
	}
	iter->info=temp2;
		iter->right=(node*)malloc(sizeof(node));
		iter->right->info=temp1;
	    iter->left=(node*)malloc(sizeof(node));
		iter->left->info=temp;
		
    if(imb==2)
	{
		iter=iter->left;
	for(i=0;i<7;i++){
if(array[i]<array[i+1])
{
	imb++;
	iter->info=temp;
	iter=iter->right;
	iter=(node*)malloc(sizeof(node));
	iter->info=temp1;
	temp2=temp1;
	iter->info=array[i+1];
	hr++;
	if(hr>hl+1){
	
		ct1++;
		if(ct1=1){
		iter=root;
	}
	iter->info=temp2;
		iter->right=(node*)malloc(sizeof(node));
		iter->right->info=temp1;
	    iter->left=(node*)malloc(sizeof(node));
		iter->left->info=temp;
		
	}
	
}
		
	}
	}
	
}


}
}
printf("IPR:%d",ipr);

system("PAUSE");

	return 0;
}
