#include<stdio.h>
#include<conio.h>
#include<string.h>

  int main()
  {
     char password[20]; int i=0;
     printf("\nEnter the password:");
     do
     {  char a=getch();
     if(a=='\r') break;
     while(a=='\b')
     {
     if(i>=0)
      --i;
      else
      i=0;

     password[i]='\0';
         clrscr();
         if(a=='\r') break;
         printf("\nEnter the password:");
         for(int j=0;j<strlen(password);j++)
         putchar('*');
         a=getch();
        if(a=='\r') goto label;
         }

        password[i++]=a;
        putchar('*');
        }while(1);
        label:
    password[i]='\0';

    if(!strcmp(password,"789plzletmein"))
    printf("\nWelcome Mr.Karnik");
    else
    printf("\nAccess Denied");
    getch();
    }
