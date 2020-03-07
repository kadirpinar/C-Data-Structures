#include <stdio.h>
#include <stdlib.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	char array[12];
	
	printf("Enter data");
	scanf("%s",&array);
	// array[9]='0';
	int i;
	
	if(array[0]=='0'){
		
		if(array[9]!='0') {
		printf("Wrong parity "); return 0;
}
		
	if(array[10]=='1'||array[11]=='1'){
       
	   for( i=1;i<9;i++)
       printf("Data bytes:%c",array[i]);
	}
}
else printf("Wrong data");

	return 0;
}
