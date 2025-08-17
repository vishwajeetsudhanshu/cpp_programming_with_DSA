// write a function to find the longest common prefix string among an array of string
// given n strings consisting of digits from 0 to 9 return the index o string which has maximum value
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    // class Solution
    // {
    // public:
    //     string longestCommonPrefix(vector<string> &strs)
    //     {
    //         int n = strs.size();
    //         if (n == 1)
    //             return strs[0];
    //         sort(strs.begin(), strs.end());
    //         string first = strs[0];
    //         string last = strs[n - 1];
    //         string str = "";
    //         for (int i = 0; i < (min(first.size(), last.size())); i++)
    //         {
    //             if (first[i] == last[i])
    //             {
    //                 str += first[i];
    //             }
    //             else
    //                 return str;
    //         }
    //         return str;
    //     }
    // };
}