#include <stdio.h>
int main()
{
	int a[10];
	FILE *p;
	p = fopen("c:\\Users\\Admin\\Desktop\\fpt.txt","r");
	// w-write; r-read; a-apend;// w+;r+;a+;
	if (p==NULL) printf("the file doesnot exist.");
//	else
//	{
//		for(int i=0;i<10;i++)
//		{
//			fscanf(p,"%d\t",&a[i]);
//		}
//	fclose(p);
//	}
	for (int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		}
	printf("thank");	
}	
		
