#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int carry = 0, temp1, temp, sum, num1_len = num1.length(), num2_len = num2.length();
        string res = "";
        while (num1_len || num2_len)
        {
            temp = 0;
            if (num1_len && num2_len)
            {
                temp = (int)((num1[num1_len-- - 1] + num2[num2_len-- - 1]) - 96);

                temp += carry;
                carry = 0;
                res += (temp % 10)+48;
                if (temp > 9)
                    carry = (temp / 10) % 10;

                // num1_len--;
                // num2_len--;
            }

            else if (num1_len && !num2_len) // 1  0
            {
                temp = (int)(num1[num1_len-- - 1] - 48);

                temp += carry;
                if (temp > 9)
                    carry = (temp / 10) % 10;
                else
                    carry = 0;


                res += (temp % 10)+48;
                
                // num1_len--;
            }
            else 
            {
                temp = (int)(num2[num2_len - 1] - 48);

                temp += carry;
                carry = 0;
               res += ((temp % 10))+48;
                if (temp > 9)
                    carry = (temp / 10) % 10;
                num2_len--;
            }
           
        }
        if(carry)
        {
            res += carry+48;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

int main()
{
    string num1, num2;
    num1 = "000123456789", num2 = "987654321";
    Solution solution;
    cout << solution.addStrings(num1, num2);
}