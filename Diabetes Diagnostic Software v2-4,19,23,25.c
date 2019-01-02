#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char d1[10];
struct patient
{
	char name[20];
	int age;
	char sex;
	float ht,wt;
	char report[30];
}pts;

void cls()     //clear screen(clear for linux,cls for windows)
{
	system("cls||clear");
}
void details()    //take input of personal details of patient
{
	printf("\nENTER INPUT WITHIN LIMITS ,FIELDS REPEATED FOR WRONG INPUT \n");
	printf("P E R S O N A L   I N F O R M A T I O N\n\n\n");
	do
	{
		int i=0;
		printf("N A M E  (within 20 characters)      :");
		while(getchar()!='\n');
		gets(pts.name);
		while(pts.name[i])
		{
			pts.name[i]=toupper(pts.name[i]);
			i++;
		}
	}while(strlen(pts.name)>20);
	printf("A G E                                :");
	while(scanf("%d",&pts.age)!=1)
	{
		while(getchar()!='\n');
		printf("A G E                                :");
	}
	printf("W E I G H T (in Kgs)                 :");
	while(scanf("%f",&pts.wt)!=1)
	{
		while(getchar()!='\n');
		printf("W E I G H T (in Kgs)                 :");
	}
	printf("H E I G H T (in cms)                 :");
	while(scanf("%f",&pts.ht)!=1)
	{
		while(getchar()!='\n');
		printf("H E I G H T (in cms)                 :");
	}
	do
	{
		while(getchar()!='\n');
		printf("S E X (M/F)                          :");
		scanf("%c",&pts.sex);
		pts.sex=toupper(pts.sex);
	}while(pts.sex!='F'&& pts.sex!='M');
	cls();
}


void welcome()    //print welcome screen
{
	char a;	
	printf("\t********* W E L C O M E *********\n\n\n");
	printf("D I A B E T E S   D I A G N O S T I C   S O F T W A R E\n");
	printf ("---------------------------------------------------\n\n"); 
	printf("Created by Aniruddha Sadhukhan       CSE/2015/004\n");
	printf("           Anisha Roy                CSE/2015/019\n");
	printf("           Arpita Basak              CSE/2015/023\n");
	printf("           Zenith Roy                CSE/2015/025\n");
	printf("\n\n   ******** PRESS ENTER TO CONTINUE *********");
	while(getchar()!='\n');
	return;
}

