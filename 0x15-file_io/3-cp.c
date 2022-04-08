#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * cp_file - copies the content of a file to another file
 * @f_ori: name original of file
 * @f_des: name destiny of file
 * Return: Text content in file of destiny
 * permissions to write the file
 */
int cp_file(char *f_ori,char *f_des); 
int main()
{
	if(!cp_file("fichero1.txt","fichero2.txt"))
	printf("El fichero no se pudo copiar\n");
	else
	printf("Fichero copiado exitosamente\n");
	return 0;
}	

int cp_file(char *f_ori,char *f_des)
{
	FILE *fp_ori,*fp_des; 
	char c;

	if(! (fp_ori = fopen(f_ori,"rt")) || ! (fp_des = fopen(f_des,"wt")))
	{
		perror("Error de apertura de ficheros");
		exit(EXIT_FAILURE);
	}
 
	while((c = fgetc(fp_ori))!=EOF && !ferror(fp_ori) && !ferror(fp_des))
		fputc(c,fp_des);
 
	if(ferror(fp_ori) || ferror(fp_ori))
		return 1;
	fclose(fp_ori);
	fclose(fp_des);
	return 0;
}
