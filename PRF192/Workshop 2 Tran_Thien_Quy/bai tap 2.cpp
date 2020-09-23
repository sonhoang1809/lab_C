#include<stdio.h>

int pa,pd,tf,n,ti,income,incometax;
int main()
{   pa=9000000;
    pd=3600000;
    n=tf=ti=income=incometax=0; /*gan gtri ban dau la 0*/
    printf("Nhap thu nhap chiu thue:");
    scanf("%d",&income);
    printf("Nhap n dependents:");
    scanf("%d",&n);
    tf=12*(pa+(n*pd)); /*thu nhap mien thue trong 1 nam*/
    ti=income-tf;
       { 
         if(ti<=0)
           {ti=0;
           incometax=0;
		   }
         else if (ti<=5000000)
           {
		   incometax=ti*0.05;
		   }
         else if(ti>5000001 and ti<10000000  )
           {
		   incometax=ti*0.1;
		   }
         else if(ti>10000001 and ti<18000000)
           { 
		   incometax=ti*0.15;
		   }
         else 
           {
             incometax=ti*0.2;
		   }
        }
    printf("Your income of this year: %d\n",income);
    printf("Dependent: %d\n",n);
    printf("Tax-free income: %d\n",tf);
    printf("Taxable income: %d\n",ti);
    printf("Income tax: %d\n",incometax);
    
}
    
        
    
    
