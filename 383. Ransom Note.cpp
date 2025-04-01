class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> maga;

        for(int i=0;i<magazine.length();i++){
            maga[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(maga[ransomNote[i]]<=0){
                return false;
            }
            maga[ransomNote[i]]--;
        }
        return true;
    }
};