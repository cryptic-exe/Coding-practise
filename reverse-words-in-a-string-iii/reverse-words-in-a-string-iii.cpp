class Solution {
public:
    string reverseWords(string s) {
        vector<int> sp;
        sp.push_back(0);
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==32){
                sp.push_back(i+1);
            }
        }
        sp.push_back(s.size()+1);
        for(int i=0;i<sp.size()-1;i++){
            // if(sp[i]==0||sp[i]==sp.size()-1)
            //     reverse(s.begin()+sp[i],s.begin()+(sp[i+1]-1));
            reverse(s.begin()+sp[i],s.begin()+(sp[i+1]-1));
        }
        return s;
    }
};