#include <unordered_set>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        static unordered_set<int>visited;
        if (n==1)
        {
            visited.clear();
            return true;
        }
        if(visited.find(n)!=visited.end())
        {
            visited.clear();
            return false;
        }
        visited.insert(n);
        int temp=n;
        int a;
        int sqsum=0;
        while (temp!=0)
        {
            a=temp%10;
            sqsum=sqsum+(a*a);
            temp=temp/10;
        }
           return isHappy(sqsum);

        
    }
};