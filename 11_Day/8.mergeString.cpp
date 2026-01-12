#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    int nw1 = word1.length(), nw2 = word2.length();
    int i = 0, j = 0;

    string res = "";

    while (i < nw1 && j < nw2)
    {
        res += word1[i++];
        res += word2[j++];
    }

    res += word1.substr(i);
    res += word2.substr(j);

    return res;
}

int main()
{
    string word1 = "abc";
    string word2 = "pqr";
    cout << mergeAlternately(word1, word2);
}