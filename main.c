#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int data[SIZE];
char *words[SIZE];

int main(int argc,char **argv){
	int i;
	void *gp;

	words[0] = "Hello";
	words[1] = "awesome";
	words[2] = "Peaple";

	for (i=0;i<SIZE;i++){
		data[i] =  i;
	}

	for (i=0;i<SIZE;i++){
		printf("Data[%d] = %d\n",i,data[i]);
	}

	gp = data;

	printf("The address of the gp pointer is:%p\n",gp);
	printf("The value pointer by gp is: %d\n",*(int*)gp);
	gp = (int*)gp + 1;
	printf("The value of that pointer now is :%d\n",*(int*)gp);
	
	gp = words;

	printf("The address of gp now is: %p\n",gp);
	printf("The value stored in the first address is: %s\n",*(char**)gp);
	gp = (char **)gp + 1;
	printf("The value stored in the second address is: %s\n",*(char**)gp);

	return 0;
}
