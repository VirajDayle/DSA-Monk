#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";

    if (strs.empty())
        return "";

    for (int i = 0; i < strs[0].size(); i++)
    {
        char ch = strs[0][i];
        bool isAllMatch = true;

        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].size() || strs[j][i] != ch)
            {
                isAllMatch = false;
                break;
            }
        }

        if (!isAllMatch)
            break;
        ans += ch;
    }
    return ans;
}

int main()
{
    vector<string> strs = {"flower", "flow", "floght"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}