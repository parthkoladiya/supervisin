#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *a;
  char ch;
  clrscr();
  a=fopen("TEST.txt","r");
  while((ch=getc(a))!=EOF)
  {
    printf("%c",ch);
  }
  fclose(a);
  getch();
}