//scissor paper rock game or snake gun water
//scissor wins over paper, paper wins over rock and rock wins over scissor
#include<stdio.h>
#include<stdlib.h>  //to genetare randome numbers 
#include<time.h>
int competition(char you,char comp);
int main(){
     char you,comp;
        //randome number generator
     srand(time(0)); 
   int number=rand()%100+1;
   if(number<33){
    comp='s';
   }
   else if(number>33 && number<66){
    comp='r';
   }
   else{
    comp='p';
   }
    printf("Enter 's' for scissor, 'p' for paper, and 'r' for rock :");
    scanf("%c",&you);
    int result = competition(you,comp);
    printf("You chose %c and computer chose %c:\n",you,comp);
    if(result==0){
        printf("Game Draw\n");
    }
    else if(result==1){
        printf("You won!\n");
    }
    else{
        printf("You lose!\n");
    }
    return 0;
}
int competition(char you,char comp){
    //draw condition
    //returns 0 if its draw 1 if you win -1 if computer wins
    if(you==comp){
       return 0;
    }
    //not draw condition
    if(you=='s'&&comp=='p'){
        return 1;
    }
    else if(you=='p'&& comp=='s'){
        return -1;
    }
    if(you=='r'&&comp=='s'){
        return 1;
    }
    else if(you=='s'&&comp=='r'){
        return -1;
    }
    if(you=='p'&&comp=='r'){
        return 1;
    }
    else if(you=='r'&&comp=='p'){
        return -1;
    }
 
}