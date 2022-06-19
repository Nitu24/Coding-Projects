#include<stdio.h>
#include<windows.h>


char c1[15] = "BJP",c2[15] = "AAP", c3[15] = "SHIVSENA" , c4[15] =  "CONGRESS";


int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;

FILE *fp1 = fopen("Vote.txt", "a");

printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n \t\t1. %s ", c1);
printf("\t\t\t\t2. %s\n ", c2);
printf("\n \t\t3. %s ",c3);
printf(" \t\t\t4. %s\n", c4);
printf("\n \t\t\t5. %s", "None of These");

printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);

switch(choice){
    case 1:
	 votesCount1++; 
	 break;
    case 2:
	 votesCount2++;
	  break;
    case 3:
	 votesCount3++;
	 break;
    case 4:
	 votesCount4++; 
	break;
    case 5: 
	spoiledtvotes++;
	 break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");

fprintf(fp1, "%s = %d | %s = %d | %s = %d | %s = %d | Spoiled Votes = %d\n", c1, votesCount1, c2, votesCount2, c3,votesCount3, c4,votesCount4,spoiledtvotes);
fclose(fp1);
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", c1, votesCount1);
printf("\n %s - %d ", c2, votesCount2);
printf("\n %s - %d ", c3, votesCount3);
printf("\n %s - %d ", c4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getWinnerCandidate(){
    printf("\n\n  #### Winner Candidate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
  //  printf("[%s]",c1);
    {
    	printf("\t\t\t\t\t\t\t\t\t\t\t\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\n-----------------------------------------------------------------------------------------------");
 printf("\n\t***************************************************************************************");
    printf("\n\t************                                                   ************************");
    printf("\n\t************                     %s                          ************************",c1);
    printf("\n\t************                                                   ************************");
    printf("\n\t***************************************************************************************\n");
    printf("\n------------------------------------------------------------------------------------------------\n\n");
printf("\n");
printf("\n");
	}
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
//    printf("[%s]",c2);
{
	printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\n-----------------------------------------------------------------------------------------------");
 printf("\n\t***************************************************************************************");
    printf("\n\t************                                                   ************************");
    printf("\n\t************                     %s                           ************************",c2);
    printf("\n\t************                                                   ************************");
    printf("\n\t***************************************************************************************\n");
    printf("\n------------------------------------------------------------------------------------------------\n\n");
printf("\n");
printf("\n");
}

    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
//    printf("[%s]",c3);
{
		printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\n-----------------------------------------------------------------------------------------------");
 printf("\n\t***************************************************************************************");
    printf("\n\t************                                                   ************************");
    printf("\n\t************                   %s                       ************************",c3);
    printf("\n\t************                                                   ************************");
    printf("\n\t***************************************************************************************\n");
    printf("\n------------------------------------------------------------------------------------------------\n\n");
printf("\n");
printf("\n");
}
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
//    printf("[%s]",c4);
    {
    	printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\n-----------------------------------------------------------------------------------------------");
 printf("\n\t***************************************************************************************");
    printf("\n\t************                                                   ************************");
    printf("\n\t************                   %s                       ************************",c4);
    printf("\n\t************                                                   ************************");
    printf("\n\t***************************************************************************************\n");
    printf("\n------------------------------------------------------------------------------------------------\n\n");
printf("\n");
printf("\n");	
	}
    else
    printf("----- Error !!! No-winning situation----");    
    
    
    
}

int main()
{
system("cls");
int i;
int choice,age;

system("color E4");





printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\n");
printf("\n-----------------------------------------------------------------------------------------------");
 printf("\n\t***************************************************************************************");
    printf("\n\t************                                                   ************************");
    printf("\n\t************                 VOTING SYSTEM                     ************************");
    printf("\n\t************                                                   ************************");
    printf("\n\t***************************************************************************************\n");
    printf("\n------------------------------------------------------------------------------------------------\n\n");
      printf("    \n\t\t    ***********************************************");
      printf("     \n\t\t   **          WELCOME TO SAHYOG COLLEGE       **");
      printf("     \n\t\t  ***********************************************");
      printf("\n");
printf("\n");
printf("\n");

printf("PROJECT BY : TEAM RANDOM GUYZ\n");

start:
printf("\nEnter your age \n");
scanf("%d",&age);

if(age>=18)
{


do{	
	system("cls");
	printf("\n\n\t\tTHE LOKSABHA ELECTIONS 2022 ");
	printf("\n\n\t\t ###### Kindly Choose Below Options for Voting #####");
	printf("\n\n\t\t Press 1. Cast the Vote");
	printf("\n\t\t Press 2. Find Vote Count");
	printf("\n\t\t Press 3. Find Winner Candidate");
	printf("\n\t\t Press 0. Exit");

	printf("\n\n \t\tPlease enter your choice : ");
	scanf("%d", &choice);

switch(choice)
{
case 1: 
system("color 90");

system("cls");
castVote();
system("cls");
break;

case 2:
 
system("color B1");

system("cls");
votesCount();
printf("\n");
getch();
system("cls");

break;


case 3:
  system("color A1");
 system("cls");
 getWinnerCandidate();
 printf("\n");
 getch();
 system("cls");
break;
default: 
if(choice==0)
{
	printf("\n Thanks for Your Time ");
}
else
{
	system("color 40");
	printf("\n\nInvaild number entered please try again !!\n");
	getch();
}

}
}while(choice!=0);

////hold the screen
//getchar();


}
else 
{
	printf("Not eligible to vote");
	goto start;
}
return 0;

	
}
