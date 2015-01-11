/*The following program displays the calendar of the entered year
& month and also the position(phase) of the moon on the selected
date from the calendar.*/
#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<graphics>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
struct date d;
void welcome()		    //Introduction Page With Scroller
{int i,a;
randomize();
getdate(&d);
a=random(6);
textcolor(a+9);
for(i=15;i<=30;i++)
{gotoxy(i,3);
cprintf(" C A L E N D E R");
delay(100);}
for(i=45;i>=35;i--)
{gotoxy(i,5);
cprintf("W I T H ");
delay(100);}
for(i=15;i<=33;i++)
{gotoxy(i,7);
cprintf(" L U N A R");
delay(100);}
for(i=45;i>=34;i--)
{gotoxy(i,9);
cprintf("C Y C L E ");
delay(100);}
for(i=15;i<=32;i++)
{gotoxy(i,11);
cprintf(" M A D E  B Y");
delay(100);}
for(i=45;i>=25;i--)
{gotoxy(i,13);
cprintf("P R I T I S H  M U K H E R J E E ");
delay(100);}
for(i=15;i<=36;i++)
{gotoxy(i,15);
cprintf(" A N D");
delay(100);}
for(i=45;i>=30;i--)
{gotoxy(i,17);
cprintf("A A Y U S H  D A S ");
delay(100);}
gotoxy(15,22);
textcolor(7);
cout<<"Press any key to continue...";
getch();}		//End Of Introduction Page
void main()
{clrscr();
void calender();	//Function Declarations
void zodiac();
void eclipse();
void holiday();
int x;
welcome();
calender();
A:{clrscr();
  cout<<"Other Apps:\n"
		<<"1. Zodiac Sign\n"
		<<"2. Solar Eclipse Prediction\n"
		<<"3. List of Common Holidays\n"
		<<"Calender (4)\n"
		<<"Exit (0)\n"
		<<"Enter Choice  ";
  cin>>x;
  switch(x)
  {
  case 0:
  exit(0);
  break;
  case 1:
  zodiac();
  break;
  case 2:
  eclipse();
  break;
  case 3:
  holiday();
  break;
  case 4:
  calender();
  break;
  default:
  cout<<"Invalid Selection!!";
  delay(1500);
  exit(0);}
  goto A;}}
