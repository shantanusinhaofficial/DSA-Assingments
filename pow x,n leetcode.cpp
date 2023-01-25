class Solution {
public:
double pov(double x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        return x*pov(x,n-1);
    }
    double myPow(double x, int n) {
        if(n<0)
        {
            int temp=abs(n);
            return 1/(pov(x,temp));
        }
        return pov(x,n);
    }
    
};
