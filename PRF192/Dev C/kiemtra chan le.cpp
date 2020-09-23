#include<stdio.h>
int getUserChoice,x;
{  printf("Nhap so bat ky: ");
   scanf("%d",&x);
}
void cau 1(int i)
{   if(x%2==0)
    return 1;
    
}


int main()
{ int userChoice;
  do 
    { userChoice= getUserChoice();
      switch(userChoice)
         { case 1: function1();break;
           case 2: function2();break;
           default: printf("Bye!\n");
           
	     }
	}
	while (userChoice>0 && userChoice<3);
	fflush(stdin);
	getchar();
	return 0;
}
