#include <bits/stdc++.h>
using namespace std;

string encode(vector<string> &strs)
{
    if (strs.empty())
        return "";
    string ans;
    for (string s : strs)
    {
        ans += to_string(s.size()) + ',';
    }
    ans += '#';
    for (string s : strs)
    {
        ans += s;
    }
    return ans;
}

vector<string> decode(string s)
{
    if (s.empty())
        return {};
    int n = s.length();
    int i = 0;

    vector<int> lengths;
    while (s[i] != '#')
    {
        int len = 0;
        while (s[i] != ',')
        {
            len = len * 10 + (s[i] - '0');
            i++;
        }
        lengths.push_back(len);
        i++;
    }
    i++;
    vector<string> ans;
    for (int len : lengths)
    {
        ans.push_back(s.substr(i, len));
        i += len;
    }
    return ans;
}

int main()
{
    vector<string> arr = {"Hello", "world", "#raju"};
    string s = encode(arr);
    cout << s << endl;
    vector<string> ans = decode(s);
    for (string i : ans)
    {
        cout << i << " ";
    }
}