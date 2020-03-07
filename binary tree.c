#include <stdio.h>
#include <stdlib.h>

int array[12]={0};
int a,i,b,c,d,temp;

int hash(int key)
{
 a=key%11;
	while(1){
  if(array[a]==0){
  array[a]=key;
  break;
}
else
 {
  if(array[a+(key/11)]==0)
   {
     a=a+(key/11);
      if(a>10)
      a=a-11;
     array[a]=key;
      break;
    }
   
  else
   {
    temp=array[a];
     array[a]=key;
     a=a+(temp/11);
     if(a>10)
     a=a-11;
    array[a]=temp;
    break;

   }

}
}
  }
	


int main(int argc, char *argv[]) {
	hash(27);
	hash(18);
    hash(28);
	hash(13);
    hash(29);
    hash(39);
	hash(41);


	for(i=0;i<11;i++){
   printf("%d:%d\n",i,array[i]);
  }
	
		system("PAUSE");
	
	return 0;
}
