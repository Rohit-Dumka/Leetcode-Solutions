class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(string i: patterns)
            if(word.find(i)!=-1)
                count++;
        return count;
    }
};