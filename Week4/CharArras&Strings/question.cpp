// 1910. Remove All Occurrences of a Substring


class Solution {
public:
    string removeOccurrences(string full, string pattern) {
while(full.find(pattern)!= string :: npos){
    full.erase(full.find(pattern), pattern.length());
    }
       return full;
    }
};