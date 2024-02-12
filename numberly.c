#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include"functions.h"
int numberly_2(int g);
int numberly(int a);
int lvl3(int a);
int lvl4 (int d){
  int i,s;
  int arr[50];
  srand(time(NULL));
  printf("Given numbers :\n");
  for (i=0;i<50;i++){
    arr[i]=rand()%475+1;
    printf("%d\t",arr[i]);
  }
  // largest (arr,s);
  int max= arr[0];
  for (i=0;i<50;i++){
    if (arr[i]>max)
      max=arr[i];}
    printf("\n\nhighest number:");
  scanf("%d",&s);
  printf("%d",max);
    if(s==max)
    return 1;

  else
  return 0;
}

int main(void) {
  int c,a,b,d,e,x,h;
  c=numberly(c);
  for(int i=1;;i++){

  if(c==2){
  printf("\n\n\t###################### LevelTwo ######################\n\n\n");
  break;}
  else {
  c=numberly(c);}}
  a=numberly_2(a);
  for(int i=1;;i++){
  if(a==0){printf("\n\n\t****************** Level Completed "
 			"*******************\n");
  printf("\n\n\t###################### LevelTHREE ######################\n\n\n\a");
  break;}
  else {
  a=numberly_2(a);}}
  b=lvl3(h);
  for(int i=1;;i++){
  if(b==1){printf("\n\n\t****************** Level Completed "
 			"*******************\n");
  printf("\n\n\t###################### LevelFOUR ######################\n\n\n\a");
  break;}
  else
    {printf("\n\n\t\tYou Can do it!!!Play Again!!\n\n\n");

  b=lvl3(h);}}
  d= lvl4(e);
  for(int i=1;;i++){
  if(d==1){printf("\n\n\t****************** Level Completed "
 			"*******************\n");
  printf("\n\n\t######################*** YOU WIN!!! ***######################\n\n\n\a");

  break;}
  else {
        printf("\n\n\t\tYou Can do it!!!Play Again!!");
        printf("\n\n");
  d=lvl4(e);}}
   int i, j, n;
   char name[50]={'W','I','N','N','E','R'};
   int len;
   //printf("Enter your name: ");

   n=30;
   len = strlen(name);
   // Print upper part of the heart shape with stars
   for(i=n/2; i<=n; i+=2){
      for(j=1; j<n-i; j+=2){
         printf(" ");
      }
      for(j=1; j<=i; j++){
         printf("*");
      }
      for(j=1; j<=n-i; j++){
         printf(" ");
      }
      for(j=1; j<=i; j++){
         printf("*");
      }
      printf("\n");
   }
   // Prints lower triangular part with stars
   for(i=n; i>=1; i--){
      for(j=i; j<n; j++){
         printf(" ");
      }
      // Print the name on screen
      if(i == n){
         for(j=1; j<=(n * 2-len)/2; j++){
            printf("*");
         }
         printf("%s", name);
         for(j=1; j<(n*2-len)/2; j++){
            printf("*");
         }
      }else{
         for(j=1; j<=(i*2)-1; j++){
            printf("*");
         }
      }
      printf("\n");
   }


}
int numberly(int a){

        // create variable to store the random number between 1 and 100
	int random_number,sum =0;

	// reset random number generators
	srand(time(NULL));

	// generate a random number and take its modulo with 100 and add one
	// now we have a number between 1 and 100
	random_number = (rand() % 100) + 1;
	printf("\n\n\t******************READY SET GOOOO!!! "
		"*******************\n");
  printf("\n\n\t*********************[ Level"
 			"ONE ]***********************\n\n\n");
	// Ask for the first input from user
	printf("Enter a guess for the number between 1 and 100\n");

	// create variable to store user's guessed number and number of tries
	int user_guess, tries = 0, x,y=1,n=0;

	// start do while loop of the game
 //do{
   for(tries=1;tries<=10;tries++){

	   // take input from the user
	   scanf("%d", &user_guess);

	   // if the guess is larger than the random number
	   if(user_guess > random_number){

	       // tell the user the guess is greater than the number
	       printf("The number you entered is greater\n\n");
         printf("           Left %d chance(s)!!\n", 10 - tries);

	   }
	   // else if the guess is smaller than the random number
	   else if(user_guess < random_number){

	       // tell the user the guess is smaller than the number
	       printf("The number you entered is smaller\n\n");
	       printf("           Left %d chance(s)!\n", 10 - tries);}

	   // else the guess is equal to the random number
	   else if(user_guess == random_number){
            sum+=(11-tries);

	       // user won the game
	       printf("Correct Guess, You Won in %d tries!\n\n\a\a   Your point %d\n\n", tries, sum);
	       printf("\n\n\t****************** Level Completed "
 			"*******************\n\n\n");
	   break;}

	}
  if(tries==11){printf("\n\n\t****************** YOU LOSE "
 			"*******************\n\n");
 			printf("\n\n\t\tYou Can do it!!!Play Again!!");
        printf("\n");

     return 1;}
  else {return 2;}}
  int numberly_2(int r){
      int random_number,X,x,y,b,c,d,e, sum=0;
      srand(time(NULL));
      random_number = (rand() % 500) + 1;
      int s=(rand() % 500) + 1;
      int a=(rand() % 500) + 1;
      int n=(rand() % 500) + 1;
      int t=(rand() % 500) + 1;

      printf("Is %d a PERFECT number?(y=1/n=0):\n ",s);
      scanf("%d",&x);
      y=perfect(s);

      if(x==y){printf("     ***WOW***\n");
      sum++;}
      else {printf("Wrong Answer\n");}

      printf("Is %d a ARMSTRONG number?(y=1/n=0):\n ",random_number);
      scanf("%d",&b);
      int m= armstrong(random_number);

      if(b==m){printf("     ***Amazing***\n");
      sum++;}
      else {printf("Wrong Answer\n");}
      printf("Is %d a PRIME number?(n=1/y=0):\n ",a);
      scanf("%d",&c);
      int o= prime(a);

      if(c==o){printf("     ***WONDERFUL***\n");
      sum++;}
      else {printf("Wrong Answer\n");}

      printf("Is %d a PELINDROME number?(y=1/n=0):\n ",n);
      scanf("%d",&d);
      int p= pelindrome(n);

      if(d==p){printf("     ***FABULOUS***\n");
      sum++;}
      else {printf("Wrong Answer\n");}

      printf("Is %d a STRONG number?(y=1/n=0): \n",t);
      scanf("%d",&e);
      int q= strong(t);

      if(e==q){printf("     ***WELL DONE***\n");
      sum++;}
      else {printf("Wrong Answer\n");}
      if(sum<5){printf("\n\n\t****************** YOU LOSE "
 			"*******************\n");
 			printf("\n\n\t\tYou Can do it!!!Play Again!!");
        printf("\n");
     return 1;}

      else {printf("\n score %d\n\n",sum);
      return 0;}

 			}
int lvl3(int a){
   srand(time(NULL));

printf("Let's solve a quadratic equation");
double A=rand()%10+1;
  double b=rand()%10+1,c=rand()%10+1;
  double denom=2*A,rootpart=(pow(b,2)-(4*A*c));
  int root;
  printf("\n%.2lf(x^2) + %.2lfx + %.2lf\n\n",A,b,c);
  printf("The roots are???\n(real & not equal=1\n real &equal=2\n not real=3) : ");
  scanf("%d",&root);

  if (rootpart > 0) {
        int r1=1;
        if(r1==root)return 1;

    }

    // condition for real and equal roots
    else if (rootpart == 0) {int r2=2;
    if(r2==root){return 1;}}




    // if roots are not real
      else if(rootpart<0) { int r3=3;
      if(r3==root){return 1;}}
      else {return 0;}}
