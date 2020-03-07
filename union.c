#include <stdio.h>
#include <stdlib.h>

int main(){

int array[5]={4,8,6,5};
int array1[5]={3,4,5,6};
int array2[10]={0};
int i,j,counter=0;

for(i=0;i<5;i++){
if(array[i]<array1[i])array2[i]=array[i];
else if(array[i]==array1[i]){
array2[i]=array[i];
counter++;
}
else if(array[i]>array1[i])array2[i]=array1[i];
}
for(i=0;array1[i]!='\0';i++){
if(array1[i]!=array2[counter]) array2[++counter]=array1[i];
}
for(i=0;array2[i]!='\0';i++){
printf("%d ",array2[i]);
}
}

