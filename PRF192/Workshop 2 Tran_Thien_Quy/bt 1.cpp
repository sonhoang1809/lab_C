#include<stdio.h>
#
double num1,num2,result; /*khai bao bien*/
char op;
int main()
  { printf("Nhap bieu thuc:"); 
    scanf( "%lf%c%lf",&num1,&op,&num2);  /*lenh nhap giatri*/
    switch (op)
              {    case'+':result=num1+num2;               /*phep cong*/
                      printf("Ket qua:%lf",result);
                      break;
                   case'-':result=num1-num2;              /*phep tru*/
                      printf("Ket qua:%lf",result);
                      break;
                   case'*':result=num1*num2;              /*phep nhan*/
                      printf("Ket qua:%lf",result);
                      break;
                   case'/': if(num2==0)                    /*phep chia*/
                      printf("Divide by 0");               
                            else
                       {  result = num1/num2;
                          printf("Ket qua:%lf",result);           /*tra kq*/
                        }              
                  default: printf("Op khong ho tro");            /*truong hop khac*/
               }
  }
