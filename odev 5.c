#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int array[9]={1,8,2,13,21,6,18,22,17};
	
	int i,j;
	int temp;
	
	for(i=0;i<9;i++){
	for(j=1;j<9-i;j++){
		if(array[j-1]>array[j]){
			temp=array[j];
			array[j]=array[j-1];
			array[j-1]=temp;
		}
		
	}
	printf("%d ",array[i]);
}
printf("\nMedium Number:%d\n",array[(9-1)/2]);
	
	
	system("PAUSE");
	
	
	
	return 0;
}
