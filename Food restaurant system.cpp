#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{float r1,r2,r3,r4,r5,grossamt,netamt,amt1,amt2,amt3,amt4,amt5,dis;
int q1,q2,q3,q4,q5;
printf("Enter the product's quantity and rate :\n");
printf("Quantity of Noodles:");
scanf("%d",&q1);
printf("Rate of Noodles : ");
scanf("%f",&r1);
printf("Quantity of Momos: ");
scanf("%d",&q2);
printf("Rate of Momos : ");
scanf("%f",&r2);
printf("Quantity of Tea: ");
scanf("%d",&q3);
printf("Rate of Tea : ");
scanf("%f",&r3);
printf("Quantity of Bread: ");
scanf("%d",&q4);
printf("Rate of Bread: ");
scanf("%f",&r4);
printf("Quantity of Pizza: ");
scanf("%d",&q5);
printf("Rate of Pizza: ");
scanf("%f",&r5);
///Calculation the complete process/

amt1=q1*r1;
amt2=q2*r2;
amt3=q3*r3;
amt4=q4*r4;
amt5=q5*r5;

grossamt=amt1+amt2+amt3+amt4+amt5;

if(grossamt<1000)
{
	dis=0;	
}
else
{
if(grossamt>=1000 && grossamt<5000)
{
 dis=(grossamt*5)/100;
}
else{
	
	if(grossamt>=5000 && grossamt<10000)
	{
		dis=(grossamt*8)/100;
	}
	else
	{
		if(grossamt>=10000)
		{
				dis=(grossamt*10)/100;
		}
	}

    }
  }  
netamt=grossamt-dis;
/* output of the code */
system("cls");
 printf("\n\n\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\t\t\t\t\t  Sandhya Fast Food Billing Software\n");
printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\t\t\t Sno. * Name    * Quantity  * Rate    *  Amount\n");
printf("\t\t\t 1    * Noodles * %d        * %.1f    *  %.1f\n" ,q1,r1,amt1);
printf("\t\t\t 2    * Momos   * %d        * %.1f    *  %.1f \n",q2,r2,amt2);
printf("\t\t\t 3    * Tea     * %d        * %.1f    *  %.1f\n",q3,r3,amt3);
printf("\t\t\t 4    * Bread   * %d        * %.1f    *  %.1f \n",q4,r4,amt4);
printf("\t\t\t 4    * Pizza   * %d        * %.1f    *  %.1f \n",q5,r5,amt5);
printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\n\t\t\t Grand Total : %f\n" ,grossamt);
printf("\t\t\t  Discount Allowed : %f\n",dis);
printf("\t\t\t Net Amount Paid : %f\n",netamt);
printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\t\t\t\t\t ThankYou!  Visit Again\n");
printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
getch();
return 0;
}
