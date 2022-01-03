class Solution {
public:
    int check(char ch){
        if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'|| ch=='I'||ch=='O'||ch=='U'){
            return 1;
        }
        return 0;
    }
    
    bool halvesAreAlike(string s) {
        int i=0,j=s.length()/2;
        int c1=0,c2=0;
        while(j<s.length()){
            if(check(s[i])){
                c1++;
            }
            if(check(s[j])){
                c2++;
            }
            i++;
            j++;
        }
        return c1==c2;
        
    }
};