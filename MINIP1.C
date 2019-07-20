#include<stdio.h>
int st[3],top=-1;
void push(int n)
{
 st[++top]=n;
}
int pop()
{
 int item=st[top];
 top-=1;
 return item;
}
int length()
{
 int ch2,ch3,c=0;
 double ip,op;
 ln1:printf("\nSelect Input Unit:\n");
 printf("1.metre\n2.centimetre\n3.foot\n4.inch\n");
 printf("5.kilometre\n6.mile\n7.yard\n8.millimetre\n");
 printf("9.Change category\n10.Exit\n");
 scanf("%d",&ch2);
 if(ch2>0 && ch2<=8)
  goto ln2;
 else if(ch2==9 || ch2==10)
 {
  switch(ch2)
  {
   case 9:c+=1;
	  return c;
   case 10:exit(0);
  }
 }
 else
 {
  printf("\nInvalid input selection");
  goto ln1;
 }
 ln2:printf("\nSelect Output Unit:\n");
 printf("1.metre\n2.centimetre\n3.foot\n4.inch\n");
 printf("5.kilometre\n6.mile\n7.yard\n8.millimetre\n");
 printf("9.Go back\n10.Change category11.Exit\n");
 scanf("%d",&ch3);
 if(ch3>=1 && ch3<=8)
  goto ln3;
 else if(ch3>=9 && ch3<=11)
 {
  switch(ch3)
  {
   case 9:goto ln1;
   case 10:c+=1;
	   return c;
   case 11:exit(0);
  }
 }
 else
 {
  printf("\ninvalid output selection");
  goto ln2;
 }
 ln3:push(ch3);
 push(ch2);
 printf("\nEnter input value\n");
 scanf("%lf",&ip);
 switch(pop())
 {
  case 1:switch(pop())
	 {
	  case 1:printf("\n%lf metre(s)=%lf metre(s)\n",ip,ip);
		 break;
	  case 2:op=ip*100.0;
		 printf("\n%lf metre(s)=%lf centimetre(s)\n",ip,op);
		 break;
	  case 3:op=ip*3.281;
		 printf("\n%lf metre(s)=%lf feet\n",ip,op);
		 break;
	  case 4:op=ip*39.37;
		 printf("\n%lf metre(s)=%lf inch(s)\n",ip,op);
		 break;
	  case 5:op=ip/1000.0;
		 printf("\n%lf metre(s)=%lf kilometre(s)\n",ip,op);
		 break;
	  case 6:op=ip/1609.0;
		 printf("\n%lf metre(s)=%lf mile(s)\n",ip,op);
		 break;
	  case 7:op=ip/0.9144;
		 printf("\n%lf metre(s)=%lf yards(s)\n",ip,op);
		 break;
	  case 8:op=ip*1000.0;
		 printf("\n%lf metre(s)=%lf millimetre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 2:switch(pop())
	 {
	  case 1:op=ip/100.0;
		 printf("\n%lf centimetre(s)=%lf metre(s)\n",ip,op);
		 break;
	  case 2:printf("\n%lf centimetre(s)=%lf centimetre(s)\n",ip,ip);
		 break;
	  case 3:op=ip*0.0328084;
		 printf("\n%lf centimetre(s)=%lf feet\n",ip,op);
		 break;
	  case 4:op=ip*0.393701;
		 printf("\n%lf centimetre(s)=%lf inch(s)\n",ip,op);
		 break;
	  case 5:op=ip/100000.0;
		 printf("\n%lf centimetre(s)=%lf kilometre(s)\n",ip,op);
		 break;
	  case 6:op=ip*(6.2137/1000000.0);
		 printf("\n%lf centimetre(s)=%lf mile(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.0109361;
		 printf("\n%lf centimetre(s)=%lf yards(s)\n",ip,op);
		 break;
	  case 8:op=ip*10.0;
		 printf("\n%lf centimetre(s)=%lf millimetre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 3:switch(pop())
	 {
	  case 1:op=ip*0.3048;
		 printf("\n%lf feet=%lf metre(s)\n",ip,op);
		 break;
	  case 2:op=ip*30.48;
		 printf("\n%lf feet=%lf centimetre(s)\n",ip,op);
		 break;
	  case 3:printf("\n%lf feet=%lf feet\n",ip,ip);
		 break;
	  case 4:op=ip*12.0;
		 printf("\n%lf feet=%lf inch(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.0003048;
		 printf("\n%lf feet=%lf kilometre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.000189394;
		 printf("\n%lf feet=%lf mile(s)\n",ip,op);
		 break;
	  case 7:op=ip/0.333333;
		 printf("\n%lf feet=%lf yards(s)\n",ip,op);
		 break;
	  case 8:op=ip*304.8;
		 printf("\n%lf feet=%lf millimetre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 4:switch(pop())
	 {
	  case 1:op=ip*0.0254;
		 printf("\n%lf inch = %lf metre(s)\n",ip,op);
		 break;
	  case 2:op=ip*2.54;
		 printf("\n%lf inch = %lf centimetre(s)\n",ip,op);
		 break;
	  case 3:op=ip*0.0833333;
		 printf("\n%lf inch = %lf feet\n",ip,op);
		 break;
	  case 4:printf("\n%lf inch = %lf inch(s)\n",ip,ip);
		 break;
	  case 5:op=ip*0.0000254;
		 printf("\n%lf inch = %lf kilometre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.000015783;
		 printf("\n%lf inch = %lf mile(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.0277778;
		 printf("\n%lf inch = %lf yards(s)\n",ip,op);
		 break;
	  case 8:op=ip*25.4;
		 printf("\n%lf inch = %lf millimetre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 5:switch(pop())
	 {
	  case 1:op=ip*1000.0;
		 printf("\n%lf kilometre(s) = %lf metre(s)\n",ip,op);
		 break;
	  case 2:op=ip*100000.0;
		 printf("\n%lf kilometre(s) = %lf centimetre(s)\n",ip,op);
		 break;
	  case 3:op=ip*3280.84;
		 printf("\n%lf kilometre(s) = %lf feet\n",ip,op);
		 break;
	  case 4:op=ip*39370.1;
		 printf("\n%lf kilometre(s) = %lf inch(s)\n",ip,op);
		 break;
	  case 5:printf("\n%lf kilometre(s) = %lf kilometre(s)\n",ip,ip);
		 break;
	  case 6:op=ip*0.621371;
		 printf("\n%lf kilometre(s) = %lf mile(s)\n",ip,op);
		 break;
	  case 7:op=ip*1093.61;
		 printf("\n%lf kilometre(s) = %lf yards(s)\n",ip,op);
		 break;
	  case 8:op=ip*1000000.0;
		 printf("\n%lf kilometre(s) = %lf millimetre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 6:switch(pop())
	 {
	  case 1:op=ip*1609.34;
		 printf("\n%lf mile(s) = %lf metre(s)\n",ip,op);
		 break;
	  case 2:op=ip*160934.0;
		 printf("\n%lf mile(s) = %lf centimetre(s)\n",ip,op);
		 break;
	  case 3:op=ip*5280.0;
		 printf("\n%lf mile(s) = %lf feet\n",ip,op);
		 break;
	  case 4:op=ip*63360.0;
		 printf("\n%lf mile(s) = %lf inch(s)\n",ip,op);
		 break;
	  case 5:op=ip*1.60934;
		 printf("\n%lf mile(s) = %lf kilometre(s)\n",ip,op);
		 break;
	  case 6:printf("\n%lf mile(s) = %lf mile(s)\n",ip,ip);
		 break;
	  case 7:op=ip*1760.0;
		 printf("\n%lf mile(s) = %lf yards(s)\n",ip,op);
		 break;
	  case 8:op=ip*1609340.0;
		 printf("\n%lf mile(s) = %lf millimetre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 7:switch(pop())
	 {
	  case 1:op=ip*0.9144;
		 printf("\n%lf yard(s) = %lf metre(s)\n",ip,op);
		 break;
	  case 2:op=ip*91.44;
		 printf("\n%lf yard(s) = %lf centimetre(s)\n",ip,op);
		 break;
	  case 3:op=ip*3.0;
		 printf("\n%lf yard(s) = %lf feet\n",ip,op);
		 break;
	  case 4:op=ip*36.0;
		 printf("\n%lf yard(s) = %lf inch(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.0009144;
		 printf("\n%lf yard(s) = %lf kilometre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.000568182;
		 printf("\n%lf yard(s) = %lf mile(s)\n",ip,op);
		 break;
	  case 7:printf("\n%lf yard(s) = %lf yards(s)\n",ip,ip);
		 break;
	  case 8:op=ip*914.4;
		 printf("\n%lf yard(s) = %lf millimetre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 8:switch(pop())
	 {
	  case 1:op=ip*0.001;
		 printf("\n%lf millimetre(s) = %lf metre(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.1;
		 printf("\n%lf millimetre(s) = %lf centimetre(s)\n",ip,op);
		 break;
	  case 3:op=ip*0.00328084;
		 printf("\n%lf millimetre(s) = %lf feet\n",ip,op);
		 break;
	  case 4:op=ip*0.0393701;
		 printf("\n%lf millimetre(s) = %lf inch(s)\n",ip,op);
		 break;
	  case 5:op=ip/1000000.0;
		 printf("\n%lf millimetre(s) = %lf kilometre(s)\n",ip,op);
		 break;
	  case 6:op=ip*(6.2137/10000000.0);
		 printf("\n%lf millimetre(s) = %lf mile(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.00109361;
		 printf("\n%lf millimetre(s) = %lf yards(s)\n",ip,op);
		 break;
	  case 8:printf("\n%lf millimetre(s) = %lf millimetre(s)\n",ip,ip);
		 break;
	 }
	 break;
 }
 return c;
}
int mass()
{
 int ch2,ch3,c=0;
 double ip,op;
 m1:printf("\nSelect input Unit:\n");
 printf("1.Tonne\n2.Kilogram\n3.Gram\n4.Milligram\n");
 printf("5.Imperial ton\n6.US ton\n7.Stone\n8.Pound\n");
 printf("9.Ounce\n10.Change Category\n11.Exit\n");
 scanf("%d",&ch2);
 if(ch2>=1 && ch2<=9)
  goto m2;
 else if(ch2==10 || ch2==11)
 {
  switch(ch2)
  {
   case 10:c+=1;
	   return c;
   case 11:exit(0);
  }
 }
 else
 {
  printf("invalid input selection");
  goto m1;
 }
 m2:printf("\nSelect output Unit:\n");
 printf("1.Tonne\n2.Kilogram\n3.Gram\n4.Milligram\n");
 printf("5.Imperial ton\n6.US ton\n7.Stone\n8.Pound\n");
 printf("9.Ounce\n10.Go back\n11.Change Category\n12.Exit\n");
 scanf("%d",&ch3);
 if(ch3>=1 && ch3<=9)
  goto m3;
 else if(ch3>=10 && ch3<=12)
 {
  switch(ch3)
  {
   case 10:goto m1;
   case 11:c+=1;
	   return c;
   case 12:exit(0);
  }
 }
 else
 {
  printf("invalid output selection");
  goto m2;
 }
 m3:push(ch3);
 push(ch2);
 printf("\nEnter input value\n");
 scanf("%lf",&ip);
 switch(pop())
 {
  case 1:switch(pop())
	 {
	  case 1:printf("\n%lf tonne(s) = %lf tonne(s)\n",ip,ip);
		 break;
	  case 2:op=ip*1000.0;
		 printf("\n%lf tonne(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:op=ip*1000000.0;
		 printf("\n%lf tonne(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:op=ip*1000000000.0;
		 printf("\n%lf tonne(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.984207;
		 printf("\n%lf tonne(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:op=ip*1.10231;
		 printf("\n%lf tonne(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:op=ip*157.473;
		 printf("\n%lf tonne(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:op=ip*2204.62;
		 printf("\n%lf tonne(s) = %lf Pound(s)\n",ip,op);
		 break;
	  case 9:op=ip*35274.0;
		 printf("\n%lf tonne(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 2:switch(pop())
	 {
	  case 1:op=ip*0.001;
		 printf("\n%lf kilogram(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:printf("\n%lf kilogram(s) = %lf kilogram(s)\n",ip,ip);
		 break;
	  case 3:op=ip*1000.0;
		 printf("\n%lf kilogram(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:op=ip*1000000.0;
		 printf("\n%lf kilogram(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.000984207;
		 printf("\n%lf kilogram(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.00110231;
		 printf("\n%lf kilogram(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.157473;
		 printf("\n%lf kilogram(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:op=ip*2.20462;
		 printf("\n%lf kilogram(s) = %lf pound(s)\n",ip,op);
		 break;
	  case 9:op=ip*35.274;
		 printf("\n%lf kilogram(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 3:switch(pop())
	 {
	  case 1:op=ip*0.000001;
		 printf("\n%lf gram(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.001;
		 printf("\n%lf gram(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:printf("\n%lf gram(s) = %lf gram(s)\n",ip,ip);
		 break;
	  case 4:op=ip*1000.0;
		 printf("\n%lf gram(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:op=ip*(9.8421/10000000.0);
		 printf("\n%lf gram(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:op=ip*(1.1023/1000000.0);
		 printf("\n%lf gram(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.000157473;
		 printf("\n%lf gram(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:op=ip*0.00220462;
		 printf("\n%lf gram(s) = %lf pound(s)\n",ip,op);
		 break;
	  case 9:op=ip*0.035274;
		 printf("\n%lf gram(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 4:switch(pop())
	 {
	  case 1:op=ip*0.000000001;
		 printf("\n%lf milligram(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.000001;
		 printf("\n%lf milligram(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:op=ip*0.001;
		 printf("\n%lf milligram(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:printf("\n%lf milligram(s) = %lf milligram(s)\n",ip,ip);
		 break;
	  case 5:op=ip*(9.8421/10000000000.0);
		 printf("\n%lf milligram(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:op=ip*(1.1023/1000000000.0);
		 printf("\n%lf milligram(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:op=ip*(1.5747/10000000.0);
		 printf("\n%lf milligram(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:op=ip*(2.2046/1000000.0);
		 printf("\n%lf milligram(s) = %lf pound(s)\n",ip,op);
		 break;
	  case 9:op=ip*(3.5274/100000.0);
		 printf("\n%lf milligram(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 5:switch(pop())
	 {
	  case 1:op=ip*1.01605;
		 printf("\n%lf imperial ton(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:op=ip*1016.05;
		 printf("\n%lf imperial ton(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:op=ip*1016000.0;
		 printf("\n%lf imperial ton(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:op=ip*1016000000.0;
		 printf("\n%lf imperial ton(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:printf("\n%lf imperial ton(s) = %lf imperial ton(s)\n",ip,ip);
		 break;
	  case 6:op=ip*1.12;
		 printf("\n%lf imperial ton(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:op=ip*160.0;
		 printf("\n%lf imperial ton(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:op=ip*2240.0;
		 printf("\n%lf imperial ton(s) = %lf pound(s)\n",ip,op);
		 break;
	  case 9:op=ip*35840.0;
		 printf("\n%lf imperial ton(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 6:switch(pop())
	 {
	  case 1:op=ip*0.907185;
		 printf("\n%lf US ton(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:op=ip*907.185;
		 printf("\n%lf US ton(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:op=ip*907185.0;
		 printf("\n%lf US ton(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:op=ip*907185000.0;
		 printf("\n%lf US ton(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.892857;
		 printf("\n%lf US ton(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:printf("\n%lf US ton(s) = %lf US ton(s)\n",ip,ip);
		 break;
	  case 7:op=ip*142.857;
		 printf("\n%lf US ton(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:op=ip*2000.0;
		 printf("\n%lf US ton(s) = %lf pound(s)\n",ip,op);
		 break;
	  case 9:op=ip*32000.0;
		 printf("\n%lf US ton(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 7:switch(pop())
	 {
	  case 1:op=ip*0.00635029;
		 printf("\n%lf stone(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:op=ip*6.35029;
		 printf("\n%lf stone(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:op=ip*6350.29;
		 printf("\n%lf stone(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:op=ip*6350000.0;
		 printf("\n%lf stone(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.00625;
		 printf("\n%lf stone(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.007;
		 printf("\n%lf stone(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:printf("\n%lf stone(s) = %lf stone(s)\n",ip,ip);
		 break;
	  case 8:op=ip*14.0;
		 printf("\n%lf stone(s) = %lf pound(s)\n",ip,op);
		 break;
	  case 9:op=ip*224.0;
		 printf("\n%lf stone(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 8:switch(pop())
	 {
	  case 1:op=ip*0.000453592;
		 printf("\n%lf pound(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.453592;
		 printf("\n%lf pound(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:op=ip*453.592;
		 printf("\n%lf pound(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:op=ip*453592.0;
		 printf("\n%lf pound(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.000446429;
		 printf("\n%lf pound(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.0005;
		 printf("\n%lf pound(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.0714286;
		 printf("\n%lf pound(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:printf("\n%lf pound(s) = %lf pound(s)\n",ip,ip);
		 break;
	  case 9:op=ip*16.0;
		 printf("\n%lf pound(s) = %lf ounce(s)\n",ip,op);
		 break;
	 }
	 break;
  case 9:switch(pop())
	 {
	  case 1:op=ip*(2.835/100000.0);
		 printf("\n%lf ounce(s) = %lf tonne(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.0283495;
		 printf("\n%lf ounce(s) = %lf kilogram(s)\n",ip,op);
		 break;
	  case 3:op=ip*28.3495;
		 printf("\n%lf ounce(s) = %lf gram(s)\n",ip,op);
		 break;
	  case 4:op=ip*28349.5;
		 printf("\n%lf ounce(s) = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:op=ip*(2.7902/100000.0);
		 printf("\n%lf ounce(s) = %lf imperial ton(s)\n",ip,op);
		 break;
	  case 6:op=ip*(3.125/100000.0);
		 printf("\n%lf ounce(s) = %lf US ton(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.00446429;
		 printf("\n%lf ounce(s) = %lf stone(s)\n",ip,op);
		 break;
	  case 8:op=ip*0.0625;
		 printf("\n%lf ounce(s) = %lf pound(s)\n",ip,op);
		 break;
	  case 9:printf("\n%lf ounce(s) = %lf ounce(s)\n",ip,ip);
		 break;
	 }
	 break;
 }
 return c;
}
int temp()
{
 int ch2,ch3,c=0;
 double ip,op;
 t1:printf("\nSelect input Unit:\n");
 printf("\n1.Celsius\n2.Fahrenheit\n3.Kelvin\n");
 printf("4.Change Category\n5.Exit\n");
 scanf("%d",&ch2);
 if(ch2>=1 && ch2<=3)
  goto t2;
 else if(ch2==4 || ch2==5)
 {
  switch(ch2)
  {
   case 4:c+=1;
	  return c;
   case 5:exit(0);
  }
 }
 else
 {
  printf("invalid input selection");
  goto t1;
 }
 t2:printf("\nSelect output Unit:\n");
 printf("\n1.Celsius\n2.Fahrenheit\n3.Kelvin\n");
 printf("4.Go back\n5.Change Category\n6.Exit\n");
 scanf("%d",&ch3);
 if(ch3>=1 && ch3<=3)
  goto t3;
 else if(ch3>=4 && ch3<=6)
 {
  switch(ch3)
  {
   case 4:goto t1;
   case 5:c+=1;
	  return c;
   case 6:exit(0);
  }
 }
 else
 {
  printf("invalid output selection");
  goto t2;
 }
 t3:push(ch3);
 push(ch2);
 printf("\nEnter input value\n");
 scanf("%lf",&ip);
 switch(pop())
 {
  case 1:switch(pop())
	 {
	  case 1:printf("\n%lf celsius = %lf celsius",ip,ip);
		 break;
	  case 2:op=ip*(9.0/5.0)+32.0;
		 printf("\n%lf celsius = %lf fahrenheit",ip,op);
		 break;
	  case 3:op=ip+273.15;
		 printf("\n%lf celsius = %lf kelvin",ip,op);
		 break;
	 }
	 break;
  case 2:switch(pop())
	 {
	  case 1:op=(ip-32.0)*(5.0/9.0);
		 printf("\n%lf fahrenheit = %lf celsius",ip,op);
		 break;
	  case 2:printf("\n%lf fahrenheit = %lf fahrenheit", ip,ip);
		 break;
	  case 3:op=(ip+459.67)*(5.0/9.0);
		 printf("\n%lf fahrenheit = %lf kelvin",ip,op);
		 break;
	 }
	 break;
  case 3:switch(pop())
	 {
	  case 1:op=ip-273.15;
		 printf("\n%lf kelvin = %lf celsius",ip,op);
		 break;
	  case 2:op=(ip*(9.0/5.0))-459.67;
		 printf("\n%lf kelvin = %lf fahrenheit",ip,op);
		 break;
	  case 3:printf("\n%lf kelvin = %lf kelvin",ip,ip);
		 break;
	 }
	 break;
 }
 return c;
}
int area()
{
 int ch2,ch3,c=0;
 double ip,op;
 a1:printf("\nSelect input Unit:\n");
 printf("1.Sq.kilometre\n2.Sq.metre\n3.Sq.mile\n4.Sq.yard\n");
 printf("5.Sq.foot\n6.Sq.inch\n7.Hectare\n8.Acre\n");
 printf("9.Change Category\n10.Exit\n");
 scanf("%d",&ch2);
 if(ch2>=1 && ch2<=8)
  goto a2;
 else if(ch2==9 || ch2==10)
 {
  switch(ch2)
  {
   case 9:c+=1;
	  return c;
   case 10:exit(0);
  }
 }
 else
 {
  printf("invalid input selection");
  goto a1;
 }
 a2:printf("\nSelect output Unit:\n");
 printf("1.Sq.kilometre\n2.Sq.metre\n3.Sq.mile\n4.Sq.yard\n");
 printf("5.Sq.foot\n6.Sq.inch\n7.Hectare\n8.Acre\n");
 printf("9.Go back\n10.Change Category\n11.Exit\n");
 scanf("%d",&ch3);
 if(ch3>=1 && ch3<=8)
  goto a3;
 else if(ch3>=9 && ch3<=11)
 {
  switch(ch3)
  {
   case 9:goto a1;
   case 10:c+=1;
	   return c;
   case 11:exit(0);
  }
 }
 else
 {
  printf("invalid output selection");
  goto a2;
 }
 a3:push(ch3);
 push(ch2);
 printf("\nEnter input value\n");
 scanf("%lf",&ip);
 switch(pop())
 {
  case 1:switch(pop())
	 {
	  case 1:printf("\n%lf Sq.kilometre(s) = %lf Sq.kilometre(s)\n",ip,ip);
		 break;
	  case 2:op=ip*1000000.0;
		 printf("\n%lf Sq.kilometre(s) = %lf Sq.metre(s)\n",ip,op);
		 break;
	  case 3:op=ip*0.386102;
		 printf("\n%lf Sq.kilometre(s) = %lf Sq.mile(s)\n",ip,op);
		 break;
	  case 4:op=ip*1196000.0;
		 printf("\n%lf Sq.kilometre(s) = %lf Sq.yard(s)\n",ip,op);
		 break;
	  case 5:op=ip*10760000.0;
		 printf("\n%lf Sq.kilometre(s) = %lf Sq.feet\n",ip,op);
		 break;
	  case 6:op=ip*1550000000.0;
		 printf("\n%lf Sq.kilometre(s) = %lf Sq.inch(s)\n",ip,op);
		 break;
	  case 7:op=ip*100.0;
		 printf("\n%lf Sq.kilometre(s) = %lf hectare(s)\n",ip,op);
		 break;
	  case 8:op=ip*247.105;
		 printf("\n%lf Sq.kilometre(s) = %lf Acre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 2:switch(pop())
	 {
	  case 1:op=ip/1000000.0;
		 printf("\n%lf Sq.metre(s) = %lf Sq.kilometre(s)\n",ip,op);
		 break;
	  case 2:printf("\n%lf Sq.metre(s) = %lf Sq.metre(s)\n",ip,ip);
		 break;
	  case 3:op=ip*(3.861/10000000.0);
		 printf("\n%lf Sq.metre(s) = %lf Sq.mile(s)\n",ip,op);
		 break;
	  case 4:op=ip*1.19599;
		 printf("\n%lf Sq.metre(s) = %lf Sq.yard(s)\n",ip,op);
		 break;
	  case 5:op=ip*10.7639;
		 printf("\n%lf Sq.metre(s) = %lf Sq.foot(s)\n",ip,op);
		 break;
	  case 6:op=ip*1550.0;
		 printf("\n%lf Sq.metre(s) = %lf Sq.inch(s)\n",ip,op);
		 break;
	  case 7:op=ip/10000.0;
		 printf("\n%lf Sq.metre(s) = %lf hectare(s)\n",ip,op);
		 break;
	  case 8:op=ip*0.000247105;
		 printf("\n%lf Sq.metre(s) = %lf acre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 3:switch(pop())
	 {
	  case 1:op=ip*2.58999;
		 printf("\n%lf Sq.mile(s) = %lf Sq.kilometre(s)\n",ip,op);
		 break;
	  case 2:op=ip*2590000.0;
		 printf("\n%lf Sq.mile(s) = %lf Sq.metre(s)\n",ip,op);
		 break;
	  case 3:printf("\n%lf Sq.mile(s) = %lf Sq.mile(s)\n",ip,ip);
		 break;
	  case 4:op=ip*3098000.0;
		 printf("\n%lf Sq.mile(s) = %lf Sq.yard(s)\n",ip,op);
		 break;
	  case 5:op=ip*27880000.0;
		 printf("\n%lf Sq.mile(s) = %lf Sq.foot\n",ip,op);
		 break;
	  case 6:op=ip*4014000000.0;
		 printf("\n%lf Sq.mile(s) = %lf Sq.inch(s)\n",ip,op);
		 break;
	  case 7:op=ip*258.999;
		 printf("\n%lf Sq.mile(s) = %lf hectare(s)\n",ip,op);
		 break;
	  case 8:op=ip*640.0;
		 printf("\n%lf Sq.mile(s) = %lf acre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 4:switch(pop())
	 {
	  case 1:op=ip*(8.3613/10000000.0);
		 printf("\n%lf Sq.yard(s) = %lf Sq.kilometre(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.836127;
		 printf("\n%lf Sq.yard(s) = %lf Sq.metre(s)\n",ip,op);
		 break;
	  case 3:op=ip*(3.2283/10000000.0);
		 printf("\n%lf Sq.yard(s) = %lf Sq.mile(s)\n",ip,op);
		 break;
	  case 4:printf("\n%lf Sq.yard(s) = %lf Sq.yard(s)\n",ip,ip);
		 break;
	  case 5:op=ip*9.0;
		 printf("\n%lf Sq.yard(s) = %lf Sq.foot\n",ip,op);
		 break;
	  case 6:op=ip*1296.0;
		 printf("\n%lf Sq.yard(s) = %lf Sq.inch(s)\n",ip,op);
		 break;
	  case 7:op=ip*(8.3613/100000.0);
		 printf("\n%lf Sq.yard(s) = %lf hectare(s)\n",ip,op);
		 break;
	  case 8:op=ip*0.000206612;
		 printf("\n%lf Sq.yard(s) = %lf Acre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 5:switch(pop())
	 {
	  case 1:op=ip*(9.2903/100000000.0);
		 printf("\n%lf Sq.foot = %lf Sq.kilometre(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.092903;
		 printf("\n%lf Sq.foot = %lf Sq.metre(s)\n",ip,op);
		 break;
	  case 3:op=ip*(3.587/100000000.0);
		 printf("\n%lf Sq.foot = %lf Sq.mile(s)\n",ip,op);
		 break;
	  case 4:op=ip*0.111111;
		 printf("\n%lf Sq.foot = %lf milligram(s)\n",ip,op);
		 break;
	  case 5:printf("\n%lf Sq.foot = %lf Sq.foot\n",ip,ip);
		 break;
	  case 6:op=ip*144.0;
		 printf("\n%lf Sq.foot = %lf Sq.inch(s)\n",ip,op);
		 break;
	  case 7:op=ip*(9.2903/1000000.0);
		 printf("\n%lf Sq.foot = %lf hectare(s)\n",ip,op);
		 break;
	  case 8:op=ip*(2.2957/100000.0);
		 printf("\n%lf Sq.foot = %lf acre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 6:switch(pop())
	 {
	  case 1:op=ip*(6.4516/10000000000.0);
		 printf("\n%lf Sq.inch(s) = %lf Sq.kilometre(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.00064516;
		 printf("\n%lf Sq.inch(s) = %lf Sq.metre(s)\n",ip,op);
		 break;
	  case 3:op=ip*(2.491/10000000000.0);
		 printf("\n%lf Sq.inch(s) = %lf Sq.mile(s)\n",ip,op);
		 break;
	  case 4:op=ip*0.000771605;
		 printf("\n%lf Sq.inch(s) = %lf Sq.yard(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.00694444;
		 printf("\n%lf Sq.inch(s) = %lf Sq.foot\n",ip,op);
		 break;
	  case 6:printf("\n%lf Sq.inch(s) = %lf Sq.inch(s)\n",ip,ip);
		 break;
	  case 7:op=ip*(6.4516/100000000.0);
		 printf("\n%lf Sq.inch(s) = %lf hectare(s)\n",ip,op);
		 break;
	  case 8:op=ip*(1.5942/10000000.0);
		 printf("\n%lf Sq.inch(s) = %lf acre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 7:switch(pop())
	 {
	  case 1:op=ip*0.01;
		 printf("\n%lf hectare(s) = %lf Sq.kilometre(s)\n",ip,op);
		 break;
	  case 2:op=ip*10000.0;
		 printf("\n%lf hectare(s) = %lf Sq.metre(s)\n",ip,op);
		 break;
	  case 3:op=ip*0.00386102;
		 printf("\n%lf hectare(s) = %lf Sq.mile(s)\n",ip,op);
		 break;
	  case 4:op=ip*11959.9;
		 printf("\n%lf hectare(s) = %lf Sq.yard(s)\n",ip,op);
		 break;
	  case 5:op=ip*107639.0;
		 printf("\n%lf hectare(s) = %lf Sq.foot\n",ip,op);
		 break;
	  case 6:op=ip*15500000.0;
		 printf("\n%lf hectare(s) = %lf Sq.inch(s)\n",ip,op);
		 break;
	  case 7:printf("\n%lf hectare(s) = %lf hectare(s)\n",ip,ip);
		 break;
	  case 8:op=ip*2.47105;
		 printf("\n%lf hectare(s) = %lf acre(s)\n",ip,op);
		 break;
	 }
	 break;
  case 8:switch(pop())
	 {
	  case 1:op=ip*0.00404686;
		 printf("\n%lf acre(s) = %lf Sq.kilometre(s)\n",ip,op);
		 break;
	  case 2:op=ip*4046.86;
		 printf("\n%lf acre(s) = %lf Sq.metre(s)\n",ip,op);
		 break;
	  case 3:op=ip*0.0015625;
		 printf("\n%lf acre(s) = %lf Sq.mile(s)\n",ip,op);
		 break;
	  case 4:op=ip*4840.0;
		 printf("\n%lf acre(s) = %lf Sq.yard(s)\n",ip,op);
		 break;
	  case 5:op=ip*43560.0;
		 printf("\n%lf acre(s) = %lf Sq.foot\n",ip,op);
		 break;
	  case 6:op=ip*6273000.0;
		 printf("\n%lf acre(s) = %lf Sq.inch(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.404686;
		 printf("\n%lf acre(s) = %lf hectare(s)\n",ip,op);
		 break;
	  case 8:printf("\n%lf acre(s) = %lf acre(s)\n",ip,ip);
		 break;
	 }
	 break;
 }
 return c;
}
int speed()
{
 int ch2,ch3,c=0;
 double ip,op;
 s1:printf("\nSelect input Unit:\n");
 printf("\n1.Miles/hour\n2.Metre/second\n3.Kilometre/hour\n");
 printf("4.Knot\n5.Change Category\n6.Exit\n");
 scanf("%d",&ch2);
 if(ch2>=1 && ch2<=4)
  goto s2;
 else if(ch2==5 || ch2==6)
 {
  switch(ch2)
  {
   case 5:c+=1;
	  return c;
   case 6:exit(0);
  }
 }
 else
 {
  printf("invalid input selection");
  goto s1;
 }
 s2:printf("\nSelect output Unit:\n");
 printf("\n1.Miles/hour\n2.Metre/second\n3.Kilometre/hour\n");
 printf("4.Knot\n5.Go back\n6.Change Category\n7.Exit\n");
 scanf("%d",&ch3);
 if(ch3>=1 && ch3<=4)
  goto s3;
 else if(ch3>=5 && ch3<=7)
 {
  switch(ch3)
  {
   case 5:goto s1;
   case 6:c+=1;
	  return c;
   case 7:exit(0);
  }
 }
 else
 {
  printf("invalid output selection");
  goto s2;
 }
 s3:push(ch3);
 push(ch2);
 printf("\nEnter input value\n");
 scanf("%lf",&ip);
 switch(pop())
 {
  case 1:switch(pop())
	 {
	  case 1:printf("\n%lf mile(s)/hour = %lf miles(s)/hour",ip,ip);
		 break;
	  case 2:op=ip*0.44704;
		 printf("\n%lf mile(s)/hour = %lf metre(s)/second",ip,op);
		 break;
	  case 3:op=ip*1.60934;
		 printf("\n%lf mile(s)/hour = %lf kilometre(s)/hour",ip,op);
		 break;
	  case 4:op=ip*0.868976;
		 printf("\n%lf mile(s)/hour = %lf knot(s)",ip,op);
		 break;
	 }
	 break;
  case 2:switch(pop())
	 {
	  case 1:op=ip*2.23694;
		 printf("\n%lf metre(s)/second = %lf mile(s)/hour",ip,op);
		 break;
	  case 2:printf("\n%lf metre(s)/second = %lf metre(s)/second", ip,ip);
		 break;
	  case 3:op=ip*3.6;
		 printf("\n%lf metre(s)/second = %lf kilometre(s)/hour",ip,op);
		 break;
	  case 4:op=ip*1.94384;
		 printf("\n%lf metre(s)/second = %lf knot(s)",ip,op);
		 break;
	 }
	 break;
  case 3:switch(pop())
	 {
	  case 1:op=ip*0.621371;
		 printf("\n%lf kilometre(s)/hour = %lf mile(s)/hour",ip,op);
		 break;
	  case 2:op=ip*0.277778;
		 printf("\n%lf kilometre(s)/hour = %lf metre(s)/second",ip,op);
		 break;
	  case 3:printf("\n%lf kilometre(s)/hour = %lf kilometre(s)/hour",ip,ip);
		 break;
	  case 4:op=ip*0.539957;
		 printf("\n%lf kilometre(s)/hour = %lf knot(s)",ip,op);
		 break;
	 }
	 break;
  case 4:switch(pop())
	 {
	  case 1:op=ip*1.15078;
		 printf("\n%lf knot(s) = %lf mile(s)/hour",ip,op);
		 break;
	  case 2:op=ip*0.514444;
		 printf("\n%lf knot(s) = %lf metre(s)/second",ip,op);
		 break;
	  case 3:op=ip*1.852;
		 printf("\n%lf knot(s) = %lf kilometre(s)/hour",ip,op);
		 break;
	  case 4:printf("\n%lf knot(s) = %lf knot(s)",ip,ip);
		 break;
	 }
 }
 return c;
}
int volume()
{int ch2,ch3,c=0;
 double ip,op;
 v1:printf("\nSelect Input Unit:\n");
 printf("1.US liquid gallon\n2.US legal cup\n");
 printf("3.US tablespoon\n4.Cubic metre\n5.Litre\n");
 printf("6.Imperial gallon\n7.Imperial cup\n8.Imperial tablespoon\n9.Cubic inch\n");
 printf("10.Change category\n11.Exit\n");
 scanf("%d",&ch2);
 if(ch2>0 && ch2<=9)
  goto v2;
 else if(ch2==10 || ch2==11)
 {
  switch(ch2)
  {
   case 10:c+=1;
	   return c;
   case 11:exit(0);
  }
 }
 else
 {
  printf("\nInvalid input selection");
  goto v1;
 }
 v2:printf("\nSelect Output Unit:\n");
 printf("1.US liquid gallon\n2.US legal cup\n");
 printf("3.US tablespoon\n4.Cubic metre\n5.Litre\n");
 printf("6.Imperial gallon\n7.Imperial cup\n8.Imperial tablespoon\n9.Cubic inch\n");
 printf("10.Go back\n11.Change category\n12.Exit\n");
 scanf("%d",&ch3);
 if(ch3>=1 && ch3<=9)
  goto v3;
 else if(ch3>=10 && ch3<=12)
 {
  switch(ch3)
  {
   case 10:goto v1;
   case 11:c+=1;
	   return c;
   case 12:exit(0);
  }
 }
 else
 {
  printf("\ninvalid output selection");
  goto v2;
 }
 v3:push(ch3);
 push(ch2);
 printf("\nEnter input value\n");
 scanf("%lf",&ip);
 switch(pop())
 {
  case 1:switch(pop())
	 {
	  case 1:printf("\n%lf US liquid gallon(s) = %lf US liquid gallon(s)\n",ip,ip);
		 break;
	  case 2:op=ip*15.7725;
		 printf("\n%lf US liquid gallon(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:op=ip*256.0;
		 printf("\n%lf US liquid gallon(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:op=ip*0.00378541;
		 printf("\n%lf US liquid gallon(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:op=ip*3.78541;
		 printf("\n%lf US liquid gallon(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.832674;
		 printf("\n%lf US liquid gallon(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:op=ip*13.3228;
		 printf("\n%lf US liquid gallon(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:op=ip*213.165;
		 printf("\n%lf US liquid gallon(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:op=ip*231.0;
		 printf("\n%lf US liquid gallon(s) = %lf Cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 2:switch(pop())
	 {
	  case 1:op=ip*0.0634013;
		 printf("\n%lf US legal cup(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:printf("\n%lf US legal cup(s) = %lf US legal cup(s)\n",ip,ip);
		 break;
	  case 3:op=ip*16.2307;
		 printf("\n%lf US legal cup(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:op=ip*0.00024;
		 printf("\n%lf US legal cup(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.24;
		 printf("\n%lf US legal cup(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.0527926;
		 printf("\n%lf US legal cup(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.844682;
		 printf("\n%lf US legal cup(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:op=ip*13.5149;
		 printf("\n%lf US legal cup(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:op=ip*14.6457;
		 printf("\n%lf US legal cup(s) = %lf Cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 3:switch(pop())
	 {
	  case 1:op=ip*0.00390625;
		 printf("\n%lf US tablespoon(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.0616115;
		 printf("\n%lf US tablespoon(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:printf("\n%lf US tablespoon(s) = %lf US tablespoon(s)\n",ip,ip);
		 break;
	  case 4:op=ip*(1.4787/100000.0);
		 printf("\n%lf US tablespoon(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.0147868;
		 printf("\n%lf US tablespoon(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.00325263;
		 printf("\n%lf US tablespoon(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:op=ip*3.3307;
		 printf("\n%lf US tablespoon(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:op=ip*53.2911;
		 printf("\n%lf US tablespoon(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:op=ip*57.75;
		 printf("\n%lf US tablespoon(s) = %lf Cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 4:switch(pop())
	 {
	  case 1:op=ip*264.172;
		 printf("\n%lf cubic metre(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:op=ip*4166.67;
		 printf("\n%lf Cubic metre(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:op=ip*67628.0;
		 printf("\n%lf Cubic metre(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:printf("\n%lf Cubic metre(s) = %lf Cubic metre(s)\n",ip,ip);
		 break;
	  case 5:op=ip*1000.0;
		 printf("\n%lf Cubic metre(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:op=ip*219.969;
		 printf("\n%lf Cubic metre(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:op=ip*3519.51;
		 printf("\n%lf Cubic metre(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:op=ip*56312.1;
		 printf("\n%lf Cubic metre(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:op=ip*61023.7;
		 printf("\n%lf cubic metre(s) = %lf Cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 5:switch(pop())
	 {
	  case 1:op=ip*0.264172;
		 printf("\n%lf litre(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:op=ip*4.16667;
		 printf("\n%lf litre(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:op=ip*67.628;
		 printf("\n%lf litre(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:op=ip*0.001;
		 printf("\n%lf litre(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:printf("\n%lf litre(s) = %lf litre(s)\n",ip,ip);
		 break;
	  case 6:op=ip*0.219969;
		 printf("\n%lf litre(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:op=ip*3.51951;
		 printf("\n%lf litre(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:op=ip*56.3121;
		 printf("\n%lf litre(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:op=ip*61.0237;
		 printf("\n%lf litre(s) = %lf Cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 6:switch(pop())
	 {
	  case 1:op=ip*1.20095;
		 printf("\n%lf Imperial gallon(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:op=ip*18.942;
		 printf("\n%lf Imperial gallon(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:op=ip*307.443;
		 printf("\n%lf Imperial gallon(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:op=ip*0.00454609;
		 printf("\n%lf Imperial gallon(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:op=ip*4.54609;
		 printf("\n%lf Imperial gallon(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:printf("\n%lf Imperial gallon(s) = %lf Imperial gallon(s)\n",ip,ip);
		 break;
	  case 7:op=ip*16.0;
		 printf("\n%lf Imperial gallon(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:op=ip*256.0;
		 printf("\n%lf Imperial gallon(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:op=ip*277.419;
		 printf("\n%lf Imperial gallon(s) = %lf cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 7:switch(pop())
	 {
	  case 1:op=ip*0.0750594;
		 printf("\n%lf Imperial cup(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:op=ip*1.18388;
		 printf("\n%lf Imperial cup(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:op=ip*19.2152;
		 printf("\n%lf Imperial cup(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:op=ip*0.000284131;
		 printf("\n%lf Imperial cup(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.284131;
		 printf("\n%lf Imperial cup(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.0625;
		 printf("\n%lf Imperial cup(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:printf("\n%lf Imperial cup(s) = %lf Imperial cup(s)\n",ip,ip);
		 break;
	  case 8:op=ip*16.0;
		 printf("\n%lf Imperial cup(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:op=ip*17.3387;
		 printf("\n%lf Imperial cup(s) = %lf cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 8:switch(pop())
	 {
	  case 1:op=ip*0.00469121;
		 printf("\n%lf Imperial tablespoon(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.0739924;
		 printf("\n%lf Imperial tablespoon(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:op=ip*1.20095;
		 printf("\n%lf Imperial tablespoon(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:op=ip*(1.7758/100000.0);
		 printf("\n%lf Imperial tablespoon(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.0177582;
		 printf("\n%lf Imperial tablespoon(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.00390625;
		 printf("\n%lf Imperial tablespoon(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.0625;
		 printf("\n%lf Imperial tablespoon(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:printf("\n%lf Imperial tablespoon(s) = %lf Imperial tablespoon(s)\n",ip,ip);
		 break;
	  case 9:op=ip*1.08367;
		 printf("\n%lf Imperial tablespoon(s) = %lf cubic inch(s)\n",ip,op);
		 break;
	 }
	 break;
  case 9:switch(pop())
	 {
	  case 1:op=ip*0.004329;
		 printf("\n%lf cubic inch(s) = %lf US liquid gallon(s)\n",ip,op);
		 break;
	  case 2:op=ip*0.0682794;
		 printf("\n%lf cubic inch(s) = %lf US legal cup(s)\n",ip,op);
		 break;
	  case 3:op=ip*1.10823;
		 printf("\n%lf cubic inch(s) = %lf US tablespoon(s)\n",ip,op);
		 break;
	  case 4:op=ip*(1.6387/100000.0);
		 printf("\n%lf cubic inch(s) = %lf Cubic metre(s)\n",ip,op);
		 break;
	  case 5:op=ip*0.0163871;
		 printf("\n%lf cubic inch(s) = %lf litre(s)\n",ip,op);
		 break;
	  case 6:op=ip*0.00360465;
		 printf("\n%lf cubic inch(s) = %lf Imperial gallon(s)\n",ip,op);
		 break;
	  case 7:op=ip*0.0576744;
		 printf("\n%lf cubic inch(s) = %lf Imperial cup(s)\n",ip,op);
		 break;
	  case 8:op=ip*0.92279;
		 printf("\n%lf cubic inch(s) = %lf Imperial tablespoon(s)\n",ip,op);
		 break;
	  case 9:printf("\n%lf cubic inch(s) = %lf cubic inch(s)\n",ip,ip);
		 break;
	 }
	 break;
 }
 return c;
}
int main()
{
 int ch1,c;
 clrscr();
 cc:printf("\nEnter category of units\n");
 printf("1.Length/Distance\n2.Mass\n3.Temperature\n");
 printf("4.Area\n5.Volume\n6.Speed\n7.Go back\n8.Exit\n");
 scanf("%d",&ch1);
 push(ch1);
 switch(pop())
 {
  case 1:c=length();
	 if(c==1)
	   goto cc;
	 break;
  case 2:c=mass();
	 if(c==1)
	   goto cc;
	 break;
  case 3:c=temp();
	 if(c==1)
	   goto cc;
	 break;
  case 4:c=area();
	 if(c==1)
	   goto cc;
	 break;
  case 5:c=volume();
	 if(c==1)
	   goto cc;
	 break;
  case 6:c=speed();
	 if(c==1)
	   goto cc;
	 break;
  case 7:goto cc;
  case 8:exit(0);
  default:printf("\nInvalid choice");
 }
 printf("\nDo you want to continue\n");
 printf("1.yes\nAny key .no");
 scanf("%d",&ch1);
 if(ch1==1)
  goto cc;
 return 0;
}




