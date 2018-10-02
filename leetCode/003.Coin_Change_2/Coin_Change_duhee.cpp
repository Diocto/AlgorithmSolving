class Solution {
public:
    map<pair<int,int>,int > solutions;
    int change(int amount, vector<int>& coins)
    {
        if(amount == 0)
            return 1;
        int sum = 0;
        sort(coins.begin(), coins.end(), greater<int>());
        for(int i = 0; i < coins.size(); i++)
        {
            sum += change(amount - coins[i], coins, i);
        }
        return sum;
    }
    int change(int amount, vector<int>& coins, int firstIndex) {
        if(amount < 0)
            return 0;
        if(amount == 0)
        {
            return 1;
        }
        int sum = 0;
        for(size_t i = firstIndex; i < coins.size(); i++) {
            int tmp;
            if(solutions.find(make_pair(i,amount - coins[i]))!= solutions.end() )
                tmp = solutions[make_pair(i,amount - coins[i])];
            else
            {
                tmp = change(amount - coins[i], coins, i);
                solutions[make_pair(i,amount - coins[i])] = tmp;
            }
            //cout << i << ":" << amount << ":" << tmp << endl;
            sum += tmp;
        }
        return sum;
    }
};
