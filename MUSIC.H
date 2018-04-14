/*header file designed by amogh kalyanshetti 
all rights reserved*/
#include<dos.h>
#include<stdio.h>
#define half 250
#define full 500
#define quart_full 375
#define ni1 sound(230)
#define sa1 sound(240)
#define re sound(270)
#define ga sound(300)
#define ga_k sound(288)
#define ma sound(320)
#define pa sound(360)
#define dha sound(400)
#define ni sound(450)
#define sa2 sound(480)
#define syn nosound();delay(100)
void sa1_as(int s)
{
  sa1;
  delay(s);
  re;
  delay(s);
  ga;
  delay(s);
  ma;
  delay(s);
  pa;
  delay(s);
  dha;
  delay(s);
  ni;
  delay(s);
  sa2;
  delay(s);
  nosound();
}
void sa2_ds(int s)
{
  sa2;
  delay(s);
  ni;
  delay(s);
  dha;
  delay(s);
  pa;
  delay(s);
  ma;
  delay(s);
  ga;
  delay(s);
  re;
  delay(s);
  sa1;
  delay(s);
  nosound();
}
void national_anthem()
{
  int i;
  sa1;
  delay(half);
  re;
  delay(half);
  for(i=1;i<=10;i++)
  {
   ga;
   if(i==5||i==8)
   delay(full-100);
   else
   delay(half-100);
   syn;
  }
  re;
  delay(half);
  ga;
  delay(half);
  ma;
  delay(half);
  nosound();
  delay(250);
 //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  ga;
  delay(full-100);
  nosound();
  delay(100);
  ga;
  delay(half-100);
  nosound();
  delay(100);
  ga;
  delay(half-100);
  nosound();
  delay(100);
  re;
  delay(full-100);
  nosound();
  delay(100);
  re;
  delay(half-100);
  nosound();
  delay(100);
  re;
  delay(half);
  ni1;
  delay(half);
  re;
  delay(half);
  sa1;
  delay(full);

 //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 nosound();
 delay(100);
  sa1;
  delay(half);
  for(i=1;i<=10;)
  {
      pa;
      if(i==1)
	delay(quart_full-100);
      if(i==3||i==8)
	delay(full-100);
      else
	delay(half-100);
     nosound();
     delay(100);
     i++;

  }
  ma;
  delay(half);
  dha;
  delay(half);
  pa;
  delay(quart_full);
  nosound();
  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  pa;
  delay(full-100);
  syn;
  pa;
  delay(half-100);
  syn;
    pa;
  delay(half-100);
  syn;
  ga;
  delay(full-100);
  syn;
  ga;
  delay(half-100);
  syn;
   ga;
  delay(half-100);
  syn;
  re;
  delay(half);
  ma;
  delay(half);
  ga;
  delay(full);
  syn;


 }
void harmonium()
{
  int s;
  register char ch;
  printf("welcome to the harmonium\n");
  printf("\t\t\t\t\t\tby Amogh Kalyanshetti\n");
  printf(" key pressed\t\tswar\n");
  printf("2\t\t\tsa\n");
  printf("3\t\t\tre\n");
  printf("4\t\t\tga\n");
  printf("5\t\t\tma\n");
  printf("6\t\t\tpa\n");
  printf("7\t\t\tdha\n");
  printf("8\t\t\tni\n");
  printf("9\t\t\tsa\n");
  puts("w\t\t\tkomal re");
  puts("e\t\t\tkomal ga");
  puts("t\t\t\ttivra ma");
  puts("u\t\t\tkomal dha");
  puts("i\t\t\tkomal ni");
  printf("instructions->->\n");
  printf("press 'm' to stop\npress + and -  to increase  and decrease the speed of sound\n");

   s=200;
   while(ch!='m')
   {
     ch=getch();
     if(ch=='+')
	   s=s+10;
    else  if(ch=='-')
	   s=s-10;
     if(ch=='2')
     {
       sa1;
       delay(s);
       nosound();
     }
     else if(ch=='3')
     {
       re;
       delay(s);
       nosound();
     }
     else if(ch=='r')
     {
       ga;
	 delay(s);
       nosound();
     }
     else if(ch=='5')
     {
       ma;
	 delay(s);
       nosound();
     }
     else if(ch=='6')
     {
       pa;
	 delay(s);
       nosound();
     }
     else if(ch=='7')
     {
     dha;
       delay(s);
       nosound();
     }
     else if(ch=='i')
     {
       ni;
	 delay(s);
       nosound();
     }
     else if(ch=='9')
    {
      sa2;
	delay(s);
       nosound();
    }
    else if(ch=='1')
    {
      ni1;
      delay(s);
      nosound();
    }
    else if(ch=='e')
    {            //komal ga
      ga_k;
      delay(s);
      nosound();
    }
    else if(ch=='y')
    {
      sound(380); //komal dha
      delay(s);
      nosound();
    }
    else if(ch=='w')
    {
      sound(250);//komal re
      delay(s);
      nosound();
    }
    else if(ch=='u')
    {
      sound(430);//komal ni
      delay(s);
      nosound();
    }
    else if(ch=='t')
    {
      sound(337);
      delay(s);
      nosound();
    }
    else if(ch=='q')
    {
      sound(235);
      delay(s);
      nosound();
    }
    else if(ch=='0')
    {
      sound(530);
      delay(s);
      nosound();
    }
   }
   printf("you played beautifully thank you");

}