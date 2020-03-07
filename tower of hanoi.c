#include <stdio.h>
#include <stdlib.h>

void function(void){
	
	printf("       ____          ____          ____\n");
    printf("       |  |          |  |          |  |\n");
    printf("       |  |          |  |          |  |\n");
    printf("       |  |          |  |          |  |\n");
    printf("      _|  |_         |  |          |  |\n");
    printf("  1  (_|  |_)        |  |          |  |\n");
    printf(" 2 _(__|  |__)_      |  |          |  |\n");
    printf("3 (____|__|____)     |__|          |__|\n");
    printf("        A             B             C  \n"); 
}
void function1(void){
	
	printf("     ____          ____          ____  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("    _|  |_         |  |          |  |  \n");
    printf(" _(__|  |__)_      |  |         _|  |_ \n");
    printf("(____|__|____)     |__|        (_|__|_)\n");
}
void function2(void){
	
	printf("     ____          ____          ____  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf(" ____|  |____    __|  |__       _|  |_ \n");
    printf("(____|__|____)  (__|__|__)     (_|__|_)\n");
}
void function3(void){
	
	printf("     ____          ____          ____  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |          |  |          |  |  \n");
    printf("     |  |         _|  |_         |  |  \n");
    printf(" ____|  |____    (_|  |_)        |  |  \n");
    printf("(____|__|____)  (__|__|__)       |__|  \n");
}
void function4(void){
	
	printf("     ____          ____          ____       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |         _|  |_         |  |       \n");
    printf("     |  |        (_|  |_)    ____|  |____   \n");
    printf("     |__|       (__|__|__)  (____|__|____)  \n");
}
void function5(void){
	
	printf("     ____          ____          ____       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("    _|  |_       __|  |__    ____|  |____   \n");
    printf("   (_|__|_)     (__|__|__)  (____|__|____)  \n");
}
void function6(void){
	
	printf("     ____          ____          ____       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |        __|  |__     \n");
    printf("    _|  |_         |  |      _(__|  |__)_   \n");
    printf("   (_|__|_)        |__|     (____|__|____)  \n");
}
void function7(void){
	
	printf("     ____          ____          ____       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |          |  |       \n");
    printf("     |  |          |  |         _|  |_      \n");
    printf("     |  |          |  |        (_|  |_)     \n");
    printf("     |  |          |  |      _(__|  |__)_   \n");
    printf("     |__|          |__|     (____|__|____)  \n");
}
void function8(void){
	
	printf("       ____          ____          ____\n");
    printf("       |  |          |  |          |  |\n");
    printf("       |  |          |  |          |  |\n");
    printf("       |  |          |  |          |  |\n");
    printf("   1  (|  |)         |  |          |  |\n");
    printf("  2  (_|  |_)        |  |          |  |\n");
    printf(" 3 _(__|  |__)_      |  |          |  |\n");
    printf("4 (____|__|____)     |__|          |__|\n");
    printf("        A             B             C  \n"); 
}
void game(int n, char colon1, char colon2, char colon3)
{
    if (n == 1)
    {
        printf("\n Disk 1 from colon %c go to colon %c", colon1, colon2);
        return ;
    }
    game(n-1, colon1, colon3, colon2);
    printf("\n Disk %d from colon %c go to colon %c", n, colon1, colon2);
    game(n-1, colon3, colon2, colon1);
}
 
int main(int argc, char *argv[]) {
	
	int n;
	printf("Enter disk number");
	scanf("%d",&n);
		if(n==3){
    printf("\n");
    function();
    getch();
}
else if (n==4){
    printf("\n");
    function8();
    getch();
	}
    game(n, 'A', 'C', 'B');
	if(n==3){
printf("\n");	
getch();	
function1();
getch();
function2();
getch();
function3();
getch();
function4();
getch();
function5();
getch();
function6();
getch();
function7();
getch();
}
system("PAUSE");
	return 0;
}
