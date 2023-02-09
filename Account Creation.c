#include<stdio.h>
#include<conio.h>
#include <stdlib.h>


void main()
{

char acc_name[30];
int acc_password;

char name[30];
int password;
int i = 1;
do{
	
printf("Create your account: \n \n");

printf("Enter your account name \n");
scanf("%s", &acc_name);

printf("Enter your account password \n");
scanf("%d", &acc_password);

printf("You are successfully created your account \n");
}
while(i < 0);

system("cls");


printf("Account Created Succesfully \n");

printf("Log In your account \n");

printf("Enter your name \n");
scanf("%s", &name);

printf("Enter your password \n");
scanf("%d", &password);

int userName = strcmp(acc_name, name);

if (userName == 0 &&  acc_password == password) {
  printf("Succesfull Login \n");
  printf("Account Rupees: 20000");
} else {
 printf("Login Failed");
}
  
}
