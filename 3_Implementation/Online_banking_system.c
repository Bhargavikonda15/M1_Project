#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Main_online_banking_system.h"
struct user 
{
	char phone[50];
	char ac[50];
	char password[50];
	float balance;
};

void Adding_fund()
{
	struct user user;
	char filename[50],phone[50],password[50],phone2[50];
	FILE *fp,*fptr;
	int opt,choice;
	int amount;
	char cont = 'y';
    system("clear");
    printf("Enter amount to be added:\t");
    scanf("%d",&amount);
    user.balance += amount;
    fp = fopen(phone,"w");
    fwrite(&user,sizeof(struct user),1,fp);
    if(fwrite !=0) printf("\n\nYou have depostied Rs.%d",amount);
    fclose(fp);
}
void Withdrawn_amount()
{
	struct user user;
	char filename[50],phone[50],password[50],phone2[50];
	FILE *fp,*fptr;
	int opt,choice;
	int amount;
	char cont = 'y';
	system("clear");
	printf("Enter withdrawl amount:\t");
	scanf("%d",&amount);
	user.balance -= amount;
	fp = fopen(phone,"w");
	fwrite(&user,sizeof(struct user),1,fp);
	if(fwrite !=0) printf("\n\nYou have withdrawn Rs.%d",amount);
	fclose(fp);
}
