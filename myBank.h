#ifndef MYBANK_H
#define MYBANK_H 

#define LINE 2
#define ROW 50



int openAccount(double arr[LINE][ROW]);
int  BalanceInquiry( double arr[LINE][ROW] , int n);
int DepositMoney (double arr[LINE][ROW],int n);
int  Withrawal(double arr[LINE][ROW],int n);
int  closeAcount (double arr[LINE][ROW],int n);
int Interst (double arr[LINE][ROW]);
int  printAcounts(double arr[LINE][ROW]);
int Exit(double arr[LINE][ROW]);
int printOptions();
int bankInit(double arr[LINE][ROW]);
int cheknum(int num );


#endif



