#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


int array[10];
int i,a;

for(i=0;i<10;i++){
	printf("Enter a number");
	scanf("%d",&array[i]);

}
for(i=0;i<10;i++){
	printf("%d\n",array[i]);
}
int max=array[0];
for(i=0;i<10;i++){
 
   if(max<array[i]){
   	max=array[i];
   }	
}
printf("Max Number:%d\n",max);

system("PAUSE");

	return 0;
}
