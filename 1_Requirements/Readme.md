 ## Requirements
# Introduction
The The main objective of this “Online banking system” which is developed in “C” is to provide a flexible solutions for banking industry. With this system both type of users such as bank customers and working personnel of the particular bank will find easy to use and able to perform all their operations using this system. This system enable its users to open and close the bank account. Customers will able to withdraw and deposit amount to their particular account. It will also able to generate transactions on money for particular customer account.
The operations which can be performed by the bank personnel are: 
Login account, Register an account, a user can deposit money as well as withdraw a money, a user can change password etc.,
# Defining System 
Design and testing operations of Online banking system using unit testing  process .
# SWOT analysis
* Strengths: Innovative, User-friendly.
* Weakness: Failed to login on more attempts, If there’s a power outage, or if servers go down at that time we unable to make any transactions.
* Opportunities:  Loan solution for small and medium enterprises.
* Threats: Internet banking involves a lot of legal issue.
# 4’W and 1’H
* What:  Online banking system
* Where: Commercial banks, Central and national banks.
* When: Need to transfer ,deposit ,withdraw an amount .
* How: User need to take input as customers password and account number then it gives  an output as your account is registered.
# Detail Requirements
## High Level Requirements
### Customer 
We mention to what the customer needs to do on internet banking system and we are going to go through these needs and how the customer can do it. 
 ### Login 
### Definition
 For the users to be able to use this system, they have to enter username and password which they have created before and been saved in the database in the Login page. The user might be a customer or an Admin also.
*Inputs: Username and password. 
* Outputs: The system will state whether inputs are correct or not.

### Adding fund and withdraw amount
### Definition 
In function deposit and withdraw , amount is taken as input (in float) and is then added/subtracted to the balance. thus resultant balance is printed in next line. amount of money available in the account to process a fund withdrawal.
* Inputs: amount, Username and password. 
* Outputs:  displays the deposited money and withdraw the money.

### Transfer Funds 
### Definition
 Transfer Funds allows customer to transfer funds between authorized accounts – own personal accounts. Requested transfer take place immediately or at a selected future date specified by customer.
* Inputs: amount, target account. Also if he/she wants to enter his/her e-mail, and select the current account or saving account. 
* Outputs: the system will display Transfer Funds function for transfer funds for display the transaction he/she done.

### Change password
### Definition
This module helps consumers to change their passwords.so users can easily access when they want to change their password
* Inputs: old password ,new password
* outputs: Displays the new password.

# Low Level Requirements
### Increase Customer Satisfaction
 Internet banking system must allows customers to access banking services 24 hours a day, 365 days a year with minimum downtime period for backup and maintenance.
### Backup, recovery & business continuity
 Banks should ensure adequate back up of data as may be required by their operations. Banks should also have, well documented and tested business continuity plans that address all aspects of the bank’s business 
### Account ID and Password (PIN) Protection 
User Account ID and Password (PIN) protection occurs at the first level within the Internet Banking System. To access Internet Banking, users are required to enter an Account ID and password. Without these, access to the Internet Banking System is denied. Special password characters are used as required :!@#$%^&*()_+-=[]{}|\;:’”, /?
### Failed Log-on Attempts 
As an added security feature, the Internet Banking System is denied access after a pre-determined number of failed log-on attempts. If users have been locked out due to exceeding the pre-determined number of log-on attempts, the users must contact the Bank in order to be reinitialized. 
 ### Encryption 
In addition to password protection, we ensures server authentication by using the latest techniques of data encryption. Data encryption is a way of translating data into a form that is unintelligible without a deciphering mechanism.
                                          

