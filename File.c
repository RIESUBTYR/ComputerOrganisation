#include<stdio.h>

void main()
{
	FILE *FP;
	FP=fopen("T1.txt","r");

	while(!feof(FP))
			printf("%c",fgetc(FP));
	
	fclose(FP);
}