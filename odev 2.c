#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a;
	char array[10]={'F','F','F','F','F','D','C','B','A','A'};
	
	printf("Enter a grade");
	scanf("%d",&a);

	a=a/10;
	printf("The Grade:%c\n",array[a-1]);
	
	system("PAUSE");
	
	
	return 0;
}
