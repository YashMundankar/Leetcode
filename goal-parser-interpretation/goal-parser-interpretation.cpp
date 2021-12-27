class Solution {
public:
    string interpret(string command) {
        string op;
        int i=0;
        while(i<command.length()){
            if(command[i]=='G'){
                op+='G';
                i++;
            }
            else if(command[i]=='(' && command[i+1]==')'){
                op+='o';
                i+=2;
            }
            else{
                op+="al";
                i+=4;
            }
        }
        return op;
        
    }
};