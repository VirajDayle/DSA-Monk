#include <bits/stdc++.h>
using namespace std;

class MyHashMap
{
    vector<int> mpp;
public:
    MyHashMap()
    {
        mpp.resize(1000001,-1);
    }

    void put(int key, int value)
    {
        mpp[key] = value;
    }

    int get(int key)
    {
        return mpp[key];
    }

    void remove(int key)
    {
        mpp[key] = -1;
    }
};

int main()
{
    MyHashMap mpp;
    mpp.put(2,3);
    cout<<mpp.get(2);
}