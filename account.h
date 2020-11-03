#include <iostream>
#include <string.h>

#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED


class Account
{
    int m_accnumber;
    std:: string m_accName;
    double m_balance;

public:

    Account();  // Default
    Account(int num, std:: string name, double bal);
    Account(int num, std:: string name);
    Account(const Account &a); // copy constructor
    void debit(double amount);
    void credit(double amount);
    void display();
    double get_balance()const;

};



#endif // ACCOUNT_H_INCLUDED
