#include <bits/stdc++.h>
using namespace std;

class MyHashSet
{
public:
    vector<int> arr;
    MyHashSet()
    {
    }

    void add(int key)
    {
        for (int i : arr)
        {
            if (i == key)
                return;
        }
        arr.push_back(key);
    }

    void remove(int key)
    {
        arr.erase(std::remove(arr.begin(), arr.end(), key), arr.end());
    }

    bool contains(int key)
    {
        for (int i : arr)
        {
            if (i == key)
            {
                return true;
            }
        }
        return false;
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

    cout << s.contains(5) << endl;   // 0
    cout << s.contains(10) << endl;  // 1
}