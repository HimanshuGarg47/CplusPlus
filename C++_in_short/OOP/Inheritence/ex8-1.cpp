#include <bits/stdc++.h>
using namespace std;

enum type_of_acc
{
    saving_account = 1,
    current_account = 2
};
class account
{
    string customer_name;
    long int acc_no;
    type_of_acc type_acc;

protected:
    float balance = 0.00;

public:
    void display()
    {
        cout << "Balance = " << balance << "\n";
    }
    float get_balance()
    {
        return balance;
    }
    void set_type_of_account(type_of_acc i)
    {
        type_acc = i;
    }
};

class sav_acct : public account
{

public:
    void deposit(float a)
    {
        balance += a;
        cout << "Balance updated to: " << balance << "\n";
    }

    void compute_depost_interest(float interest = 12)
    {
        balance += (balance * (1.00 + interest) / 100);
    }

    void withdrawal(float a)
    {
        if (balance >= a)
        {
            balance -= a;
            cout << "Withdrawal successful\n";
        }
        else
        {
            cout << "Insuffienct ammount balance\n";
        }
    }
};

class cur_acct : public account
{
    float min_balance = 5000.00; // minimum balance to maintain
    float penalty = 250.00;

public:
    void check_minimum_balance()
    {
        if (balance < min_balance)
        {
            cout << "Your balance is " << min_balance - balance
                 << " less to maintain " << min_balance << "\n";

            balance = balance - penalty;
        }
    }
    void update_balance(float a)
    {
        balance += a;
    }
};
int main()
{
    sav_acct saving;
    saving.set_type_of_account(type_of_acc(1));
    saving.deposit(2000);
    saving.withdrawal(500);
    saving.display();
    saving.compute_depost_interest();
    saving.display();

    cur_acct current;
    current.set_type_of_account(type_of_acc(2));
    current.update_balance(4500);
    current.check_minimum_balance();
    current.display();
    current.update_balance(1000);
    current.display();
}