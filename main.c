
#include <stdio.h>
#include "myBank.h"



int main(){

double bank[LINE][ROW];
bankInit(bank);

 char x; 
 int y=1;
 int num;

 
while(y!=0){


 printOptions();
 scanf(" %c",&x);

 switch(x){

case 'O' :
   openAccount(bank);
    break;

case 'B' :
    
    printf("please enter account number:");
     

    if(scanf("%d",&num)!=1){
        printf("Failed to read the account number");
        break;
    }

     if(cheknum(num)==0){
         printf("Invalid account number");
         break;
     }

         BalanceInquiry(bank,num);
         
        break;
    



 case 'D' :
      
    printf("please enter account number:");
    
    if(scanf("%d",&num)!=1){
        printf("Failed to read the account number");
        break;
    }

     if(cheknum(num)==0){
         printf("Invalid account number");
         break;

     }else{
           DepositMoney (bank,num);
         }

 
        break;

 case 'W':
    
    printf("please enter account number:");

    if(scanf("%d",&num)!=1){
        printf("Failed to read the account number");
        break;
    }

     if(cheknum(num)==0){
         printf("Invalid account number");
         break;
     }else{
            Withrawal(bank,num);
         }

            break;

 case 'C':
   
    printf("please enter account number:");

    if(scanf("%d",&num)!=1){
        printf("Failed to read the account number");
        break;
    }

     if(cheknum(num)==0){
         printf("Invalid account number");
         break;
     }else{
            closeAcount (bank,num);
         }


        break;

 case 'I':
   Interst(bank);
   break;


 case 'P' :
    printAcounts(bank);
   break;


 case'E' :

    Exit(bank);
    y=0;
    
    break;

 default: printf("Invalid transaction type");
    break;


 }

}

return 1;

}