int diagnostics1()  //Level 1 diagnostic
{
	int i=0,result=0,j,count=0;
	printf("Please enter the form page\n");
	//Getting level 1 symptoms :----
	do
	{
		while(getchar()!='\n');
		printf("APPETITE (H(HIGH)/L(LOW)/N(NORMAL))                :");
		scanf("%c",&d1[i]);  
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='H'&&d1[i]!='L'&&d1[i]!='N');
	++i;

	do
	{
		while(getchar()!='\n');
		printf("FREQUENCY OF THIRST(H(HIGH)/L(LOW)/N(NORMAL))      :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='H'&&d1[i]!='L'&&d1[i]!='N');
	++i;
	
	do
	{
		while(getchar()!='\n');
		printf("FREQUENCY OF URINATION(H(HIGH)/L(LOW)/N(NORMAL))   :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='H'&&d1[i]!='L'&&d1[i]!='N');
	++i;

	do
	{
		while(getchar()!='\n');
		printf("VISION (I(IMPAIRMENT)/N(NORMAL))                   :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='I'&&d1[i]!='N');
	i++;

	do
	{
		while(getchar()!='\n');
		printf("URINE SUGAR(P(PASSIVE)/A(ACTIVE))                  :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;
	
	do
	{
		while(getchar()!='\n');
		printf("KETONUREA(P(PASSIVE)/A(ACTIVE))                    :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;
	
	do
	{
		while(getchar()!='\n');
		printf("FASTING BLOOD SUGAR(H(HIGH)/L(LOW)/N(NORMAL))      :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='H'&&d1[i]!='L'&&d1[i]!='N');
	++i;

	do
	{
		while(getchar()!='\n');
		printf("R B S (H(HIGH)/L(LOW)/N(NORMAL))                   :");	
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='H'&&d1[i]!='L'&&d1[i]!='N');
	++i;

	
	do
	{
		while(getchar()!='\n');
		printf("FAMILY HISTORY OF DIABETES(P(PASSIVE)/A(ACTIVE))   :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;
	
	do
	{
		while(getchar()!='\n'); 
		printf("OGTT(D/N)                                          :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='D'&&d1[i]!='N');
	i++;
	
	//diagnosis of level 1 symptoms:----
	if(d1[9]=='D' )
	result=1;
	else if(d1[5]=='P'&& d1[6]=='H' && d1[7]=='H')
	result=1;
	else
	{
		for(j=0;j<10;j++)
		{
			if(d1[j]=='H'||d1[j]=='P'||d1[j]=='D'||d1[j]=='I')
			count++;
		}
		if(count>5)
		result=1;
	}
	while(getchar()!='\n');
	cls();
	if (result==1)
	printf("\n\n\n\tYou are DIABETIC\n\n");
	else printf("\n\n\n\tYou are NOT DIABETIC\n\n");
	return(result);	
}

int diagnostics2()   //Level 2 diagnostic
{
	int i=0,result=0,j,count=0;
	printf("Test for primary and secondary dibetics\nPress enter to start\n");
	//Getting level 2 symptoms :----
	do
	{
		while(getchar()!='\n');
		printf("PANCREATITIS(P/A)                 :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	++i;

	do
	{
		while(getchar()!='\n');
		printf("CARCINOMA(P/A)                    :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	++i;
	
	do
	{
		while(getchar()!='\n');
		printf("CIRHHOSIS(P/A)                    :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	++i;
	
	do
	{
		while(getchar()!='\n');
		printf(" HCTS  (H/L/N)                    :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='H'&&d1[i]!='L'&&d1[i]!='N');	
	i++;

	do
	{
		while(getchar()!='\n');
		printf("HEPATITIS(P/A)                    :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;
	
	do
	{
		while(getchar()!='\n');
		printf("HORMONAL DISORDER(P/A)            :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;
	
	do
	{	
		while(getchar()!='\n');
		printf("PANCREATECTOMY(P/A)               :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;
	
	//diagnosis of level 2 symptoms:----
	for(j=0;j<7;j++)
	{
		if(d1[j]=='H'||d1[j]=='P')
		count++;
	}
	if(count==7)
	result=1;
	cls();
	if (result==1)
	printf("\n\n\nIT IS SECONDARY DIABETES\n\n");
	else printf("\n\n\n\tIT IS PRIMARY DIABETES\n\n");
	return(result);	
}

int diagnostics3()   //Level 3 diagnostic
{
	int i=0,result=0,j,count=0;
	printf("Test for NON INSULIN DEPENDENT or INSULIN DEPENDENT DIABETES\n");
	//Getting level 3 symptoms :----
	do
	{
		while(getchar()!='\n');
		printf("AGE(young(Y)/Middle aged(M)/Elderly(E))                :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='Y'&&d1[i]!='M'&&d1[i]!='E');
	++i;

	do
	{
		while(getchar()!='\n');
		printf("BODY WEIGHT(normal(N)/Above normal(A)/Below normal(B)) :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='N'&&d1[i]!='A'&&d1[i]!='B');
	++i;
	
	do
	{
		while(getchar()!='\n');
		printf("DURATION (weeks(W)/Months(M)/Years(Y))                 :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='W'&&d1[i]!='M'&&d1[i]!='Y');
	++i;
	
	do
	{
		while(getchar()!='\n');
		printf("KETONUREA(P/A)                                         :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;

	do
	{
		while(getchar()!='\n');
		printf("AUTO ANTIBODIES(P/A)                                   :");
		scanf("%c",&d1[i]);
		d1[i]=toupper(d1[i]);
	}while(d1[i]!='P'&&d1[i]!='A');
	i++;
	
	//diagnosis of level 3 symptoms:----
	if((d1[0]=='Y')&&(d1[1]=='N')&&(d1[2]=='W')&&(d1[3]=='P')&&(d1[4]=='P')||
 
	 (d1[0]=='Y')&&(d1[1]=='B')&&(d1[2]=='W')&&(d1[3]=='P')&&(d1[4]=='P')||
 
	 (d1[0]=='Y')&&(d1[1]=='N')&&(d1[2]=='M')&&(d1[3]=='P')&&(d1[4]=='P')||
 
	 (d1[0]=='Y')&&(d1[1]=='N')&&(d1[2]=='Y')&&(d1[3]=='P')&&(d1[4]=='P'))
	result=0;
	else result=1;
	cls();
	if (result==1)
	printf("\n\n\nIT IS NON INSULIN DEPENDENT DIABETES\n\n");
	else printf("\n\n\n\tIT IS INSULIN DEPENDENT DIABETES\n\n");
	return(result);	
}

void display(struct patient pts)  //display details of patients
{
	printf("\n\n\n\nN A M E        :");
	puts(pts.name);	
	printf("A G E          :%d\n",pts.age);
	printf("W E I G H T    :%.2f\n",pts.wt);
	printf("H E I G H T    :%.2f\n",pts.ht);
	printf("S E X          :%c\nReport         :",pts.sex);
	puts(pts.report);
}
int main()
{
	int m,n,o,p,j,num,i,z;
	char namee[20],ch;
	
	welcome();
	cls();
	s: printf("\n\t\tCHOOSE OPERATION:\n\t1.ENTER DETAILS OF PATIENTS.\n\t2.SEARCH RECORDS\n\t3.EXIT\n");
	scanf("%d",&p);
	switch(p)
	{
		case 1:
					
				details();
				m=diagnostics1();
				printf("******** PRESS ENTER TO CONTINUE *********");
				while(getchar()!='\n');
				cls();
				if (m==0)
					strcpy(pts.report,"Not Diabetic");
				else 
				{
					n=diagnostics2();
					printf("******** PRESS ENTER TO CONTINUE *********");
					while(getchar()!='\n');
					cls();
					if (n==1)
					strcpy(pts.report,"Secondary Diabetic");
					else
					{
						o=diagnostics3();
						if (o==0)
							strcpy(pts.report,"INSULIN DEPENDENT DIABETES");
						else
							strcpy(pts.report,"NON INSULIN DEPENDENT DIABETES");
						printf("******** PRESS ENTER TO CONTINUE *********");
						while(getchar()!='\n');
						cls();
					}
				}
						
			    //display records
			
				display(pts);
				
			printf ("\n\nDo you to save the entry details to file?(y/n) ");
			scanf("%c",&ch);
			if(ch=='y'||ch=='Y')
			{	
				FILE *fp;
				fp=fopen("pat2.txt","a");
				
				{
					
					fprintf(fp,"\nN A M E        :");
					fputs(pts.name,fp);
					fprintf(fp,"\nA G E          :%d",pts.age);
					fprintf(fp,"\nW E I G H T    :%.2f",pts.wt);
					fprintf(fp,"\nH E I G H T    :%.2f",pts.ht);
					fprintf(fp,"\nS E X          :%c\nReport         :",pts.sex);
					fputs(pts.report,fp);
				}
				fclose(fp);
				fp=fopen("pat.dat","a+b");
				if(fp==NULL)
				{	
					printf("Unable to open file\n");
					goto s;
				}		
				fwrite(&pts,sizeof(struct patient),1,fp);
				fclose(fp);
			}
			break;			
		case 2:
			printf("\t****Search by name****\n\n\t");

						
				FILE *fp;
				printf ("Enter name you want to search: ");  //search by name
			//	scanf(" ");
			while(getchar()!='\n');
				gets(namee);
				z=0;
				while(namee[z])
				{
					namee[z]=toupper(namee[z]);
					z++;
				}
			        fp=fopen("pat.dat","rb");
				if(fp==NULL)
				{
					printf("Unable to open file ");
					goto s;
				}		
				while(fread(&pts,sizeof(struct patient),1,fp))
				{
					if(strcmp(pts.name,namee)==0)
					{					
						display(pts);
						printf("Press enter to continue\n");
						break; 
					}
				}
				fclose(fp);
				break;
		case 3: exit(0);
		default:printf("********wrong option*********");
	}
	while(getchar()!='\n');
	goto s;
}
		
