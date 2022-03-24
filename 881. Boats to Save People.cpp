class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int i=0,j=people.size()-1;
        int boat = 0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                // Light and heavy person both on the boat.
                i++;
                j--;
            }
            else{
                // Only the heavy person on the boat.
                j--;
            }
            boat++;
        }
        return boat;
    }
};