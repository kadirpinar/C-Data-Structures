#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char array[10];
	int i,j,a,b,c,d;

scanf("%s",&array);
for(i=0;array[i]!='\0';i++){
	if (array[i]=='+'){
       continue;
}
else if (array[i]=='-'){
       continue;
}
else if (array[i]=='*'){
       continue;
}
else if (array[i]=='/'){
       continue;
}
else if (array[i]=='('){
       continue;
}
else if (array[i]==')'){
       continue;
}
else printf("%c",array[i]);
}

for(i=0;array[i]!='\0';i++){
    switch(array[i]){
	case '+': a=i; break;
	case '-': c=i; break;
	case '*': b=i; break;
	case '/': d=i; break;
}

}


	if (a<b){
       printf("%c",'*');
       printf("%c",'+');
}
else if (c<b){
      printf("%c",'*');
      printf("%c",'-');

}
else if (a<d){
      printf("%c",'/');
      printf("%c",'+');

}
else if (c<d){
      printf("%c",'/');
      printf("%c",'-');

}

	return 0;
}
