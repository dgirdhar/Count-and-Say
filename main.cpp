class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        
        for (int i = 2; i <= n; ++i) {
            string temp = "";
            char ch = res[0];
            int counter = 1;
            
            for (int j = 1; j < res.size(); ++j) {
                if (res[j] == ch) {
                    counter++;
                }
                else {
                    temp += char(counter + 48);
                    temp += ch;
                    
                    counter = 1;
                    ch = res[j];
                }                
            }
            
            temp += char(counter + 48);
            temp += ch;
            
            res = temp;
            
        }
        
        return res;
    }
};
