#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
void main()
{
	FILE *f=fopen("/home/ninjatyr/PROGRAMS/CO/new_folder/new.txt","r+");
	FILE *g=fopen("/home/ninjatyr/PROGRAMS/CO/new_folder/new1.txt","w");
	char ch;
	
	ch=fgetc(f);
    while(1)
    {
    	fputc(ch,g);
		if(ch=='\n')
			break;   	
    	ch=fgetc(f);
	}
	
	fputs("2ndYear CED/COE \n",g);

	ch=fgetc(f);	 
	while(!feof(f))
    {
    	fputc(ch,g); 	
    	ch=fgetc(f);
	}
	 
	fclose(f);
	fclose(g);
	remove("/home/ninjatyr/PROGRAMS/CO/new_folder/new.txt");
	if(rename("/home/ninjatyr/PROGRAMS/CO/new_folder/new1.txt","/home/ninjatyr/PROGRAMS/CO/new_folder/new.txt")==0)
		printf("sucess");
}
