class Solution {
public:
    string removeOuterParentheses(string s)
    {
        int flag=0;
        string op;
        for(auto i :s)
        {
            if(i=='(')
            {
                if(flag>0)
                {
                    op+=i;
                }
                flag++;
            }
            else{
                if(flag>1)
                {
                    op+=i;
                }
                flag--;
                }
        }
        return op;
    }
};