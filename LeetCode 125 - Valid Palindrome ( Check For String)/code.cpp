class Solution {
public:
    bool isPalindrome(string s) {
      // yeh hamara string mai characters ko lower cases mai laane ke liye hai ..
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }

      // Checks if the character is alpha numeric or not if it is alphanumeric then it put on the new string - filtered else not 
        string filtered = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                filtered += s[i];
            }
        }

      // i is the starting point for us
        int i = 0;
      // j is the last element of the string for us
        int j = filtered.size() - 1;

      // if the first and the last part are same or equal then it will return true else will return false
        while (i <= j) {
            if (filtered[i] != filtered[j]) {
                return false; 
            }
            i++;
            j--;
        }

        return true;
    }
};
