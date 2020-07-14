#include "add_nbo.h"



int main(int argc, char *argv[]){

	int i = argc;
	printf("ARGC : %d\n", argc);

	if ( argc < 3 ) {
		printf("Usage : %s <file1> <file2>\n", argv[0]);
		return 0;
	}


	FILE *fd1, *fd2;

	fd1 = fopen(argv[1], "rb");
	fd2 = fopen(argv[2], "rb");
	add_nbo(fd1, fd2);

	fclose(fd2);
	fclose(fd1);	
	return 0;
}
