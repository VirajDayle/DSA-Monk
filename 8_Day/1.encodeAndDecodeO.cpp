#include <bits/stdc++.h>
using namespace std;

string encode(vector<string> &strs)
{
    if (strs.empty())
        return "";
    string ans;
    for (string &s : strs)
    {
        ans += to_string(s.size()) + '#' + s;
    }
    return ans;
}

vector<string> decode(string s)
{
    if (s.empty())
        return {};
    vector<string> ans;
    int n = s.length();
    int i = 0;
    while (i < n)
    {
        int len = 0;
        while (s[i] != '#')
        {
            len = len * 10 + (s[i] - '0');
            i++;
        }
        i++;
        ans.push_back(s.substr(i, len));
        i = i + len;

    }
    return ans;
}

int main()
{
    vector<string> arr = {"Hello", "world"};
    string s = encode(arr);
    cout << s << endl;
    vector<string> ans = decode(s);
    for (string i : ans)
    {
        cout << i << " ";
    }
}