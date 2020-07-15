#include "add_nbo.h"

void add_nbo(FILE *fd1, FILE *fd2){
	
        uint32_t file1[1];
        uint32_t file2[1];
	

        fread(file1, 2, 32, fd1);
        fread(file2, 2, 32, fd2);

	
        uint32_t n1 = ntohl(*file1);
        uint32_t n2 = ntohl(*file2);


        printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n1, n1, n2, n2, n1+n2, n1+n2);
}

