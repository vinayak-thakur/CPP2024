// // lc1
// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     string s;
//     cin>>s;
//     string ans = "";
//     int i=0;
//     while (i<s.length()){
//         if(s[i]==ans[ans.length()-1]&& ans.length()-1>=0){   // 2nd condition to check if there is no element in ans string then the length will be 0 and -1 will be -1 so total length will be -ve so to tackle thqt we made a condition that 
//             ans.pop_back();
            
//         }
//         else{
//             ans.push_back(s[i]);
//         }
//         i++;

//     }
//     cout<<ans;
// return 0 ;
//


// remove all occurences of a substring 
// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     string removeOccurrences(string s, string part) {
//         int position_of_substring= s.find(part);
//         while(position_of_substring !=(string::npos)){
//             s.erase(position_of_substring,part.length());   // original string me se part ko erase kardo agar part string ka index milta hai 
//             // hai to agar nahi milta hai to loop se bahar, agar mila to update kardo position ko fir se 
//              position_of_substring=s.find(part);

//         }
//         return s;
    
// return 0 ;
// }}

// valid palindrome 2
/*
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//      bool checker(string s, int i,int j) {
// while (i<=j){
//             if(s[i]!=s[j]){
//                 return false;
//             }
//             else{
//                 i++;
//                 j--;
//             }

//         }
//         return true;
//      }
        
    
//     bool validPalindrome(string s) {
//         // i will check firt if the first and the last character is same or not 
//         int i=0;
//         int j= s.length()-1;
//         while(i<=j){
//             if(s[i]==s[j]){
//                 i++;
//                 j--;
//             }
//             else {
//                 return checker(s,i+1,j) || checker(s,i,j-1);
//             }
//         } 
//         return true; // yaha tak code chal gaya iska matlab without any error bahar aagya yaani ki palindrome hai return true
//     }
// }

/* 
539. Minimum Time Difference
Medium
Topics
Companies
Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
 

Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","23:59","00:00"]
Output: 0

 */
/* 
 int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for(int i=0;i<timePoints.size();i++){
            string current_element = timePoints[i];
            int hours = stoi(current_element.substr(0,2));
            int mins = stoi(current_element.substr(3,2));
            int total_mins=60*hours + mins;
            minutes.push_back(total_mins);
        }
        sort(minutes.begin(),minutes.end());
        int mini = INT_MAX;
        for (int i=0;i<minutes.size()-1;i++){
            int diff= minutes[i+1]-minutes[i];
            mini= min(diff,mini);
        }
        int diff1= minutes[0]+1440-minutes[minutes.size()-1];
        mini=min(diff1,mini);
        int diff2= minutes[minutes.size()-1]-minutes[0];
        mini=min(diff2,mini);
        return mini;
    }

 */

/* 647. Palindromic Substrings
Solved
Medium
Topics
Companies
Hint
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c". */
/*   int findpalindrome(string s, int i,int j ){
        int count=0;
        while(i>=0&& j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        int n = s.length();
        // now checking odd length substrings in 0 to n-1 range
        for(int i=0;i<=n-1;i++){
            int oddAns=findpalindrome(s,i,i);
             // as in odd length strings i and j are in same position  
             count = count + oddAns;
              int evenAns=findpalindrome(s,i,i+1);
               count = count + evenAns;
             // as in even length strings i and j are in position i, i+1 that is next to each other for the first itration
        }
        return count;

    } */