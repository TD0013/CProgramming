#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>

char x[10];//the "Press any key to start" input
int Level = 0;//Actual level you are on - depends on correct answers
int Question;//to store Question
int money=0;//to store money
char TempAns[100];//To store response
char Ans[100];//To Store correct answer
int Intermediate;//The questions 3,8,12
int Lf1=1;//No of avaible uses for 50-50 lifeline
int Lf2=1;//No of avaible uses for Flip the Question lifeline
int Order[20];//Collects the order in which the questions are to be asked
int j=1;//used in randomiser
int y, i,z;//used in loops
int CrtAns;//strcmp:Int to be zero for string compare if entered answer is correct
int Lfl1;//strcmp:Int to be zero for string compare if entered string is "Lifeline1", to use 50-50
int Lfl2;//strcmp:Int to be zero for string compare if entered string is "Lifeline2", to use Flip the question
int Quit;//strcmp:Int to be zero for string compare if entered string is "Quit"
int RdMe;//strcmp:Int to be zero for string compare if entered string is "ReadMe"
int GameEnd=1;//No of wrong answers permitted
int a,b,c,d;//Records if input is proper
int invalid=0;


//----------------------------------------//
void QuestionBank() //The collection of Questions To be asked
{
  switch (Order[Question])
  {
    case 1:
    {
      printf("What is 1+1\n" );
      printf("A]1\t\t\t\t\t");
      printf("B]2\n");
      printf("C]3\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"B");;
      break;
    }
    case 2:
    {
      printf("What is 1+2\n" );
      printf("A]1\t\t\t\t\t");
      printf("B]2\n");
      printf("C]3\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"C");;
      break;
    }
    case 3:
    {
      printf("What is 1+3\n" );
      printf("A]1\t\t\t\t\t");
      printf("B]2\n");
      printf("C]4\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"C");;
      break;
    }
    case 4:
    {
      printf("What is 1+4\n" );
      printf("A]1\t\t\t\t\t");
      printf("B]2\n");
      printf("C]5\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"C");;
      break;
    }
     case 5:
    {
      printf("What is 1+5\n" );
      printf("A]1\t\t\t\t\t");
      printf("B]2\n");
      printf("C]6\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"C");;
      break;
    }
     case 6:
    {
      printf("What is 1+6\n" );
      printf("A]1\t\t\t\t\t");
      printf("B]7\n");
      printf("C]9\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"B");;
      break;
    }
     case 7:
    {
      printf("What is 1+7\n" );
      printf("A]8\t\t\t\t\t");
      printf("B]2\n");
      printf("C]1\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"A");;
      break;
    }
     case 8:
    {
      printf("What is 1+8\n" );
      printf("A]1\t\t\t\t\t");
      printf("B]2\n");
      printf("C]8\t\t\t\t\t");
      printf("D]9\n");
      strcpy(Ans,"D");;
      break;
    }
     case 9:
    {
      printf("What is 1+9\n" );
      printf("A]17\t\t\t\t\t");
      printf("B]20\n");
      printf("C]1\t\t\t\t\t");
      printf("D]10\n");
      strcpy(Ans,"D");;
      break;
    }
     case 10:
    {
      printf("What is 1+10\n" );
      printf("A]18\t\t\t\t\t");
      printf("B]11\n");
      printf("C]14\t\t\t\t\t");
      printf("D]23\n");
      strcpy(Ans,"B");;
      break;
    }
     case 11:
    {
      printf("What is 1+11\n" );
      printf("A]14\t\t\t\t\t");
      printf("B]12\n");
      printf("C]29\t\t\t\t\t");
      printf("D]30\n");
      strcpy(Ans,"B");;
      break;
    }
     case 12:
    {
      printf("What is 1+12\n" );
      printf("A]19\t\t\t\t\t");
      printf("B]2\n");
      printf("C]13\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"C");;
      break;
    }
     case 13:
    {
      printf("What is 1+13\n" );
      printf("A]123\t\t\t\t\t");
      printf("B]29\n");
      printf("C]190\t\t\t\t\t");
      printf("D]14\n");
      strcpy(Ans,"D");;
      break;
    }
     case 14:
    {
      printf("What is 1+14\n" );
      printf("A]14\t\t\t\t\t");
      printf("B]22\n");
      printf("C]15\t\t\t\t\t");
      printf("D]0\n");
      strcpy(Ans,"C");;
      break;
    }
     case 15:
    {
      printf("What is 1+15\n" );
      printf("A]16\t\t\t\t\t");
      printf("B]19\n");
      printf("C]37\t\t\t\t\t");
      printf("D]10\n");
      strcpy(Ans,"A");;
      break;
    }
    case 16:
   {
     printf("What is 1+16\n" );
     printf("A]18\t\t\t\t\t");
     printf("B]19\n");
     printf("C]13\t\t\t\t\t");
     printf("D]17\n");
     strcpy(Ans,"D");;
     break;
   }
   case 17:
   {
    printf("What is 1+17\n" );
    printf("A]1364\t\t\t\t\t");
    printf("B]19\n");
    printf("C]1356\t\t\t\t\t");
    printf("D]18\n");
    strcpy(Ans,"D");;
    break;
  }
  case 18:
  {
   printf("What is 1+18\n" );
   printf("A]1364\t\t\t\t\t");
   printf("B]19\n");
   printf("C]1356\t\t\t\t\t");
   printf("D]14\n");
   strcpy(Ans,"B");;
   break;
  }
   case 19:
  {
  printf("What is 1+19\n" );
  printf("A]1364\t\t\t\t\t");
  printf("B]19\n");
  printf("C]1356\t\t\t\t\t");
  printf("D]20\n");
  strcpy(Ans,"D");;
  break;
   }
   case 20:
  {
    printf("What is 1+20\n" );
    printf("A]434\t\t\t\t\t");
    printf("B]19\n");
    printf("C]21\t\t\t\t\t");
    printf("D]140\n");
    strcpy(Ans,"C");;
    break;
  }
  }
  return;
}

//----------------------------------------//
void Prize(Level) //money to be assigned to "money"
{
    switch(Level)
    {
        case 1 : money=1000;
                    break;
        case 2 : money=2000;
                    break;
        case 3 : money=3000;
                    break;
        case 4 : money=5000;
                    break;
        case 5 : money=10000;
                    break;
        case 6 : money=20000;
                    break;
        case 7 : money=40000;
                    break;
        case 8 : money=80000;
                    break;
        case 9 : money=160000;
                    break;
        case 10 : money=320000;
                    break;
        case 11 : money=640000;
                    break;
        case 12 : money=1250000;
                    break;
        case 13 : money=2500000;
                    break;
        case 14 : money=5000000;
                    break;
        case 15 : money=10000000;
                    break;
        default : money = 0;
                    break;
    }
}

//----------------------------------------//
void ReadMe()//Read Me In-game
{
  printf("\n\nWelcome to Kaun Banega Crorepati\n" );
  printf("The Rules:\n");
  printf("\tYou Will Get 15 Questions the awards of which vary from Rs1000 to Rs10000000\n");
  printf("\tYou can Quit at any point in the game by typing 'Quit'\n");
  printf("\tEach Question has 4 options and you must type the correct option(In Caps) to proceed to the next question\n");
  printf("\tTo use the Lifeline 50-50, type 'Lifeline1'\n" );
  printf("\tTo use the Lifeline Flip the Question, type 'Lifeline2'\n" );
  printf("\tYou Can Only use each lifeline once\n" );
  printf("\tYou Can read These instructions At any moment by writing 'ReadMe' \n" );
  printf("\n\n* PS : Everything is case sensitive and care should be taken about the same\n" );

return;
}
//----------------------------------------//
void Answer()//The function to collect response from user and respond accordingly
{
  //to reset the previous values
  RdMe = 1;
  CrtAns=1;
  Lfl1 =1;
  Lfl2 = 1;
  Quit = 1;
  a=1;b=1;c=1;d=1;
  scanf("%s",TempAns);// prompt for response

  // the following are for assigning value "0" to response
  RdMe = strcmp("ReadMe",TempAns);//If text entered is "ReadMe" The integer RdMe becomes 0
  CrtAns = strcmp(TempAns,Ans);//If correct answer is entered, the integer CrtAns becomes 0
  Lfl1 = strcmp("Lifeline1",TempAns);//If text entered is "Lifeline1" The integer Lfl1 becomes 0
  Lfl2 = strcmp("Lifeline2",TempAns);//If text entered is "Lifeline2" The integer Lfl2 becomes 0
  Quit = strcmp("Quit",TempAns);//If text entered is "Quit" The integer Quit becomes 0

  //to check if input is proper
  a = strcmp("A",TempAns);
  b = strcmp("B",TempAns);
  c = strcmp("C",TempAns);
  d = strcmp("D",TempAns);

  if (RdMe == 0)//If text entered is "ReadMe" The integer RdMe becomes 0; hence the Terms are displayed followed by the question again and response;
     {
       ReadMe();
       QuestionBank();
       Answer();
     }

  else if (a==0 || b==0||c==0||d==0)
    {
      if (CrtAns == 0) //If correct answer is entered, the integer CrtAns becomes 0, The level increases and prize won is displayed
      {
        Level++;
        Prize(Level);
        printf("\t\t\t*******Correct Answer*******\n\t\t\t\tYou Win Rs%d\n",money);
      }
      else//If wrong answer or response, Game Ends and player is dropped to last intermediate level
      {
        if (Level < 3) {
          Level =0;
          Prize(Level);
        }
        else if (Level < 8) {
          Level =3;
          Prize(Level);
        }
        else if (Level < 12) {
          Level =8;
          Prize(Level);
        }
        else {
          Level =12;
          Prize(Level);
        }
        printf("\t\t\t\t\t\t\t\tYou Win Rs%d\n",money);
        GameEnd = 0;
      }
    }

  else if(Lfl1 == 0)//Lifeline 50-50
  //If text entered is "Lifeline1" The integer Lfl1 becomes 0 and 50-50 is initiated
  //Instead of removing the options, We decided to display that 2 options were wrong
  //We created different cases for each option
  //for each correct option, we randomly select which 2 options to give as wrong using rand() function
  //Given Example:
  /*
  Say the correct option is B,
  The string compares gives int OptB as zero
  Then it enters the - if statement specific to Option B
  In Option B, it randomly selects one of the 3 switch cases to Select which 2 options to display as wrong
  */

     {
      if (Lf1 == 1)//only initiates if it hasn't been used before
      {
        int OptA = strcmp("A",Ans);
        int OptB = strcmp("B",Ans);
        int OptC = strcmp("C",Ans);
        int OptD = strcmp("D",Ans);
        if (OptA == 0) {
          int situation1 = (rand()%3);
          switch (situation1) {
            case 0:
            {
              printf("The Wrong Options Are B and C \n");
              break;
            }
            case 1:
            {
              printf("The Wrong Options Are B and D \n");
              break;
            }
            case 2:
            {
              printf("The Wrong Options Are C and D \n");
              break;
            }
          }
        }

        else if (OptB == 0) {
          int situation2 = (rand()%3);
          switch (situation2) {
            case 0:
            {
              printf("The Wrong Options Are A and C \n");
              break;
            }
            case 1:
            {
              printf("The Wrong Options Are A and D \n");
              break;
            }
            case 2:
            {
              printf("The Wrong Options Are C and D \n");
              break;
            }
          }
        }

        else if (OptC == 0) {
          int situation3 = (rand()%3);
          switch (situation3) {
            case 0:
            {
              printf("The Wrong Options Are A and B \n");
              break;
            }
            case 1:
            {
              printf("The Wrong Options Are A and D \n");
              break;
            }
            case 2:
            {
              printf("The Wrong Options Are B and D \n");
              break;
            }
          }
        }
        else{
          int situation4 = (rand()%3);
          switch (situation4) {
            case 0:
            {
              printf("The Wrong Options Are A and C \n");
              break;
            }
            case 1:
            {
              printf("The Wrong Options Are A and B \n");
              break;
            }
            case 2:
            {
              printf("The Wrong Options Are B and C \n");
              break;
            }
          }
        }

        Lf1--;

        Answer();//To Collect response again

      }
      else//if Int Lf is zero, the lifeline has already been used
      {
        printf("You Have Already Used This Lifeline\n");
        Answer();
      }
     }
  else if(Lfl2 == 0)//Flip the question Lifeline
  //If text entered is "Lifeline2" The integer Lfl2 becomes 0 and Flip The Question is initiated
  //The Function Answer() was created specifically to incorporate this Lifeline
  //If this lifeline is used, the loop carries on in the normal way without the level increasing and the next question in the order is asked
       {
        if (Lf2 == 1)//If it hasn't been used before
        {
          printf("\n\nChanging the Question");
          Lf2--;
        }
        else//If Lf2 is zero, ie lifeline used before
        {
          printf("You Have Already Used This Lifeline\n");
          Answer();
        }
      }
  else if(Quit == 0)////If text entered is "Quit" and the user wants to quit
      {
        Prize(Level);
        printf("\t\t\t\t\t\t\t\tYou Win Rs%d\n",money);//prize is calculated and dispayed
        GameEnd = 0;//This int is important to break out of further loops
      }


  else//if an unexpected character is entered
      {
        printf("INVALID INPUT, PLEASE RETRY\n");
        invalid ++;
        if (invalid ==2) {
          printf("Please go through instructions\n");
          invalid = 0;
          ReadMe();
        }
        QuestionBank();
        Answer();
      }


return;
}
//----------------------------------------//
void Stats()//Function to display the Stats before each question
{
  printf("\n\n\n\n\nCurrent Question = %d\t\t\t\t",Level+1);
  printf("Previous Intermediate = %d\t\t\t\t\n",Intermediate);

  switch (Lf1) {//to display if the 50-50 lifeline is available
    case 0: {printf("50-50 Unavailable\t\t\t\t");break;}
    case 1: {printf("50-50 Available\t\t\t\t\t");break;}
  }
  switch (Lf2) {//to display if Flip the question available
    case 0: {printf("Flip the Question Unavailable\n");break;}
    case 1: {printf("Flip the Question Available\n");break;}
  }

  printf("Total Questions :15\n");

  printf("Current Winnings: Rs%d\t\t\t\t",money);//current winning
  Prize(Level+1);//to calculate the prize
  printf("Prize of current Question: Rs%d\n",money);
  Prize(Level);//to reset the int money
  if(Lf1==1)//Display Only when 50-50 Available
  {
    printf("To use 50-50, Type 'Lifeline1'\n");
  }
  if(Lf2==1)//Display When Flip The Question Available
  {
    printf("To use Flip the Question, Type 'Lifeline2'\n\n\n\n\n\n");
  }
  printf("\n\n\n");
    return;
}
//----------------------------------------//
void Randomizer()//this is a function to make the game less repetitive by shuffling the order of questions
{

y = abs((rand())%20 +1);//A Temporary number from 1 to 20 is taken in y

while (j<21) {//to define the array-order
  for (i = 0; i < j+1; i++) {//first we check of the number stored in y is already present in the array
    if (i==j && y!=Order[i]) {//if the number is not already present in array, we add it and proceed
      Order[j]=y;
      j++;
      break;
    }
    else if(y!=Order[i]){//if the number is present in order, we dont change anything and restart by changing the value in y
      continue;
  }
  else{break;}//That means The order of questions is complete
}
Randomizer();
}
return;
}
//----------------------------------------//

int main()
{ //this is to reset the variables for a new Game
Level = 0;
Prize(Level);
Intermediate =0;
Lf1=1;Lf2=1;
j=1;
GameEnd=1;



  srand(time(0));//Present to change the inputs of rand()
                 //in its absense, rand() just gave the same random output


  Randomizer();//To call Randomiser Function to select the order of questions



  printf("Press Enter To Continue\n");//start prompt
  gets(x);


  //You can enable the next line to get the order of the questions to be asked
  for (i = 1; i < 21; i++) {printf("Order-%d\n",Order[i] );}//sequence of questions


  printf("\nLETS BEGIN\n" );



  ReadMe();




  for ( Question= 1; Question < 21; Question++)
    {

      //to decide intermediate to display in stats
      if (Level < 3 )
      {
        Intermediate =0;
      }
      else if (Level < 8)
      {
        Intermediate =3;
      }
      else if (Level < 12 )
      {
        Intermediate =8;
      }
      else
      {
        Intermediate =12;
      }


      Stats();//To callback and display stats


      QuestionBank();//To display the question


      Answer();//to call back the function Answers to collect and evaluate response




      if(GameEnd == 0 || Level == 15)//to end loop
      {
        break;
      }


 }

if (Level == 15) //Display only when all answers correct
{

  printf("\t\t\t\t\t\t\t\tYou Win \n");
}

Prize(Level);//to calculate final winnigs

printf("\n\n\nFinal Winnings: Rs%d \n\n\n\n",money );//to display final money

printf("\nGAME OVER\n" );


printf("Type '0' to play again\n");
scanf("%d",&z);//prompt to play again

if (z == 0)
 {
  main();
 }

return 0;
}
