
class Solution {
public:
    string reverseWords(string s) {
        string myString = s;
        string resultString = "";
        string bufferString;
        istringstream myss(s);
        while(getline(myss,bufferString,' '))
        {
            std::reverse(bufferString.begin(), bufferString.end());
            resultString.append(bufferString);
            resultString.append(" ");
        }
        resultString = resultString.substr(0,resultString.size()-1);
        return resultString;
    }
};