void calender()
{
clrscr();
int a,b,i,j;
char g;
void lunar(int&,int&,int,int);
X:{cout<<"\t\t\tCALENDER from Year 2000 to 2020\n\n";
  cout<<"Enter the year\n";
  cin>>a;
if (a<2000 || a>2020)
{cout<<"Please enter a valid year";
 delay(1000);
 clrscr();
 goto X;}
cout<<"Enter the month\n";
cin>>b;
if (b<1 || b>12)
{cout<<"Please enter a valid month";
 delay(1000);
 clrscr();
 goto X;}}
cout<<"\n\n\t\t\t";
if (b==1)		//Setting Values For Selected Month And Year
{cout<<"January ";
	if (a==2000)	i=6;
	else if (a==2001)	i=1;
	else if (a==2002)	i=2;
	else if (a==2003)	i=3;
	else if (a==2004)	i=4;
	else if (a==2005)	i=6;
	else if (a==2006)	i=7;
	else if (a==2007)	i=1;
	else if (a==2008)	i=2;
	else if (a==2009)	i=4;
	else if (a==2010)	i=5;
	else if (a==2011)	i=6;
	else if (a==2012)	i=7;
	else if (a==2013)	i=2;
	else if (a==2014)	i=3;
	else if (a==2015)	i=4;
	else if (a==2016)	i=5;
	else if (a==2017)	i=7;
	else if (a==2018)	i=1;
	else if (a==2019)	i=2;
	else if (a==2020)	i=3;
	}
else if (b==2)
{cout<<"February ";
	if (a==2000)   	i=16;
	else if (a==2001)	i=25;
	else if (a==2002)	i=26;
	else if (a==2003)	i=27;
	else if (a==2004)	i=21;
	else if (a==2005)	i=23;
	else if (a==2006)	i=24;
	else if (a==2007)	i=25;
	else if (a==2008)	i=19;
	else if (a==2009)	i=28;
	else if (a==2010)	i=22;
	else if (a==2011)	i=23;
	else if (a==2012)	i=17;
	else if (a==2013)	i=26;
	else if (a==2014)	i=27;
	else if (a==2015)	i=28;
	else if (a==2016)	i=15;
	else if (a==2017)	i=24;
	else if (a==2018)	i=25;
	else if (a==2019)	i=26;
	else if (a==2020)	i=20;
	}
else if (b==3)
{cout<<"March ";
	if (a==2000)	i=3;
	else if (a==2001)	i=4;
	else if (a==2002)	i=5;
	else if (a==2003)	i=6;
	else if (a==2004)	i=1;
	else if (a==2005)	i=2;
	else if (a==2006)	i=3;
	else if (a==2007)	i=4;
	else if (a==2008)	i=6;
	else if (a==2009)	i=7;
	else if (a==2010)	i=1;
	else if (a==2011)	i=2;
	else if (a==2012)	i=4;
	else if (a==2013)	i=5;
	else if (a==2014)	i=6;
	else if (a==2015)	i=7;
	else if (a==2016)	i=2;
	else if (a==2017)	i=3;
	else if (a==2018)	i=4;
	else if (a==2019)	i=5;
	else if (a==2020)	i=7;
	}
else if (b==4)
{cout<<"April ";
	if (a==2000)	i=13;
	else if (a==2001)	i=14;
	else if (a==2002)	i=8;
	else if (a==2003)	i=9;
	else if (a==2004)	i=11;
	else if (a==2005)	i=12;
	else if (a==2006)	i=13;
	else if (a==2007)	i=14;
	else if (a==2008)	i=9;
	else if (a==2009)	i=10;
	else if (a==2010)	i=11;
	else if (a==2011)	i=12;
	else if (a==2012)	i=14;
	else if (a==2013)	i=8;
	else if (a==2014)	i=9;
	else if (a==2015)	i=10;
	else if (a==2016)	i=12;
	else if (a==2017)	i=13;
	else if (a==2018)	i=14;
	else if (a==2019)	i=8;
	else if (a==2020)	i=10;
	}
else if (b==5)
{cout<<"May ";
	if (a==2000)	i=1;
	else if (a==2001)	i=2;
	else if (a==2002)	i=3;
	else if (a==2003)	i=4;
	else if (a==2004)	i=6;
	else if (a==2005)	i=7;
	else if (a==2006)	i=1;
	else if (a==2007)	i=2;
	else if (a==2008)	i=4;
	else if (a==2009)	i=5;
	else if (a==2010)	i=6;
	else if (a==2011)	i=7;
	else if (a==2012)	i=2;
	else if (a==2013)	i=3;
	else if (a==2014)	i=4;
	else if (a==2015)	i=5;
	else if (a==2016)	i=7;
	else if (a==2017)	i=1;
	else if (a==2018)	i=2;
	else if (a==2019)	i=3;
	else if (a==2020)	i=5;
	}
else if (b==6)
{cout<<"June ";
	if (a==2000)	i=11;
	else if (a==2001)	i=12;
	else if (a==2002)	i=13;
	else if (a==2003)	i=14;
	else if (a==2004)	i=9;
	else if (a==2005)	i=10;
	else if (a==2006)	i=11;
	else if (a==2007)	i=12;
	else if (a==2008)	i=14;
	else if (a==2009)	i=8;
	else if (a==2010)	i=9;
	else if (a==2011)	i=10;
	else if (a==2012)	i=12;
	else if (a==2013)	i=13;
	else if (a==2014)	i=14;
	else if (a==2015)	i=8;
	else if (a==2016)	i=10;
	else if (a==2017)	i=11;
	else if (a==2018)	i=12;
	else if (a==2019)	i=13;
	else if (a==2020)	i=8;
	}
else if (b==7)
{cout<<"July ";
	if (a==2000)	i=6;
	else if (a==2001)	i=7;
	else if (a==2002)	i=1;
	else if (a==2003)	i=2;
	else if (a==2004)	i=4;
	else if (a==2005)	i=5;
	else if (a==2006)	i=6;
	else if (a==2007)	i=7;
	else if (a==2008)	i=2;
	else if (a==2009)	i=3;
	else if (a==2010)	i=4;
	else if (a==2011)	i=5;
	else if (a==2012)	i=7;
	else if (a==2013)	i=1;
	else if (a==2014)	i=2;
	else if (a==2015)	i=3;
	else if (a==2016)	i=5;
	else if (a==2017)	i=6;
	else if (a==2018)	i=7;
	else if (a==2019)	i=1;
	else if (a==2020)	i=3;
	}
else if (b==8)
{cout<<"August ";
	if (a==2000)	i=2;
	else if (a==2001)	i=3;
	else if (a==2002)	i=4;
	else if (a==2003)	i=5;
	else if (a==2004)	i=6;
	else if (a==2005)	i=1;
	else if (a==2006)	i=2;
	else if (a==2007)	i=3;
	else if (a==2008)	i=5;
	else if (a==2009)	i=6;
	else if (a==2010)	i=7;
	else if (a==2011)	i=1;
	else if (a==2012)	i=3;
	else if (a==2013)	i=4;
	else if (a==2014)	i=5;
	else if (a==2015)	i=6;
	else if (a==2016)	i=1;
	else if (a==2017)	i=2;
	else if (a==2018)	i=3;
	else if (a==2019)	i=4;
	else if (a==2020)	i=6;
	}
else if (b==9)
{cout<<"September ";
	if (a==2000)	i=12;
	else if (a==2001)	i=13;
	else if (a==2002)	i=14;
	else if (a==2003)	i=8;
	else if (a==2004)	i=10;
	else if (a==2005)	i=11;
	else if (a==2006)	i=12;
	else if (a==2007)	i=13;
	else if (a==2008)	i=8;
	else if (a==2009)	i=9;
	else if (a==2010)	i=10;
	else if (a==2011)	i=11;
	else if (a==2012)	i=13;
	else if (a==2013)	i=14;
	else if (a==2014)	i=8;
	else if (a==2015)	i=9;
	else if (a==2016)	i=11;
	else if (a==2017)	i=12;
	else if (a==2018)	i=13;
	else if (a==2019)	i=14;
	else if (a==2020)	i=9;
	}
else if (b==10)
{cout<<"October ";
	if (a==2000)	i=7;
	else if (a==2001)	i=1;
	else if (a==2002)	i=2;
	else if (a==2003)	i=3;
	else if (a==2004)	i=5;
	else if (a==2005)	i=6;
	else if (a==2006)	i=7;
	else if (a==2007)	i=1;
	else if (a==2008)	i=3;
	else if (a==2009)	i=4;
	else if (a==2010)	i=5;
	else if (a==2011)	i=6;
	else if (a==2012)	i=1;
	else if (a==2013)	i=2;
	else if (a==2014)	i=3;
	else if (a==2015)	i=4;
	else if (a==2016)	i=6;
	else if (a==2017)	i=7;
	else if (a==2018)	i=1;
	else if (a==2019)	i=2;
	else if (a==2020)	i=4;
	}
else if (b==11)
{cout<<"November ";
	if (a==2000)	i=10;
	else if (a==2001)	i=11;
	else if (a==2002)	i=12;
	else if (a==2003)	i=13;
	else if (a==2004)	i=8;
	else if (a==2005)	i=9;
	else if (a==2006)	i=10;
	else if (a==2007)	i=11;
	else if (a==2008)	i=13;
	else if (a==2009)	i=14;
	else if (a==2010)	i=8;
	else if (a==2011)	i=9;
	else if (a==2012)	i=11;
	else if (a==2013)	i=12;
	else if (a==2014)	i=13;
	else if (a==2015)	i=14;
	else if (a==2016)	i=9;
	else if (a==2017)	i=10;
	else if (a==2018)	i=11;
	else if (a==2019)	i=12;
	else if (a==2020)	i=14;
	}
else if (b==12)
{cout<<"December ";
	if (a==2000)	i=5;
	else if (a==2001)	i=6;
	else if (a==2002)	i=7;
	else if (a==2003)	i=1;
	else if (a==2004)	i=3;
	else if (a==2005)	i=4;
	else if (a==2006)	i=5;
	else if (a==2007)	i=6;
	else if (a==2008)	i=1;
	else if (a==2009)	i=2;
	else if (a==2010)	i=3;
	else if (a==2011)	i=4;
	else if (a==2012)	i=6;
	else if (a==2013)	i=7;
	else if (a==2014)	i=1;
	else if (a==2015)	i=2;
	else if (a==2016)	i=4;
	else if (a==2017)	i=5;
	else if (a==2018)	i=6;
	else if (a==2019)	i=7;
	else if (a==2020)	i=2;
	}
cout<<a<<"\n\nMon\tTue\tWed\tThur\tFri\tSat\tSun\n";
switch (i)		//Loops For Printing The Calender
{
case 1:
	for (j=1;j<=31;j++)
	{cout<<j<<"\t";
	if (j==7||j==14||j==21||j==28)
	cout<<"\n";}
break;
case 2:
	cout<<"\t";
	for (j=1;j<=31;j++)
	{cout<<j<<"\t";
	if (j==6||j==13||j==20||j==27)
	cout<<"\n";}
break;
case 3:
	cout<<"\t\t";
	for (j=1;j<=31;j++)
	{cout<<j<<"\t";
	if (j==5||j==12||j==19||j==26)
	cout<<"\n";}
break;
case 4:
	cout<<"\t\t\t";
	for (j=1;j<=31;j++)
	{cout<<j<<"\t";
	if (j==4||j==11||j==18||j==25)
	cout<<"\n";}
break;
case 5:
	cout<<"\t\t\t\t";
	for (j=1;j<=31;j++)
	{cout<<j<<"\t";
	if (j==3||j==10||j==17||j==24)
	cout<<"\n";}
break;
case 6:
	cout<<"\t\t\t\t\t";
	for (j=1;j<=31;j++)
	{cout<<j<<"\t";
	if (j==2||j==9||j==16||j==23||j==30)
	cout<<"\n";}
break;
case 7:
	cout<<"\t\t\t\t\t\t";
	for (j=1;j<=31;j++)
	{cout<<j<<"\t";
	if (j==1||j==8||j==15||j==22||j==29)
	cout<<"\n";}
break;
case 8:
	for (j=1;j<=30;j++)
	{cout<<j<<"\t";
	if (j==7||j==14||j==21||j==28)
	cout<<"\n";}
break;
case 9:
	cout<<"\t";
	for (j=1;j<=30;j++)
	{cout<<j<<"\t";
	if (j==6||j==13||j==20||j==27)
	cout<<"\n";}
break;
case 10:
	cout<<"\t\t";
	for (j=1;j<=30;j++)
	{cout<<j<<"\t";
	if (j==5||j==12||j==19||j==26)
	cout<<"\n";}
break;
case 11:
	cout<<"\t\t\t";
	for (j=1;j<=30;j++)
	{cout<<j<<"\t";
	if (j==4||j==11||j==18||j==25)
	cout<<"\n";}
break;
case 12:
	cout<<"\t\t\t\t";
	for (j=1;j<=30;j++)
	{cout<<j<<"\t";
	if (j==3||j==10||j==17||j==24)
	cout<<"\n";}
break;
case 13:
	cout<<"\t\t\t\t\t";
	for (j=1;j<=30;j++)
	{cout<<j<<"\t";
	if (j==2||j==9||j==16||j==23)
	cout<<"\n";}
break;
case 14:
	cout<<"\t\t\t\t\t\t";
	for (j=1;j<=30;j++)
	{cout<<j<<"\t";
	if (j==1||j==8||j==15||j==22||j==29)
	cout<<"\n";}
break;
case 15:
	for (j=1;j<=29;j++)
	{cout<<j<<"\t";
	if (j==7||j==14||j==21||j==28)
	cout<<"\n";}
break;
case 16:
	cout<<"\t";
	for (j=1;j<=29;j++)
	{cout<<j<<"\t";
	if (j==6||j==13||j==20||j==27)
	cout<<"\n";}
break;
case 17:
	cout<<"\t\t";
	for (j=1;j<=29;j++)
	{cout<<j<<"\t";
	if (j==5||j==12||j==19||j==26)
	cout<<"\n";}
break;
case 18:
	cout<<"\t\t\t";
	for (j=1;j<=29;j++)
	{cout<<j<<"\t";
	if (j==4||j==11||j==18||j==25)
	cout<<"\n";}
break;
case 19:
	cout<<"\t\t\t\t";
	for (j=1;j<=29;j++)
	{cout<<j<<"\t";
	if (j==3||j==10||j==17||j==24)
	cout<<"\n";}
break;
case 20:
	cout<<"\t\t\t\t\t";
	for (j=1;j<=29;j++)
	{cout<<j<<"\t";
	if (j==2||j==9||j==16||j==23)
	cout<<"\n";}
break;
case 21:
	cout<<"\t\t\t\t\t\t";
	for (j=1;j<=29;j++)
	{cout<<j<<"\t";
	if (j==1||j==8||j==15||j==22)
	cout<<"\n";}
break;
case 22:
	for (j=1;j<=28;j++)
	{cout<<j<<"\t";
	if (j==7||j==14||j==21)
	cout<<"\n";}
break;
case 23:
	cout<<"\t";
	for (j=1;j<=28;j++)
	{cout<<j<<"\t";
	if (j==6||j==13||j==20||j==27)
	cout<<"\n";}
break;
case 24:
	cout<<"\t\t";
	for (j=1;j<=28;j++)
	{cout<<j<<"\t";
	if (j==5||j==12||j==19||j==26)
	cout<<"\n";}
break;
case 25:
	cout<<"\t\t\t";
	for (j=1;j<=28;j++)
	{cout<<j<<"\t";
	if (j==4||j==11||j==18||j==25)
	cout<<"\n";}
break;
case 26:
	cout<<"\t\t\t\t";
	for (j=1;j<=28;j++)
	{cout<<j<<"\t";
	if (j==3||j==10||j==17||j==24)
	cout<<"\n";}
break;
case 27:
	cout<<"\t\t\t\t\t";
	for (j=1;j<=28;j++)
	{cout<<j<<"\t";
	if (j==2||j==9||j==16||j==23)
	cout<<"\n";}
break;
case 28:
	cout<<"\t\t\t\t\t\t";
	for (j=1;j<=28;j++)
	{cout<<j<<"\t";
	if (j==1||j==8||j==15||j==22)
	cout<<"\n";}
break;
}
gotoxy(8,25);
cout<<"(Arrow keys to navigate, Enter to Select, Esc to exit)";
int xc=1,yc=1;		//To Let The User Select A Date from The Month
gotoxy(xc,yc);
do
  {g=getch();
  if(g==80)		//For Up key
    {if(yc==24) yc=0;
    gotoxy(xc,++yc);}
  else if(g==77)      	//For Right key
    {if(xc==78) xc=0;
    gotoxy(++xc,yc);}
  else if(g==75)      	//For Left key
    {if(xc==0) xc=79;
    gotoxy(--xc,yc);}
  else if(g==72)      	//For Down key
    {if(yc==1) yc=25;
    gotoxy(xc,--yc);}
  if(g==13)           	//For Return key
    lunar(xc,yc,a,b);
  }while(g!=27);      	//For Esc key
}
void zodiac()
{clrscr();
void numero(char[],int);
char name[30],ch;
int a,b,c,l;
cout<<"\t\t\t\tZodiac Sign\n\n";
cout<<"Enter your name\n";
gets(name);
cout<<"Enter D.O.B.(dd mm yyyy)\n";
cin>>a>>b>>c;
if(a<1||a>31||b<1||b>12||c>d.da_year||c<1910)
{cout<<"Invalid D.O.B.";
delay(1500);
exit(0);}
puts(name);
cout<<"Your age is "<<d.da_year-c<<" years.\n";
delay(2000);
clrscr();
if(b==3&&a>=21||b==4&&a<=19)
{l=1;
 cout<<"You belong to the first house of the Zodiac circle, Aries.\nYou are usually courageous, energetic, competitive and pioneering.\nRed and White are your lucky colours.\nLibra is your opposite sign.\nYou are least compatible with Virgo and Scorpio.\nYou are most compatible with Leo, Sagittarius and Aries.\nYou can be selfish, abrasive, impulsive and reckless.\nFor you it is all or nothing in friendships and other romantic involvements.\n\n";
 cout<<"Other Information.\n";
 cout<<"Birthstone: Diamond.\n";
 cout<<"New age stone: Bloodstone, ruby.\n";
 cout<<"Element: Fire\n";
 cout<<"Anatomy ruled: Head, face, throat.\n";
 cout<<"Flower: Geranium.\n";
 cout<<"Your Tarot card: IV The Emperor\n";}
else if(b==4&&a>=20||b==5&&a<=20)
{l=2;
 cout<<"You belong to the second house of the Zodiac circle, Taurus.\nYou are usually loving, loyal, prosperous and patient.\nGreen is your lucky colour.\nScorpio is your opposite sign.\nYou are least compatible with Libra and Sagittarius.\nYou are most compatible with Virgo, Capricorn and Taurus.\nYou can be materialistic, stubborn, inflexible and boring.\nYou are at your best when you can be creative in work.\nYou look for steadfast love and warm affection in a relationship, which is precisely what you are capable of offering.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Emerald\n";
 cout<<"New age stone: Rose quartz\n";
 cout<<"Element: Earth\n";
 cout<<"Anatomy ruled: Throat and neck\n";
 cout<<"Flower: Violet\n";
 cout<<"Your tarot card: V The Hierophant\n";}
else if(b==5&&a>=21||b==6&&a<=21)
{l=3;
 cout<<"You belong to the third house of the Zodiac circle, Gemini.\nYou are usually quick-witted, curious, entertaining and open-minded.\nYellow and orange are your lucky colours.\nSagittarius is your opposite sign.\nYou are least compatible with Scorpio and Capricorn.\nYou are most compatible with Libra, Aquarius and Gemini.\nYou are drawn to active people who use their heads, and succeed in charming them with your ready wit.\nYou can be fickle, easily distracted, nervous and mischievous.\nDespite a reputation of being fickle, once you marry remain committed.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Tourmaline\n";
 cout<<"New age stone: Citrine, Spectrolite\n";
 cout<<"Element: Air\n";
 cout<<"Anatomy ruled: Hands, arms, nervous system\n";
 cout<<"Flower: Lily of the Valley\n";
 cout<<"Your Tarot card: VI The Lovers\n";}
else if(b==6&&a>=22||b==7&&a<=22)
{l=4;
 cout<<"You belong to the fourth house of the Zodiac circle, Cancer.\nYou are usually sensitive, caring, nurturing and shrewd.\nSilver and pearl white are your lucky colours.\nCapricorn is your opposite sign.\nYou are least compatible with Sagittarius and Aquarius.\nYou are most compatible with Pisces, Scorpio and Cancer.\nYou can be controlling, manipulative, selfish and easily hurt.\nYou can be greatly affected by those close to you since you are so impressionable.\nYour inner voice makes you aware of the right time to act.\nYou could do well in any career that includes all matters to do with women.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Pearl \n";
 cout<<"New age stone: Moonstone \n";
 cout<<"Element: Water\n";
 cout<<"Anatomy ruled: Stomach, Breasts\n";
 cout<<"Flower: Larkspur\n";
 cout<<"Your Tarot card: VII The Chariot\n";}
else if(b==7&&a>=23||b==8&&a<=22)
{l=5;
 cout<<"You belong to the fifth house of the Zodiac circle, Leo.\nYou are usually generous, assertive, faithful and responsible.\nGold and scarlet are your lucky colours.\nAquarius is your opposite sign.\nYou are least compatible with Pisces and Capricorn.\nYou are most compatible with Aries, Sagittarius and Leo.\nYou can be pompous, stubborn, self-satisfied and arrogant.\nYou flourish in work where you can use your fiery enthusiasm and creativity.\nYou can be easily hurt.\nThough you know many people and love to mix, there is still a part of you which stands aloof and keeps you standing out from the crowd, you get along with them but you tend to follow the formalities when it comes to friendship.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Ruby\n";
 cout<<"New age stone: Topaz, Sardonyx \n";
 cout<<"Element: Fire\n";
 cout<<"Anatomy ruled: Heart, Upper back\n";
 cout<<"Flower: Marigold\n";
 cout<<"Your Tarot card: VIII Strength \n";}
else if(b==8&&a>=23||b==9&&a<=22)
{l=6;
 cout<<"You belong to the sixth house of the Zodiac circle, Virgo.\nYou are usually organized, thorough, humane and thoughtful.\nNavy blue and taupe are your lucky colours.\nPisces is your opposite sign.\nYou are least compatible with Aries and Aquarius.\nAnd most compatible with Taurus, Capricorn and Virgo.\nYou can be critical, particular, irritable and untidy.\nYou admire progressively intelligent people.\nYou are good at sizing up people.\nYour search for perfection can make you dissatisfied.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Sapphire\n";
 cout<<"New age stone: Peridot, Amazonite\n";
 cout<<"Element: Earth\n";
 cout<<"Anatomy ruled: Abdomen, Intestines\n";
 cout<<"Flower: Pancy\n";}
else if(b==9&&a>=23||b==10&&a<=22)
{l=7;
 cout<<"You belong to the seventh house of the Zodiac circle, Libra.\nYou are usually artistic, poised, objective and charming.\nYour lucky colours are blue and pink.\nAries is your opposite sign.\nYou are least compatible with Pisces and Taurus.\nYou are most compatible with Gemini, Libra and Aquarius.\nYou can be indecisive, thoughtless, self-absorbed and flirtatious.\nYour symbol, the Scales, represents balance and harmony.\nYour ability to be objective means you can get along with most people.\nYou rarely surrender yourself completely to another but are an expert in love matters.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Opal\n";
 cout<<"New age stone: Tourmaline, Kunzite\n";
 cout<<"Element: Air\n";
 cout<<"Anatomy ruled: Kidneys, Lower back, Appendix\n";
 cout<<"Flower: Rose\n";
 cout<<"Your Tarot card: XI Justice\n";}
else if(b==10&&a>=23||b==11&&a<=21)
{l=8;
 cout<<"You are a member of the eighth house of the Zodiac circle, Scorpio.\nYou are usually passionate, dynamic, sensual and probing.\nBlack and burgundy are your lucky colours.\nTaurus is your opposite sign.\nYou are least compatible with Aries and Gemini.\nYou are most compatible with Pisces, Cancer and Scorpio.\n You can be vindictive, moody, jealous and sadistic.\nYou need a job which taps all your resources to gain true satisfaction.\nOnce you attach yourself in love, its difficult for you to let go of it.\nYou are highly secretive by nature.\nBut you are exceptionally good at discovering secrets of other people.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Topaz\n";
 cout<<"New age stone: Obsidian, Amber\n";
 cout<<"Element: Water\n";
 cout<<"Anatomy ruled: Reproductive System\n";
 cout<<"Flower: Chrysanthemum\n";
 cout<<"Your Tarot card: XIII Death\n";}
else if(b==11&&a>=22||b==12&&a<=21)
{l=9;
 cout<<"You belong to the ninth house of the Zodiac circle, Sagittarius.\nYou are usually intellectual, enthusiastic, tolerant and optimistic.\nYour lucky colours are purple and royal blue.\nGemini is your opposite sign.\nYou are least compatible with Cancer and Taurus.\nYou are most compatible with Aries, Leo and Taurus.\nYou can be extravagant, excessive, hotheaded and a gambler.\nYour ruling planet symbolizes growth and wisdom.\nYou can be an excellent teacher.\nAlthough serious there is nothing you like more than fun and laughter when in company.\nThis makes you a great friend once others have come up to your very high standards.\nYour restlessness enables your to adapt to life's changing patterns.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Turquoise\n";
 cout<<"New age stone: Lapis lazuli, Azurite\n";
 cout<<"Element: Fire\n";
 cout<<"Anatomy ruled: Hips, thighs, sciatic nerve\n";
 cout<<"Flower: Narcissus\n";
 cout<<"Your Tarot card: XIV Temperance\n";}
else if(b==12&&a>=22||b==1&&a<=19)
{l=10;
 cout<<"You belong to the tenth house of the Zodiac circle, Capricorn.\nYou are usually careful, hardworking, disciplined and traditional.\nBlack and forest green colours can bring you luck.\nCancer is your opposite sign.\nYou are least compatible with Gemini and Leo.\nMost compatible with Taurus, Virgo and Capricorn.\nYou can be inflexible, apprehensive, perfectionist and a slave driver.\nIt can be hard for you to find a partner who shares your commitment.\nIt is difficult for you to show your feelings but this does not mean you do not have them.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Garnet\n";
 cout<<"New age stone: Peridot, Quartz\n";
 cout<<"Element: Earth\n";
 cout<<"Anatomy ruled: Skin, Skeleton, Knees\n";
 cout<<"Flower: Carnation\n";
 cout<<"Your Tarot card: XV The Devil\n";}
else if(b==1&&a>=20||b==2&&a<=18)
{l=11;
 cout<<"You belong to the eleventh house of the Zodiac circle, Aquarius.\nYou are usually independent, friendly, caring and inventive.\nBlue and violet are your lucky colours.\nLeo is your opposite sign.\nYou are least compatible with Cancer and Virgo.\nYou are most compatible with Gemini, Libra and Aquarius.\nYou can be tactless, rude, defiant and aloof.\nYou are always loyal to your friends and you treat everyone as your equal.\nYou respect the opinion of others and expect the same in return.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Amethyst\n";
 cout<<"New age stone: Aquamarine\n";
 cout<<"Element: Air\n";
 cout<<"Anatomy ruled: Ankles, Circulatory system\n";
 cout<<"Flower: Orchid\n";
 cout<<"Your Tarot card: XVII The Star\n";}
else if(b==2&&a>=19||b==3&&a<=20)
{l=12;
 cout<<"You belong to the twelfth house of the Zodiac circle, Pisces.\nYou are usually intuitive, trusting, loving and creative.\nViolet and sea green are your lucky colours.\nVirgo is your opposite sign.\nYou are least compatible with Leo and Libra.\nMost compatible with Scorpio, Cancer and Pisces.\nYou can be gullible, self-pitying, temperamental and dependent.\nYou can be torn between personal wants and a desire to help others.\nYour path to fulfillment is to use your abundant imagination.\nYou have an inclination to dream about your ideal lover rather than actively to go out and seek them.\n\n";
 cout<<"Other Information\n";
 cout<<"Birthstone: Aquamarine\n";
 cout<<"New age stone: Bloodstone\n";
 cout<<"Element: Water\n";
 cout<<"Anatomy ruled: Lymphatic system\n";
 cout<<"Flower: Water Lily\n";
 cout<<"Your Tarot card: XVIII The Moon\n";}
 cout<<"Want to view Numerological predictions(y or n)\n";
cin>>ch;
if(ch=='y'||ch=='Y')
numero(name,l);
else if(ch=='n'||ch=='N');
else
{cout<<"Invalid Choice\n";
delay(1500);
exit(0);}}
void lunar(int &x,int &y,int a,int b)
{int i=0;
if(a==2000)
  {if(b==1)
     {if(x==25&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}
   else if(b==2)
     {if(x==41&&y==12) i=1;
      else if((x==41||x==42)&&y==14) i=3;}
   else if(b==3)
     {if(x==1&&y==13) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==4)
     {if(x==9&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}
   else if(b==5)
     {if(x==25&&y==12) i=1;
      else if((x==25||x==26)&&y==14) i=3;}
   else if(b==6)
     {if(x==33&&y==12) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==7)
     {if((x==41&&y==12)||((x==1||x==2)&&y==17)) i=1;
      else if((x==49||x==50)&&y==14) i=3;}
   else if(b==8)
     {if((x==9||x==10)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==9)
     {if((x==17||x==18)&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==10)
     {if((x==33||x==34)&&y==14) i=3;
      else if((x==33||x==34)&&y==16) i=1;}
   else if(b==11)
     {if((x==41||x==42)&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==12)
     {if((x==1||x==2)&&y==14) i=3;
      else if((x==1||x==2)&&y==16) i=1;}}
else if(a==2001)
  {if(b==1)
     {if((x==9||x==10)&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==2)
     {if((x==25||x==26)&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==3)
     {if((x==33||x==34)&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==4)
     {if((x==49||x==50)&&y==13) i=3;
      else if((x==1||x==2)&&y==16) i=1;}
   else if(b==5)
     {if(x==1&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==6)
     {if(x==17&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==7)
     {if(x==25&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==8)
     {if(x==41&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==9)
     {if(x==49&&y==12) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==10)
     {if(x==9&&y==12) i=3;
      else if((x==9||x==10)&&y==14) i=1;}
   else if(b==11)
     {if((x==25&&y==12)||((x==33||x==34)&&y==16)) i=3;
      else if((x==25||x==26)&&y==14) i=1;}
   else if(b==12)
     {if((x==33||x==34)&&y==14) i=1;
      else if((x==49||x==50)&&y==16) i=3;}}
else if(a==2002)
  {if(b==1)
     {if((x==49||x==50)&&y==14) i=1;
      else if((x==1||x==2)&&y==16) i=3;}
   else if(b==2)
     {if((x==9||x==10)&&y==14) i=1;
      else if((x==17||x==18)&&y==16) i=3;}
   else if(b==3)
     {if((x==25||x==26)&&y==14) i=1;
      else if((x==25||x==26)&&y==16) i=3;}
   else if(b==4)
     {if((x==33||x==34)&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}
   else if(b==5)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==49||x==50)&&y==15) i=3;}
   else if(b==6)
     {if((x==1||x==2)&&y==14) i=1;
      else if((x==1||x==2)&&y==16) i=3;}
   else if(b==7)
     {if((x==17||x==18)&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==8)
     {if((x==25||x==26)&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==9)
     {if(x==41&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}
   else if(b==10)
     {if(x==49&&y==13) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==11)
     {if(x==1&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==12)
     {if(x==17&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}}
else if(a==2003)
  {if(b==1)
     {if(x==25&&y==12) i=1;
      else if((x==41||x==42)&&y==14) i=3;}
   else if(b==2)
     {if(x==33&&y==12) i=1;
      else if((x==41||x==42)&&y==14) i=3;}
   else if(b==3)
     {if(x==1&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}
   else if(b==4)
     {if(x==9&&y==12) i=1;
      else if((x==17||x==18)&&y==14) i=3;}
   else if(b==5)
     {if((x==25&&y==12)||((x==41||x==42)&&y==16)) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==6)
     {if((x==41||x==42)&&y==14) i=3;
      else if((x==49||x==50)&&y==16) i=1;}
   else if(b==7)
     {if((x==49||x==50)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==8)
     {if((x==9||x==10)&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==9)
     {if((x==17||x==18)&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==10)
     {if((x==33||x==34)&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==11)
     {if((x==49||x==50)&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==12)
     {if(x==1&&y==13) i=3;
      else if((x==9||x==10)&&y==15) i=1;}}
else if(a==2004)
  {if(b==1)
     {if(x==17&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==2)
     {if(x==33&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==3)
     {if(x==41&&y==12) i=3;
      else if((x==41||x==42)&&y==14) i=1;}
   else if(b==4)
     {if(x==1&&y==13) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==5)
     {if(x==9&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==6)
     {if(x==25&&y==12) i=3;
      else if((x==25||x==26)&&y==14) i=1;}
   else if(b==7)
     {if((x==33&&y==12)||((x==41||x==42)&&y==16)) i=3;
      else if((x==41||x==42)&&y==14) i=1;}
   else if(b==8)
     {if((x==49||x==50)&&y==14) i=1;
      else if((x==49||x==50)&&y==16) i=3;}
   else if(b==9)
     {if((x==9||x==10)&&y==14) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==10)
     {if((x==25||x==26)&&y==14) i=1;
      else if((x==25||x==26)&&y==16) i=3;}
   else if(b==11)
     {if((x==33||x==34)&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}
   else if(b==12)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==49||x==50)&&y==15) i=3;}}
else if(a==2005)
  {if(b==1)
     {if((x==1||x==2)&&y==14) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==2)
     {if((x==9||x==10)&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==3)
     {if((x==25||x==26)&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}
   else if(b==4)
     {if((x==33||x==34)&&y==14) i=1;
      else if((x==49||x==50)&&y==16) i=3;}
   else if(b==5)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==1||x==2)&&y==16) i=3;}
   else if(b==6)
     {if(x==1&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==7)
     {if(x==17&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==8)
     {if(x==33&&y==12) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==9)
     {if(x==41&&y==12) i=1;
      else if((x==49||x==50)&&y==14) i=3;}
   else if(b==10)
     {if(x==1&&y==13) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==11)
     {if(x==17&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==12)
     {if((x==25&&y==12)||((x==41||x==42)&&y==16)) i=1;
      else if((x==25||x==26)&&y==14) i=3;}}
else if(a==2006)
  {if(b==1)
     {if((x==41||x==42)&&y==14) i=3;
      else if((x==49||x==50)&&y==16) i=1;}
   else if(b==2)
     {if((x==1||x==2)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==3)
     {if((x==9||x==10)&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==4)
     {if((x==25||x==26)&&y==14) i=3;
      else if((x==25||x==26)&&y==16) i=1;}
   else if(b==5)
     {if((x==41||x==42)&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==6)
     {if((x==49||x==50)&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==7)
     {if((x==9||x==10)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==8)
     {if(x==17&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==9)
     {if(x==25&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==10)
     {if(x==41&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==11)
     {if(x==49&&y==13) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==12)
     {if(x==9&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}}
else if(a==2007)
  {if(b==1)
     {if(x==17&&y==12) i=3;
      else if((x==33||x==34)&&y==14) i=1;}
   else if(b==2)
     {if(x==33&&y==12) i=3;
      else if((x==41||x==42)&&y==14) i=1;}
   else if(b==3)
     {if(x==41&&y==12) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==4)
     {if(x==1&&y==13) i=3;
      else if((x==9||x==10)&&y==15) i=1;}
   else if(b==5)
     {if(x==17&&y==12) i=3;
      else if((x==17||x==18)&&y==14) i=1;}
   else if(b==6)
     {if((x==33&&y==12)||((x==41||x==42)&&y==16)) i=3;
      else if((x==33||x==34)&&y==14) i=1;}
   else if(b==7)
     {if((x==41||x==42)&&y==14) i=1;
      else if((x==1||x==2)&&y==17) i=3;}
   else if(b==8)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==9)
     {if((x==9||x==10)&&y==14) i=1;
      else if((x==17||x==18)&&y==16) i=3;}
   else if(b==10)
     {if((x==25||x==26)&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}
   else if(b==11)
     {if(x==33&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}
   else if(b==12)
     {if(x==49&&y==13) i=1;
      else if((x==1||x==2)&&y==15) i=3;}}
else if(a==2008)
  {if(b==1)
     {if(x==9&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}
   else if(b==2)
     {if(x==25&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==3)
     {if(x==33&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}
   else if(b==4)
     {if(x==49&&y==12) i=1;
      else if((x==49||x==50)&&y==14) i=3;}
   else if(b==5)
     {if(x==1&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}
   else if(b==6)
     {if(x==9&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==7)
     {if(x==25&&y==12) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==8)
     {if((x==33&&y==12)||((x==41||x==42)&&y==16)) i=1;
      else if((x==41||x==42)&&y==14) i=3;}
   else if(b==9)
     {if((x==1||x==2)&&y==14) i=3;
      else if((x==1||x==2)&&y==16) i=1;}
   else if(b==10)
     {if((x==9||x==10)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==11)
     {if((x==25||x==26)&&y==14) i=3;
      else if((x==25||x==26)&&y==16) i=1;}
   else if(b==12)
     {if((x==33||x==34)&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}}
else if(a==2009)
  {if(b==1)
     {if((x==49||x==50)&&y==13) i=3;
      else if((x==1||x==2)&&y==16) i=1;}
   else if(b==2)
     {if(x==1&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==3)
     {if((x==17||x==18)&&y==14) i=3;
      else if((x==25||x==26)&&y==16) i=1;}
   else if(b==4)
     {if(x==25&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==5)
     {if(x==41&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==6)
     {if(x==49&&y==12) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==7)
     {if(x==9&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==8)
     {if(x==25&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==9)
     {if(x==33&&y==12) i=3;
      else if((x==33||x==34)&&y==14) i=1;}
   else if(b==10)
     {if(x==49&&y==12) i=3;
      else if((x==49||x==50)&&y==14) i=1;}
   else if(b==11)
     {if(x==1&&y==13) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==12)
     {if((x==17&&y==12)||((x==25||x==26)&&y==16)) i=3;
      else if((x==17||x==18)&&y==14) i=1;}}
else if(a==2010)
  {if(b==1)
     {if((x==33||x==34)&&y==14) i=1;
      else if((x==41||x==42)&&y==16) i=3;}
   else if(b==2)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==49||x==50)&&y==15) i=3;}
   else if(b==3)
     {if((x==1||x==2)&&y==14) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==4)
     {if((x==17||x==18)&&y==14) i=1;
      else if((x==17||x==18)&&y==16) i=3;}
   else if(b==5)
     {if((x==33||x==34)&&y==14) i=1;
      else if((x==25||x==26)&&y==16) i=3;}
   else if(b==6)
     {if((x==41||x==42)&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}
   else if(b==7)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==1||x==12)&&y==16) i=3;}
   else if(b==8)
     {if((x==9||x==10)&&y==14) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==9)
     {if(x==17&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==10)
     {if(x==25&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}
   else if(b==11)
     {if(x==41&&y==12) i=1;
      else if((x==49||x==50)&&y==14) i=3;}
   else if(b==12)
     {if(x==49&&y==12) i=1;
      else if((x==9||x==10)&&y==15) i=3;}}
else if(a==2011)
  {if(b==1)
     {if(x==9&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==2)
     {if(x==25&&y==12) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==3)
     {if(x==33&&y==12) i=1;
      else if((x==41||x==42)&&y==14) i=3;}
   else if(b==4)
     {if(x==49&&y==12) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==5)
     {if(x==9&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}
   else if(b==6)
     {if(x==17&&y==12) i=1;
      else if((x==17||x==18)&&y==14) i=3;}
   else if(b==7)
     {if((x==33&&y==12)||((x==41||x==42)&&y==16)) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==8)
     {if((x==41||x==42)&&y==13) i=3;
      else if((x==1||x==2)&&y==16) i=1;}
   else if(b==9)
     {if((x==1||x==2)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==10)
     {if((x==17||x==18)&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==11)
     {if((x==25||x==26)&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==12)
     {if((x==41||x==42)&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}}
else if(a==2012)
  {if(b==1)
     {if(x==1&&y==14) i=3;
      else if((x==1||x==2)&&y==16) i=1;}
   else if(b==2)
     {if(x==9&&y==13) i=3;
      else if((x==9||x==10)&&y==15) i=1;}
   else if(b==3)
     {if(x==25&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==4)
     {if(x==33&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==5)
     {if(x==49&&y==12) i=3;
      else if((x==49||x==50)&&y==14) i=1;}
   else if(b==6)
     {if(x==1&&y==13) i=3;
      else if((x==9||x==10)&&y==15) i=1;}
   else if(b==7)
     {if(x==9&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==8)
     {if((x==25&&y==12)||((x==33||x==34)&&y==16)) i=3;
      else if((x==33||x==34)&&y==14) i=1;}
   else if(b==9)
     {if((x==49||x==50)&&y==14) i=1;
      else if((x==49||x==50)&&y==16) i=3;}
   else if(b==10)
     {if((x==1||x==2)&&y==14) i=1;
      else if((x==1||x==2)&&y==16) i=3;}
   else if(b==11)
     {if((x==9||x==10)&&y==14) i=1;
      else if((x==17||x==18)&&y==16) i=3;}
   else if(b==12)
     {if((x==25||x==26)&&y==14) i=1;
      else if((x==33||x==34)&&y==16) i=3;}}
else if(a==2013)
  {if(b==1)
     {if((x==33||x==34)&&y==13) i=1;
      else if((x==49||x==50)&&y==15) i=3;}
   else if(b==2)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==1||x==12)&&y==16) i=3;}
   else if(b==3)
     {if((x==1||x==2)&&y==14) i=1;
      else if((x==17||x==18)&&y==16) i=3;}
   else if(b==4)
     {if((x==17||x==18)&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==5)
     {if((x==33||x==34)&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}
   else if(b==6)
     {if(x==41&&y==13) i=1;
      else if((x==49||x==50)&&y==15) i=3;}
   else if(b==7)
     {if(x==1&&y==13) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==8)
     {if(x==9&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==9)
     {if(x==25&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==10)
     {if(x==41&&y==12) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==11)
     {if(x==49&&y==12) i=1;
      else if((x==49||x==50)&&y==14) i=3;}
   else if(b==12)
     {if(x==9&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}}
else if(a==2014)
  {if(b==1)
     {if((x==17&&y==12)||((x==25||x==26)&&y==16)) i=1;
      else if((x==25||x==26)&&y==14) i=3;}
   else if(b==2)
     {if(x==33&&y==14) i=3;}
   else if(b==3)
     {if((x==41&&y==12)||((x==49||x==50)&&y==16)) i=1;
      else if((x==49||x==50)&&y==14) i=3;}
   else if(b==4)
     {if(x==9&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==5)
     {if((x==17||x==18)&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==6)
     {if((x==33||x==34)&&y==14) i=3;
      else if((x==33||x==34)&&y==16) i=1;}
   else if(b==7)
     {if((x==41||x==42)&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==8)
     {if((x==49||x==50)&&y==13) i=3;
      else if((x==1||x==2)&&y==16) i=1;}
   else if(b==9)
     {if(x==9&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==10)
     {if(x==17&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==11)
     {if(x==25&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==12)
     {if(x==41&&y==12) i=3;
      else if((x==1||x==2)&&y==15) i=1;}}
else if(a==2015)
  {if(b==1)
     {if(x==1&&y==13) i=3;
      else if((x==9||x==10)&&y==15) i=1;}
   else if(b==2)
     {if(x==9&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==3)
     {if(x==25&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==4)
     {if(x==41&&y==12) i=3;
      else if((x==41||x==42)&&y==14) i=1;}
   else if(b==5)
     {if(x==1&&y==13) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==6)
     {if(x==9&&y==12) i=3;
      else if((x==9||x==10)&&y==14) i=1;}
   else if(b==7)
     {if((x==25&&y==12)||((x==33||x==34)&&y==16)) i=3;
      else if((x==25||x==26)&&y==14) i=1;}
   else if(b==8)
     {if((x==33||x==34)&&y==14) i=1;
      else if((x==41||x==42)&&y==16) i=3;}
   else if(b==9)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==1||x==2)&&y==16) i=3;}
   else if(b==10)
     {if((x==9||x==10)&&y==14) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==11)
     {if((x==17||x==18)&&y==14) i=1;
      else if((x==17||x==18)&&y==16) i=3;}
   else if(b==12)
     {if((x==33||x==34)&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}}
else if(a==2016)
  {if(b==1)
     {if((x==49||x==50)&&y==13) i=1;
      else if((x==49||x==50)&&y==15) i=3;}
   else if(b==2)
     {if(x==1&&y==13) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==3)
     {if(x==17&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==4)
     {if(x==25&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}
   else if(b==5)
     {if(x==33&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}
   else if(b==6)
     {if(x==49&&y==12) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==7)
     {if(x==1&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}
   else if(b==8)
     {if(x==9&&y==12) i=1;
      else if((x==25||x==26)&&y==14) i=3;}
   else if(b==9)
     {if(x==25&&y==12) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==10)
     {if((x==41&&y==12)||((x==49||x==50)&&y==16)) i=1;
      else if((x==49||x==50)&&y==14) i=3;}
   else if(b==11)
     {if((x==1||x==2)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==12)
     {if((x==17||x==18)&&y==14) i=3;
      else if((x==25||x==26)&&y==16) i=1;}}
else if(a==2017)
  {if(b==1)
     {if((x==25||x==26)&&y==14) i=3;
      else if((x==41||x==42)&&y==16) i=1;}
   else if(b==2)
     {if((x==41||x==42)&&y==13) i=3;
      else if((x==49||x==52)&&y==15) i=1;}
   else if(b==3)
     {if((x==49||x==50)&&y==13) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==4)
     {if((x==9||x==10)&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==5)
     {if((x==17||x==18)&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==6)
     {if(x==33&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==7)
     {if(x==49&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==8)
     {if(x==1&&y==13) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==9)
     {if(x==17&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==10)
     {if(x==25&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==11)
     {if(x==41&&y==12) i=3;
      else if((x==41||x==42)&&y==14) i=1;}
   else if(b==12)
     {if(x==49&&y==12) i=3;
      else if((x==1||x==2)&&y==15) i=1;}}
else if(a==2018)
  {if(b==1)
     {if((x==9&&y==12)||((x==17||x==18)&&y==16)) i=3;
      else if((x==17||x==18)&&y==14) i=1;}
   else if(b==2)
     {if((x==25||x==26)&&y==14) i=1;}
   else if(b==3)
     {if((x==33&&y==12)||((x==41||x==42)&&y==16)) i=3;
      else if((x==41||x==42)&&y==16) i=1;}
   else if(b==4)
     {if((x==1||x==2)&&y==15) i=1;
      else if((x==1||x==2)&&y==17) i=3;}
   else if(b==5)
     {if((x==9||x==10)&&y==14) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==6)
     {if((x==17||x==18)&&y==14) i=1;
      else if((x==25||x==26)&&y==16) i=3;}
   else if(b==7)
     {if((x==33||x==34)&&y==14) i=1;
      else if((x==33||x==34)&&y==16) i=3;}
   else if(b==8)
     {if((x==41||x==42)&&y==13) i=1;
      else if((x==49||x==50)&&y==15) i=3;}
   else if(b==9)
     {if(x==49&&y==13) i=1;
      else if((x==9||x==10)&&y==16) i=3;}
   else if(b==10)
     {if(x==9&&y==13) i=1;
      else if((x==17||x==18)&&y==15) i=3;}
   else if(b==11)
     {if(x==17&&y==13) i=1;
      else if((x==33||x==34)&&y==15) i=3;}
   else if(b==12)
     {if(x==33&&y==13) i=1;
      else if((x==41||x==42)&&y==15) i=3;}}
else if(a==2019)
  {if(b==1)
     {if(x==49&&y==12) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==2)
     {if(x==1&&y==13) i=1;
      else if((x==9||x==10)&&y==15) i=3;}
   else if(b==3)
     {if(x==17&&y==13) i=1;
      else if((x==25||x==26)&&y==15) i=3;}
   else if(b==4)
     {if(x==33&&y==12) i=1;
      else if((x==33||x==34)&&y==14) i=3;}
   else if(b==5)
     {if(x==41&&y==12) i=1;
      else if((x==41||x==42)&&y==14) i=3;}
   else if(b==6)
     {if(x==1&&y==13) i=1;
      else if((x==1||x==2)&&y==15) i=3;}
   else if(b==7)
     {if(x==9&&y==12) i=1;
      else if((x==9||x==10)&&y==14) i=3;}
   else if(b==8)
     {if((x==25&&y==12)||((x==33||x==34)&&y==16)) i=1;
      else if((x==25||x==26)&&y==14) i=3;}
   else if(b==9)
     {if((x==41||x==42)&&y==14) i=3;
      else if((x==41||x==42)&&y==16) i=1;}
   else if(b==10)
     {if((x==49||x==50)&&y==13) i=3;
      else if((x==1||x==2)&&y==16) i=1;}
   else if(b==11)
     {if((x==9||x==10)&&y==14) i=3;
      else if((x==9||x==10)&&y==16) i=1;}
   else if(b==12)
     {if((x==25||x==26)&&y==14) i=3;
      else if((x==25||x==26)&&y==16) i=1;}}
/*else if(a==2020)
  {if(b==1)
     {if((x==33||x==34)&&y==13) i=3;
      else if((x==33||x==34)&&y==15) i=1;}
   else if(b==2)
     {if(x==1&&y==14) i=3;
      else if((x==17||x==18)&&y==16) i=1;}
   else if(b==3)
     {if((x==17||x==18)&&y==14) i=3;
      else if((x==25||x==26)&&y==16) i=1;}
   else if(b==4)
     {if(x==25&&y==13) i=3;
      else if((x==41||x==42)&&y==15) i=1;}
   else if(b==5)
     {if(x==41&&y==13) i=3;
      else if((x==49||x==50)&&y==15) i=1;}
   else if(b==6)
     {if(x==49&&y==12) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==7)
     {if(x==9&&y==13) i=3;
      else if((x==17||x==18)&&y==15) i=1;}
   else if(b==8)
     {if(x==25&&y==13) i=3;
      else if((x==25||x==26)&&y==15) i=1;}
   else if(b==9)
     {if(x==33&&y==12) i=3;
      else if((x==33||x==34)&&y==14) i=1;}
   else if(b==10)
     {if(x==49&&y==12) i=3;
      else if((x==49||x==50)&&y==14) i=1;}
   else if(b==11)
     {if(x==1&&y==13) i=3;
      else if((x==1||x==2)&&y==15) i=1;}
   else if(b==12)
     {if((x==17&&y==12)||((x==25||x==26)&&y==16)) i=3;
      else if((x==17||x==18)&&y==14) i=1;}}*/
if(i==0)
{gotoxy(1,22);
 cout<<"          ";
 x=1;
 y=1;
 gotoxy(1,1);
}
else
{gotoxy(1,22);
 switch(i)
 {case 1:
  cout<<"New Moon ";
  break;
  case 3:
  cout<<"Full Moon";
  break;
 }}}
void eclipse()
{clrscr();
cout<<"\t\t\t\tSolar Eclipse\n\n"
    <<"Date\t\tEclipse Type\tDuration(min:sec)\tPlace\n\n"
    <<"2000 Feb 5\tPartial\t\t3:42\t\t  Asia\n"
    <<"2000 July 31\tPartial\t\t4:17\t\t  North Caspia\n"
    <<"2000 July 1\tPartial\t\t29:38\t\t  Alaska\n"
    <<"2000 Dec 25\tAnnular\t\t1:05\t\t  Southern Antarctic Region\n"
    <<"2001 Jun 21\tTotal\t\t4:57\t\t  South America, Africa\n"
    <<"2001 Dec 14\tAnnular\t\t3:53\t\t  North & South America\n"
    <<"2002 Jun 10\tAnnular\t\t0:23\t\t  Asia, Australia, N. America\n"
    <<"2002 Dec 04\tTotal\t\t2:04\t\t  Africa, Antarctica, Australia\n"
    <<"2003 May 31\tAnnular\t\t3:37\t\t  Europe, Asia, North America\n"
    <<"2003 Nov 23\tTotal\t\t1:57\t\t  Australia, Antarctica\n"
    <<"2004 Apr 19\tPartial\t\t7:37\t\t  Antarctica, Africa\n"
    <<"2004 Oct 14\tPartial\t\t9:28\t\t  Asia, Hawaii, Alaska\n"
    <<"2005 Apr 08\tHybrid\t\t0:42\t\t  New Zealand, North America\n"
    <<"2005 Oct 03\tAnnular\t\t4:32\t\t  Europe, Africa, Asia\n"
    <<"2006 Mar 29\tTotal\t\t4:07\t\t  Africa, Europe, Asia\n";
cout<<"\nFor Next Page, Press Any Key...";
getch();
clrscr();
cout<<"2006 Sep 22\tAnnular\t\t7:09\t\tAfrica, Antarctica\n"
    <<"2007 Mar 19\tPartial\t\t5:01\t\tAsia, Alaska\n"
    <<"2007 Sep 11\tPartial\t\t7:51\t\tSouth America, Antarctica\n"
    <<"2008 Feb 07\tAnnular\t\t2:12\t\tAntarctica, Australia, N.Z.\n"
    <<"2008 Aug 01\tTotal\t\t2:27\t\tNorth America, Europe, Asia\n"
    <<"2009 Jan 26\tAnnular\t\t7:54\t\tAfrica, Antarctica, Asia\n"
    <<"2009 Jul 22\tTotal\t\t6:39\t\tAsia, Pacific Ocean, Hawaii\n"
    <<"2010 Jan 15\tAnnular\t\t11:08\t\tAfrica, Asia\n"
    <<"2010 Jul 11\tTotal\t\t5:20\t\tSouth America\n"
    <<"2011 Jan 04\tPartial\t\t63:24\t\tEurope, Africa, Asia\n"
    <<"2011 Jun 01\tPartial\t\t8:58\t\tAsia, North America, Iceland\n"
    <<"2011 Jul 01\tPartial\t\t2:16\t\tIndian Ocean\n"
    <<"2011 Nov 25\tPartial\t\t6:03\t\tAfrica, Antarctica, Tasmania\n"
    <<"2012 May 20\tAnnular\t\t5:46\t\tAsia, Pacific, North America\n"
    <<"2012 Nov 13\tTotal\t\t4:02\t\tAustralia, Pacific, S. America\n"
    <<"2013 May 10\tAnnular\t\t6:03\t\tAustralia, Pacific\n"
    <<"2013 Nov 03\tHybrid\t\t1:40\t\tAmerica, Europe, Africa\n"
    <<"2014 Apr 29\tAnnular\t\t3:51\t\tIndia, Australia, Antarctica\n"
    <<"2014 Oct 23\tPartial\t\t9:23\t\tPacific, North America\n"
    <<"2015 Mar 20\tTotal\t\t2:47\t\tIceland, Europe, Africa, Asia\n"
    <<"2015 Sep 13\tPartial\t\t7:01\t\tAfrica, India, Antarctica\n";
cout<<"\nPress Any Key To Move To The Next Page...";
getch();
clrscr();
cout<<"2016 Mar 09\tTotal\t\t4:09\t\tAsia, Australia, Pacific\n"
    <<"2016 Sep 01\tAnnular\t\t3:06\t\tAfrica, Indian Ocean\n"
    <<"2017 Feb 26\tAnnular\t\t0:44\t\tAtlantic, Africa, Antarctica\n"
    <<"2017 Aug 21\tTotal\t\t2:40\t\tNorth & South America\n"
    <<"2018 Feb 15\tPartial\t\t1:12\t\tAntarctica, South America\n"
    <<"2018 Jul 13\tPartial\t\t0:53\t\tAustralia\n"
    <<"2018 Aug 11\tPartial\t\t7:39\t\tEurope, Asia\n"
    <<"2019 Jan 06\tPartial\t\t3:08\t\tAsia, Pacific\n"
    <<"2019 Jul 02\tTotal\t\t4:33\t\tPacific, South America\n"
    <<"2019 Dec 26\tAnnular\t\t3:40\t\tAsia, Australia\n"
    <<"2020 Jun 21\tAnnular\t\t0:38\t\tAfrica, Europe, Asia\n"
    <<"2020 Dec 14\tTotal\t\t2:10\t\tPacific, S. America, Antarctica\n";
getch();}
void numero(char name[30],int l)
{clrscr();
cout<<"\t\t\t\tNumerology\n\n";
puts(name);
cout<<"\nYour planet associated to your birth date is ";
switch(l)
{case 1:
 cout<<"Mars.\nYour lucky numbers are 12, 16 & 22.\n"
     <<"The dates 15 & 24 of any month will prove to be lucky for you.";
 break;
 case 2:
 cout<<"Venus.\nYour lucky numbers are 13, 17 & 23.\n"
     <<"The dates 11 & 20 of any month will prove to be lucky for you.";
 break;
 case 3:
 cout<<"Mercury.\nYour lucky numbers are 14, 18 & 24.\n"
     <<"The dates 7 & 16 of any month will prove to be lucky for you.";
 break;
 case 4:
 cout<<"Moon.\nYour lucky numbers are 15, 19 & 25.\n"
     <<"The dates 3 & 12 of any month will prove to be lucky for you.";
 break;
 case 5:
 cout<<"Sun.\nYour lucky numbers are 16, 20 & 26.\n"
     <<"The dates 21 & 28 of any month will prove to be lucky for you.";
 break;
 case 6:
 cout<<"Earth.\nYour lucky numbers are 17, 21 & 27.\n"
     <<"The dates 1 & 25 of any month will prove to be lucky for you.";
 break;
 case 7:
 cout<<"Venus.\nYour lucky numbers are 18, 22 & 28.\n"
     <<"The dates 5 & 14 of any month will prove to be lucky for you.";
 break;
 case 8:
 cout<<"Pluto.\nYour lucky numbers are 19, 23 & 29.\n"
     <<"The dates 17 & 22 of any month will prove to be lucky for you.";
 break;
 case 9:
 cout<<"Jupiter.\nYour lucky numbers are 20, 24 & 32.\n"
     <<"The dates 2 & 4 of any month will prove to be lucky for you.";
 break;
 case 10:
 cout<<"Saturn.\nYour lucky numbers are 42, 46 & 88.\n"
     <<"The dates 11 & 29 of any month will prove to be lucky for you.";
 break;
 case 11:
 cout<<"Uranus.\nYour lucky numbers are 31, 58 & 65.\n"
     <<"The dates 17 & 18 of any month will prove to be lucky for you.";
 break;
 case 12:
 cout<<"Neptune.\nYour lucky numbers are 1, 21 & 71.\n"
     <<"The dates 3 & 25 of any month will prove to be lucky for you.";
 }
getch();}
void holiday()
{clrscr();
cout<<"\t\t\t\tList Of Common Holidays\n\n"
    <<"13 Jan   : Lohri\n"
    <<"14 Jan   : Makar Sankranti\n"
    <<"26 Jan   : Republic Day\n"
    <<"13 April : Baisakhi\n"
    <<"22 April : Good Friday\n"
    <<"15 Aug   : Independence Day\n"
    <<" 2 Oct   : Gandhi Jayanti\n"
    <<"10 Nov   : Guru Nanak Jayanti\n"
    <<"14 Nov   : Children's Day\n"
    <<"25 Dec   : Christmas Day\n";
getch();}
