#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i,j,k;
   int array[10][10][10];
   
   for (i=1;i<4;i++)
   for (j=1;j<4;j++)
   for (k=1;k<4;k++)
   array[i][j][k] = 0;
   
j = 1;
k = 1;
for(i=1;i<4;i++){
printf("User%d\n",i);
printf("Question1\n");
printf("What is the genre of the person?\n");
printf("a)Male b)Female\n");
scanf(" %c",&array[i][j][k]);
printf("Question2\n");
printf("What is your education level?\n");
printf("a)Primary School b)High School c)University\n");
scanf(" %c",&array[i][j+1][k+1]);
printf("Question3\n");
printf("What is your best foreign language?\n");
printf("a)English b)German c)French\n");
scanf(" %c",&array[i][j+2][k+2]);
}

for(i=1, j=1, k=1;i<4;i++){
printf("User%d\n",i);
printf("\tQuestion%d ",j);
printf(" %c",array[i][j][k]);
printf("\n");
printf("\tQuestion%d ",j+1);
printf(" %c",array[i][j+1][k+1]);
printf("\n");
printf("\tQuestion%d ",j+2);
printf(" %c",array[i][j+2][k+2]);
printf("\n");
}
system("PAUSE");

	return 0;
}
