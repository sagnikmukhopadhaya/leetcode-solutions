class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp=x;
        long long b=0;
        while(temp!=0)
        {
            int d=temp%10;
            b=b*10+d;
            temp=temp/10;
        }
        return (b==x);
    }
};