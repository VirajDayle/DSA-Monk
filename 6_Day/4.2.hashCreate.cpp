#include <bits/stdc++.h>
using namespace std;

class MyHashSet
{
    vector<bool> set;

public:
    MyHashSet()
    {
        set.resize(1000001, false);
    }

    void add(int key)
    {
        set[key] = true;
    }

    void remove(int key)
    {
        set[key] = false;
    }

    bool contains(int key)
    {
        return set[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main()
{
    MyHashSet s;
    s.add(5);
    s.add(10);
    s.remove(5);

    cout << s.contains(5) << endl;  // 0
    cout << s.contains(10) << endl; // 1
}