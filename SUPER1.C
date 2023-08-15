#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *a;
  char ch;
  clrscr();
  a=fopen("TEST.txt","w");
  while((ch=getchar())!='z')
  {

    putc(ch,a);
  }
  fclose(a);
  getch() ;
}