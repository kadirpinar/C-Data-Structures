#include <stdio.h>
#include <stdlib.h>

int array[12]={0};
int a,i,b,temp;
int hash(int key)
{
 a=key%11;
	while(1){
  if(array[a]==0){
  array[a]=key;
  break;
}
  else{
  	temp=array[a];
  	array[a]=key;
  	key=temp;
  	while(1){
  	if(array[a]==0) break;
  	b=key/11;
  	a=a+b;
  	if(a>10)a=a-11;
}
  }
 
  } 
	}


int main(int argc, char *argv[]) {
	hash(27);
	hash(29);
	hash(18);
	hash(28);
	hash(39);
	hash(13);
	hash(16);

	for(i=0;i<11;i++){
   printf("%d:%d\n",i,array[i]);
  }
	
	
	
	return 0;
}
