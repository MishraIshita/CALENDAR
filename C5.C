#include<stdio.h>
#include<conio.h>
#include"year1.h"
#include"year2.h"
#include"year3.h"
#include"year4.h"
#include"year5.h"
void leap();
void main()
{int i,date,mon,yr,ch,l;
int choice;
clrscr();
do{printf("\n\n");
textcolor(14);
for(i=0;i<10;i++)
cprintf("________" );
textcolor(3);
printf("\n\n\n\n\n\n\t\t\t");
cprintf(" 1-Day of the date");
printf("\n\n\t\t\t");
cprintf(" 2-Number of particular days in  month");
printf("\n\n\t\t\t");
cprintf(" 3-Leap Year check");
printf("\n\n\t\t\t");
cprintf(" 4-Calendar of a month");
printf("\n\n\t\t\t");
cprintf(" 5-EXIT ");
printf("\n\n\t\t\t");
textcolor(5+BLINK);
cprintf("ENTER  YOUR  CHOICE  ");
scanf("%d",&choice);
printf("\n\n");
textcolor(14);
for(i=0;i<10;i++)
cprintf("________" );
printf("\n\n");
switch(choice)
{case 1:
	textcolor(2);
	cprintf("Enter DATE , MONTH & YEAR  ");
	scanf("%d%d%d",&date,&mon,&yr);
	{if(yr==2017)
	      {l=day1(date,mon);
	      pr1(l);
	      }
	 if(yr==2018)
	      l=day2(date,mon);
	 if(yr==2019)
	      l=day3(date,mon);
	 if(yr==2020)
	      l=day4(date,mon);
	if(yr==2021)
	      l=day5(date,mon);
	}


	break;
case 2:
       textcolor(2);
       cprintf("ENTER  MONTH & YEAR  ");
       scanf("%d%d",&mon,&yr);
	{if(yr==2017)
	       aday1(mon);
	 if(yr==2018)
	       aday2(mon);
	 if(yr==2019)
	       aday3(mon);
	 if(yr==2020)
	       aday4(mon);
	 if(yr==2021)
	       aday5(mon);
	}

       break;
case 3:
       leap();
       break;

case 4:
       textcolor(9);
       printf("\n\n");
       cprintf("Enter the MONTH NUMBER & YEAR ");
       scanf("%d%d",&mon,&yr);
       printf("\n\n");
	{if(yr==2017)
	    cmon1(mon);
	 if(yr==2018)
	    cmon2(mon);
	 if(yr==2019)
	    cmon3(mon);
	 if(yr==2020)
	    cmon4(mon);
	 if(yr==2021)
	    cmon5(mon);
	}
       break;
case 5:
       exit(0);
default:
      printf("Invalid Choice");
}
}while(1);

}
void leap()
{int yr;
textcolor(2);
cprintf("Enter any YEAR  ");
textcolor(13);
scanf("%d",&yr);
printf("\n\n\t\t\t");
if(yr%4==0)
 {if(yr%100==0)
    {if(yr%400==0)
       cprintf("%d is LEAP year",yr);
    else
       cprintf("%d is NOT A LEAP year",yr);
    }
  cprintf("%d is LEAP year",yr);

}
else
cprintf("%d is NOT A LEAP year",yr);
}
