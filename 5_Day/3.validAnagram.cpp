#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    int n = s.size(), m = t.size();
    if (n != m)
    {
        return false;
    }

    int freq[26] = {0};

    for (char c : s)
        freq[c - 'a']++;
    for (char c : t)
        freq[c - 'a']--;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t);
}
