class Solution {
public:
    bool isNotOver(pair<int, int> direction, pair<int, int> position, const vector<vector<int>>& matrix)
	{
		int Y = position.first + direction.first;
		int X = position.second + direction.second;
		int maxY = matrix.size();
		int maxX = matrix[0].size();
		return Y >= 0 && X >= 0 && Y < maxY && X < maxX;
	}
	vector<vector<int> > getSolution(vector<vector<int>>& matrix, vector<vector<int>>& outputvector,
		vector<pair<int, int>>& zeroPositions)
	{
		queue<pair<int, int> > readyQueue;
		vector<pair<int, int>> directions = { make_pair(0,1),make_pair(1,0),make_pair(0,-1),make_pair(-1,0) };
		for (int i = 0; i < zeroPositions.size(); i++)
		{
			readyQueue.push(zeroPositions[i]);
		}
		while (!readyQueue.empty())
		{
			pair<int, int> position = readyQueue.front();
			readyQueue.pop();
			for (int i = 0; i < directions.size(); i++)
			{
				if (isNotOver(directions[i], position, matrix))
				{
					int nextY = position.first + directions[i].first;
					int nextX = position.second + directions[i].second;
					if (outputvector[nextY][nextX] == -1 ||
						outputvector[position.first][position.second] + 1 < outputvector[nextY][nextX])
					{
						//cout << "push" << endl;
						outputvector[nextY][nextX] = outputvector[position.first][position.second] + 1;
						readyQueue.push(make_pair(nextY, nextX));
					}
				}
			}
		}
		return outputvector;
	}
	vector<vector<int> > updateMatrix(vector<vector<int> >& matrix) {
		vector<pair<int, int> > zeroPositions;
		vector<vector<int> > outputvector;
		outputvector.resize(matrix.size());
		for (auto outputvec : outputvector)
		{
			outputvec.resize(matrix[0].size());
		}
		for (int i = 0; i < outputvector.size(); i++)
		{
			outputvector[i].resize(matrix[0].size());
		}
		for (int i = 0; i < matrix.size(); i++)
		{
			for (int j = 0; j < matrix[i].size(); j++)
			{
				if (matrix[i][j] == 0)
				{
					zeroPositions.push_back(make_pair(i, j));
					outputvector[i][j] = 0;
				}
				else
				{
					outputvector[i][j] = -1;
				}
			}
		}

		outputvector = getSolution(matrix, outputvector, zeroPositions);
		return outputvector;
	}
};