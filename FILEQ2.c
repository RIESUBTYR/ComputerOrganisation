#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h> 
int  main()
{
	mkdir("cool_folder",0777);
	FILE *a;
	a=fopen("cool_folder/T2.txt","w");
	char x;
	printf("WRITE:-\n");
	while ((x=getchar())!=EOF)
		putc(x,a);
	fclose(a);

	
	printf("\n READ:-\n");
	FILE *b;
	b=fopen("cool_folder/T2.txt","r");
	int flag=0;
	while(!feof(b))
	{
		char x
		printf("%c",fgetc(b) );
	}
	fclose(b);

	return 0;

}