#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
void main()
{
	FILE *f=fopen("/home/ninjatyr/PROGRAMS/CO/new_folder/new.txt","r+");
	FILE *g=fopen("/home/ninjatyr/PROGRAMS/CO/new_folder/new2.txt","w");
	char ch;
	
	ch=fgetc(f);
    while(1)
    {
    	fputc(ch,g);
		if(ch=='\n')
			break;   	
    	ch=fgetc(f);
	}
	
	char c[150];
	printf("Enter insertion text:-");
	scanf("%s",c);
	fputs(c,g);
	ch= (char)8;
	fputc(ch,g);
	ch=fgetc(f);

	while(ch!=EOF)
    {
    	fputc(ch,g); 	
    	ch=fgetc(f);
	}
	 
	fclose(f);
}
