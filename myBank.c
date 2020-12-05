
#include <stdio.h>
#include "myBank.h"  


int bankInit(double arr[LINE][ROW]){
for(int i=0;i<ROW-1;i++){
   
        arr[0][i]=0; //amount of mony 
        arr[1][i]=-1;//closed acoount 


}
return 1;
}

int  cheknum(int num ) {
 
    if( 901<= num && num<950) {
        return 1;}
   
        return 0;
 
 }

  int printOptions(){
printf("\n\n Please choose a transaction type: \n O-Open Account \n B-Balance Inquiry \n D-Deposit \n W-Withdrawal \n C-Close Account \n I-Interest \n P-Print \n E-Exit \n");
 return 1;
 }
  

 int i=0;
int openAccount(double arr[LINE][ROW]){

    int notocupied=0;
    double amount=0.0;
    
  
    while(arr[1][i]!=-1 && i<49){
        i++;
        
    }

    notocupied=i;
   

    printf("Please enter amount for deposit:");


       if( scanf("%lf",&amount)!=1){
            printf("Failed to read the amount");
            return 0;
       }

       if(amount<0){
           printf("Invalid Amount");
           return 0;
       }
        
            arr[0][notocupied]=amount;
             arr[1][notocupied]=0;
          printf(" New account number is: %d" ,901+notocupied);
        

        return 1;
   

}

int  BalanceInquiry( double arr[LINE][ROW] , int n){
    if(arr[1][n-901]!=-1){
   
   printf("The balance of account number %d is %0.2lf:",n,arr[0][n-901]);


    }else{
       printf( "This account is closed" );
       return 0;
    }

    return 1;
}

   int DepositMoney (double arr[LINE][ROW],int n){

     double amount=0.0;
    if(arr[1][n-901]!=-1){
        printf("Please enter the amount to deposit:");
        
         if( scanf("%lf",&amount)!=1){
            printf("Failed to read the amount");
            return 0;
        }

        if(amount<0){
            printf("Cannot deposit a negative amount");
            return 0;
        }


        arr[0][n-901]=arr[0][n-901]+amount;
        printf("the new balance is %0.2lf:",arr[0][n-901]);
        return 1;
        
    }else{
        printf("This account is closed");
        return 0;
    }

    return 1;

   }

   int  Withrawal(double arr[LINE][ROW],int n){
       double amount=0.0;

     if(arr[1][n-901]!=-1){
        printf("Please enter the amount to withdraw:");
        
        if( scanf("%lf",&amount)!=1){
            printf("Failed to read the amount");
            return 0;
        }

        if (amount>arr[0][n-901]){
            printf("Cannot withdraw more than the balance");
            return 0;
        }else
        {
        arr[0][n-901]=arr[0][n-901]-amount;
        printf("The new balance is %0.2lf:",arr[0][n-901]);
        
        
        }

    }else {
        printf("This account is closed");
        return 0;
    }
    return 1;
   }


    int  closeAcount (double arr[LINE][ROW],int n){
      
      if(arr[1][n-901]!=-1){
         arr[1][n-901]=-1;
         printf("Closed account number %d", n);

      }else{
          printf("This account is already closed");
          return 0;
      }
      
      return 1;

    }


    int Interst (double arr[LINE][ROW]){
        int rate=0;
       printf("Please enter interest rate:");
       if(scanf("%d",& rate)!=1){
           printf("Failed to read the interest rate");
           return 0;
       }
       if(rate<0 || rate>100){
           printf("Invalid interest rate");
           return 0;
       }
     double rateCal=(100+rate)/100;
     for(int i=0; i<ROW-1;i++){
         if(arr[1][i]!=-1){
             arr[0][i]=(arr[0][i])*rateCal;
         }
     }
          
    return 1; 

    }

     int  printAcounts(double arr[LINE][ROW]){
         int i=0;

        while(i<49 && arr[1][i]!=-1){

          
              printf("the balance of acoount number %d is %0.2lf",901+i,arr[0][i]);
            
              i++;
      }

       return 1;

     }

     
//return 0 at the end of for??
   int Exit(double arr[LINE][ROW]){
        for(int i=0; i<49;i++){
            arr[1][i]=-1;


        }

    return 1;


   }
    






















