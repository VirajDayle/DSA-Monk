#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    if (s.empty())
        return true;

    string check = "";
    for (char ch : s)
    {
        if (isalpha(ch))
        {
            check += tolower(ch);
        };
    }

    int n = check.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (check[i] != check[n - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
}