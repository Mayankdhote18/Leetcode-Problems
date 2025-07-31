class Solution {
public:
    int secondHighest(string s) {
        int larg=-1 ;
        int slarg = -1;
        for (char c: s)
        {
            if (isdigit(c))
            {
                int digit= c-'0';
                if( digit > larg)
                {
                    slarg= larg;
                    larg = digit;
                }
                else{
                    if(digit<larg && digit>slarg)
                    {
                        slarg = digit;
                    }
                }
            }
         
        }
        return slarg;
    }


};