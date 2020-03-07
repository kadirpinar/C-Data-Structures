#include <stdio.h>
#include <stdlib.h>

int queue[10];
int top=-1;
int a[10];
void push(int a) {
	queue[++top]=a;
}

int main(int argc, char *argv[]) {
int b,c,i,d,f;
int e=0;
while(1){
	printf("1)Insert\n2)Delete\n3)Display\n");
	scanf("%d",&b);
	switch(b){
		case 1:printf("Enter elements number");
		       scanf("%d",&d);
		       for(i=0;i<d;i++){
		       printf("Enter a number");
		       scanf("%d",&c);
		       push(c);
		   }
		       break;
		case 2:	printf("Enter a number for delete");
	            scanf("%d",&a[e]);	
				e++;          	
	            break;

	    case 3:f=0;
		       for(i=0;queue[i]!='\0';i++)
	           if(queue[i]==a[f]) {
			   f++; continue;}
		       else {
			   printf("%d ",queue[i]);
		   }
		       printf("\n");
			   break;
	    default: break;
	}
	

}
system("PAUSE");
	return 0;
}
