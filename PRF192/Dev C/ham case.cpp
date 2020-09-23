#include <stdio.h>
int main()
{     int thu;
      char a;
      printf("Nhap so bat ki:");
      scanf("%d",&thu);
      switch (thu)
      {      case 2: thu = 2;
                    a='2';
                     break;
             case 3: thu = 3;
                     a='3';
                     break;
             case 4: thu = 4;
                     a='4';
                     break;
             case 5: thu = 5;
                     a='5';
                     break;
             case 6: thu = 6;
                     a='6';
                     break;
             case 7: thu = 7;
                     a='7';
                     break;
             case 8: thu = 8;
                    a='8';
                     break;
             default: thu = 0;
                    break;
	  }
 printf("Hom nay la thu %d ", thu);
return 0;
}
