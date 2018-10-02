class Solution {
public:
    pair<string, string> makeEquivPair(string element)
    {
        set<char> odd;
        set<char> even;
        for(int i = 0; i < element.length(); i++)
        {
            if(i%2 == 0)
                even.insert(element[i]);
            else
                odd.insert(element[i]);
        }
        string oddString(odd.begin(), odd.end());
        string evenString(even.begin(), even.end());
        return make_pair(oddString, evenString);
    }
    int numSpecialEquivGroups(vector<string>& A)
    {
        set<pair<string, string>> B;
        for(auto a : A)
        {
            B.insert(makeEquivPair(a));
        }
        return B.size();
    }
};
