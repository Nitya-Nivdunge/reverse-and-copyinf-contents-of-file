/*reversing the contents of a file*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	int ft,i=0;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("file does not exist");
	}
	fseek(fp,0,SEEK_END);
	while(i<ft)
	{
		i++;
		fseek(fp,-1,SEEK_END);
		printf("%c",fgetc(fp));
	}
	fclose(fp);
}
/* copying contents of a file to another file.*/
#include<stdio.h>
main()
{
	FILE*(fp),*(fp1);
	char ch;
	fp=fopen("abc.txt","r");
	fp1=fopen("efg.txt","w");
	ch=fgetc(fp);
	while(ch!=EOF);
	{
	  fputc(ch,(fp1));
	  ch=fgetc(fp);
	}
	fclose(fp);
	fclose(fp1);
	printf("file is copied successfully");
}
