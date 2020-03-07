#include <stdio.h>
#include <stdlib.h>

void getValue(double**matris,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	{
	printf("Enter matris [%d][%d]",i+1,j+1);// write here value for each coloum and row 
	scanf("%lf",&matris[i][j]);
	}
}
void dispValue(double**matris,int row,int col)	
{
	int i,j;
	for(i=0;i<row;i++){
	for(j=0;j<col;j++)//display values like matrix
	printf("%.2lf\t",matris[i][j]);
	printf("\n");
}
}
void rowcolTotal(double**matris,int row,int col){
	
	int i,j;
	double total;
    printf("column total:\n");
 for(j=0;j<col;j++)
 {
  for(i=0;i<row;i++)
  {
   total=total+matris[i][j];//formula to find the total of values on coloumn 
  }
  printf("%.2lf\t",total);
  total=0;
 }
  
  printf("\nrow total:\n");
 
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   total=total+matris[i][j];//formula to find the total of values on row
  }
  printf("%.2lf\t",total);
  total=0;
 }    
}
void readText(void)
{
	FILE *fp;
	char s[100], fname[20];
	printf("Enter file name (like file.txt) : ");// enter name of file
	scanf("%s",fname);
	fp=fopen(fname, "r");// to read the file
	if(fp==NULL)
	{
		printf("Error");//meaningful message
		getch();
	}
	while(fgets(s, 99, fp)!=NULL)//display the file
	{
	printf("%s",s);
	}
	printf("\n");
	fclose(fp);
	getch();
}
int main(int argc, char *argv[]) {
	
	double **matris;
	int col,row,i,j,a,b;
	while(1){
	
	printf("Enter your matrix row and col size");// program ask to you size of matrix
	scanf("%d%d",&row,&col);
	if(row>100||col>100){ // to be max 100 
		printf("Your size over maximum\n"); // meaningful message
		continue;
	}
	else break;
}
	matris=(double**)malloc(sizeof(double*)*row); // size of row
	for(i=0;i<row;i++)
	matris[i]=(double*)malloc(sizeof(double)*col);// size of col

	getValue(matris,row,col);
	dispValue(matris,row,col);
	rowcolTotal(matris,row,col);
	printf("\nEnter the interval\n");// Enter the interval 
	scanf("%d%d",&a,&b);
	for(i=0;i<row;i++){	
	for(j=0;j<col;j++)
{
	if((a<=matris[i][j])&&(matris[i][j]<=b)){//values will be 0 in this interval
		matris[i][j]=0;
	}	
	printf("%.2lf\t",matris[i][j]);//display again with interval
}
	printf("\n");	
}	

    readText();
    
	system("PAUSE");
	return 0;
}
