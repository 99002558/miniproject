#include "account.h"
#include <iostream>
#include <string.h>


Account :: Account():m_accnumber(0), m_accName(""), m_balance(0.0){} // default

Account :: Account(int num, std:: string name, double bal): m_accnumber(num), m_accName(name), m_balance(bal) {} // parameterized

Account:: Account(int num, std:: string name): m_accnumber(num), m_accName(name), m_balance(0.0) {}


Account:: Account(const Account &a) : m_accnumber(a.m_accnumber), m_accName(a.m_accName), m_balance(a.m_balance) {} // copy constructor

void Account::debit(double amount)
    {
       m_balance = m_balance - amount;
    }

void Account::credit(double amount)
    {
        m_balance = m_balance + amount;
    }

double Account::get_balance()const
    {
        return m_balance;
    }

void Account::display()
    {
        std::cout <<  m_accnumber<<"," <<  m_accName <<"," << m_balance <<std::endl ;
    }

