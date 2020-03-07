#include <stdio.h>
#include <stdlib.h>



int main(){

int size;

int *ptr;

printf("Enter size");
scanf("%d",&size);

int a[size];

int i;
ptr=(int*)malloc(size * sizeof(int));
for(i=0;i<size;i++){
printf("Enter a number");

scanf("%d",ptr);
a[i]=*ptr;
}
for(i=0;i<size;i++){
printf("%d\n",a[i]);
}
return 0;
}
