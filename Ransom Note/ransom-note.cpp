#include <string>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length() > magazine.length()) {return false;}
        for(int i=0;i<ransomNote.length();i++) {
            for(int j=0; j<magazine.length();j++) {
                if(ransomNote[i]==magazine[j]) {
                    magazine.erase(j,1);    
                    break;
                } else if(j==magazine.length()-1) {
                    return false;
                }
            }
        }
        return true;    
    }
};