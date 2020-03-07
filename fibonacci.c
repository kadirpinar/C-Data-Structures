#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i,a;
	
	printf("Enter max size");
	scanf("%d",&a);
	
	int array[a];
	
	for(i=0;i<a;i++){
		array[0]=0;
	    array[1]=1;
		array[i+2]=array[i]+array[i+1];
		printf("%d ",array[i]);

	}
    printf("\n");
	system("PAUSE");
	return 0;
}
