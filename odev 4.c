#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int array[9]={1,5,8,12,31,42,57,65,81};
	
	int i;
	for(i=9;i>0;i--){
		printf("%d ",array[i-1]);
	}
	system("PAUSE");
	return 0;
}
