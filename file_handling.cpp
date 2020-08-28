#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char ch[100];
	FILE *abc;
	abc=fopen("reverse.txt","w");
	printf("PROGRAM FOR REVERSING STRING\n");
    printf("INPUT:");
    scanf("%s",ch);
    fprintf(abc,"%s",ch);
    fclose(abc);
    abc=fopen("reverse.txt","r");
    fscanf(abc,"%s",ch);
    strrev(ch);
    printf("OUTPUT %s",ch);
    fclose(abc);
	
}
