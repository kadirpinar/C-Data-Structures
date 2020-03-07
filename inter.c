#include <stdio.h>
#include <stdlib.h>

int main(){

int array[4]={1,2,3,4};
int array1[5]={3,4,5};
int array2[5]={0};
int i,j,counter=0;

for(i=0;i<4;i++){
for(j=0;j<5;j++){
if(array[i]==array1[j]) {
array2[counter]=array[i];
counter++;
}
}
}

for(i=0;array2[i]!='\0';i++){
printf("%d ",array2[i]);
}
return 0;
}


