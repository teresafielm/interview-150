#include <cctype> // Librería necesaria para isalpha

class Solution {
public:
    bool isPalindrome(string s) {
        //remove non alphabetic
        string char_arr = "";
        int j=0;

        for(int i=0;i<=s.length()-1;i++) {
            if(std::isalnum(s[i])) {
                char_arr.push_back(std::tolower(s[i]));
                j++;
            }
        }
        
        int i=0;
        j--;

        while(i<j) {
            if(char_arr[j]!=char_arr[i]) {
                return false;
            }
            i++;
            j--;
        }
    return true;
    }
};