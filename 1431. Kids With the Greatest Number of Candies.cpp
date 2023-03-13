class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;

        int s=candies.size();

        for(int i=0;i<s;i++){
            bool x =true;
              for(int j=0;j<s;j++){
                if((extraCandies + candies[i])<candies[j]){
                    x=false;
                    break;
                 }
            }

            v.push_back(x);
        }

     return v;

    }
};
