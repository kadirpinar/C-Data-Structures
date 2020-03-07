#include <stdio.h>
#include <stdlib.h>

int array[12]={0};
int arrayy[12];
int a,i,b;
int R=10;

int hash(int key)
{
 a=key%11;
	while(1){
  if(array[a]==0){
  array[a]=key;
  break;
}
  else{
  	b=key/11;
  	a=a+b;
  	if(a>10)a=a-11;
  } 
	}
}

int main(int argc, char *argv[]) {
	hash(27);
	hash(18);
	hash(29);
	hash(28);
	hash(39);
	hash(13);
	hash(16);
	for(i=0;i<11;i++){
   printf("%d:%d\n",i,array[i],arrayy[i]);
  }
	
		system("PAUSE");
	
	return 0;
}
