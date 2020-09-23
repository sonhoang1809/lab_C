#include <ctype.h>
#include <stdio.h>
int main()
{
int nVowels=0;
int nConsonants=0;
int nOthers=0;
char ch;
do    
{
	ch=getchar();
    ch=toupper(ch);
    if(ch>='A'&&ch<='Z')
      { 
       switch(ch)
           {case 'A':
           	case 'E':
            case 'I':
            case 'O':
            case 'U':nVowels++;break;
            default: nConsonants++;	
		   }
	  }
	else if(ch!=10)nOthers++; 
}   while (ch!='\n');
   printf("nVowels=%d\n",nVowels);
   printf("nConsonants=%d\n",nConsonants);
   printf("nOthers=%d\n",nOthers);
   return (0);

}
