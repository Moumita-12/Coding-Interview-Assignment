//we use 2 functions for this problem
//here the function to check palindrome using recursion
bool checkPalindeome(string s, int i, int j) {
       if(i>=j) return true;

       if(s[i]!=s[j]) return false;

       return checkPalindeome(s,i+1,j-1);
   }

// the function by which the string enters to the function for checking palindome 
 bool isPalindrome(string s) {

        int i=0;
        int j = s.length()-1;

        return checkPalindeome(s,i,j); 
        
    }

// Let, n = length of the string
// Time complexiety = O(n) 
// Space complexiety = O(n) , here maximum depth of the recursion is equal to the length of the string and space change with the value of length(n)
