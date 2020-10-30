/*



*/

set<int> happy {1,7};
    bool isHappy(int n)
    {
        int x=0;

       while(n>0)
       {
           x= x+((n%10) * (n%10));
           n/=10;
       }
        if(x<10)
        {
             return happy.find(x)!=happy.end();
        }
        return isHappy(x);
    }
