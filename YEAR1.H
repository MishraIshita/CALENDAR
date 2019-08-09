int day1(int date,int mon)
{int i,ch,s=0;
for(i=1;i<mon;i++)
{if(i<8)
{if(i%2!=0)
s=s+31;
else
{if(i==2)
s=s+28;
else
s=s+30;
}
}
else
{if(i%2==0)
s=s+31;
else
s=s+30;
}
}
s=s+date;
ch=s%7;

return ch;
}
void pr1(int ch )
{printf("\n\n\t\tTHE DAY IS  :  ");
	textcolor(12);

switch(ch)
{case 1:
	cprintf("SUNDAY");
	break;
case 2:
	cprintf("MONDAY");
	break;
case 3:
	cprintf("TUESDAY");
	break;
case 4:
	cprintf("WEDNESDAY");
	break;
case 5:
	cprintf("THUSDAY");
	break;
case 6:
	cprintf("FRIDAY");
	break;
case 0:
	cprintf("SATURDAY");
	break;

}
}
void aday1(int mon)
{int m,i,ch,s=0,j,a[7]={0},k=1;
i=mon;
if(i<8)
{if(i%2!=0)
m=31;
else
{if(i==2)
m=28;
else
m=30;
}
}
else
{if(i%2==0)
m=31;
else
m=30;
}
for(j=0;j<m;j++)
 {for(i=1;i<mon;i++)
  {if(i<8)
   {if(i%2!=0)
      s=s+31;
    else
     {if(i==2)
       s=s+28;
      else
       s=s+30;
     }
   }
  else
   {if(i%2==0)
     s=s+31;
   else
     s=s+30;
   }
 }
s=s+k;
ch=s%7;
switch(ch)
{case 1:
	a[0]++;
	break;
case 2:
	a[1]++;
	break;
case 3:
	a[2]++;
	break;
case 4:
	 a[3]++;
	 break;
case 5:
	a[4]++;
	break;
case 6:
       a[5]++;
	break;
case 0:
       a[6]++;
       break;

}
s=0;
k++;
}
printf("\n\n");
textcolor(14);
for(i=0;i<10;i++)
cprintf("________");
printf("\n\n\t\t");
textcolor(14);

cprintf("S    M    T    W    T    F    S");
printf("\n\n\t\t");
for(i=0;i<7;i++)
printf("%d    ",a[i]);
}
void cmon1(int mon)
{int l,i,j,a[]={31,28,31,30,31,30,31,31,30,31,30,31};
j=mon-1;


textcolor(14);
for(i=0;i<10;i++)
cprintf("________" );
printf("\n\n\n\n\n");
textcolor(6);

cprintf("S    M    T    W    T    F    S");

printf("\n");
textcolor(11);
for(i=0;i<4;i++)
cprintf("________" );
printf("\n");
l=day1(1,mon);
if(l==0)
{for(i=0;i<=4;i++)
printf("      ");
}
else
{for(i=l;i>0;i--)
printf("    ");
}
for(i=1;i<=a[j];i++)
{if(l%7==1)
{printf("\n");
l=1;
}


{if(i<10)
printf("%d    ",i) ;
 else
printf("%d   ",i);
}
l++;




}
}