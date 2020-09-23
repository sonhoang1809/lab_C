#include <stdio.h>
typedef struct Stud{
	int ID;
	int Mark;
};
int main(){
	Stud a[10];
	int n;
	char x[10],y[10];
	FILE *p;
	p= fopen("D:\\HOC TAP\\C\\fpt.txt","r");
	if(p!= NULL){
		fscanf(p,"%d",&n);
		fscanf(p,"%s",x); 
		fscanf(p,"%s",y);
		int i=0;
		while(!feof(p)){
			fscanf(p,"%d%d",&a[i].ID,&a[i].Mark);
			i=i+1;
			
		}
		printf("%d\n",n);
		printf("%s\t%s\n",x,y);
		for(int i=0;i<n;i++)
		{
			printf("%d\t%d\n",a[i].ID,a[i].Mark);
		}
	}else printf("the file does not exist !");
	fclose(p);
}
