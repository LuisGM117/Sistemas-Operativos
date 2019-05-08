#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>
// Usage ./opendir /supergigantesco/djfhff/

int main(int argc, char **argv){
	struct dirent *pDirent;
	DIR *pDIR;
	if(argc < 2){
		printf("Usage: ./opendir <dirname>\n");
		return 1;
	}
	
	pDIR = opendir (argv[1]);
	if (pDIR == NULL){
		printf("No se puede abrir el directorio '%s'\n", argv[1]);
		return 1;
	}
	
	while ((pDirent = readdir(pDIR))!= NULL) {
		printf(" name: %s inode: %d\n", pDirent->d_name,(int)pDirent->d_ino);
	}
	
	closedir (pDIR);
	return 0;
	
}