#include <string.h>
#include <stdio.h>
int copier(char* str){
	char buffer[120];
	strcpy(buffer,str);
}
void main(int argc, char *argv[]){
	copier(argv[1]);
	printf("Done!\n");
}

