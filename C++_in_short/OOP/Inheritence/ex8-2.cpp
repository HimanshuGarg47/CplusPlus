#include <bits/stdc++.h>
using namespace std;

enum type_of_acc
{
    saving_account = 1,
    current_account = 2
};
class account
{

protected:
    long int acc_no;
    string customer_name;
    type_of_acc type_acc;
    float balance = 0.00;

public:
    long int get_accountno()
    {
        return acc_no;
    }

    string get_name()
    {
        return customer_name;
    }

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
    sav_acct(string name, float a = 0)
    {
        customer_name =  name;
        acc_no = 1 + (rand() % (99999));
         type_acc = type_of_acc(1);
         balance = a;
    }
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
    cur_acct(string name, float a = 0)
    {
        customer_name =  name;
        acc_no = 1 + (rand() % (99999));
         type_acc = type_of_acc(2);
         balance = a;
    }

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
    sav_acct saving("Himanshu", 2000);
    cout << "Account number is : " << saving.get_accountno() << endl;
    cout << "Customer name is : " << saving.get_name() << endl;

    saving.withdrawal(500);
    saving.display();
    saving.compute_depost_interest();
    saving.display();

    cur_acct current("Hitesh", 4500);
    cout << "Account number is : " << current.get_accountno() << endl;
    cout << "Customer name is : " << current.get_name() << endl;
    current.update_balance(4500);
    current.check_minimum_balance();
    current.display();
    current.update_balance(1000);
    current.display();
}