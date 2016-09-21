class Solution {
public:
    string convert(string s, int numRows) {

    	string result = "";
    	vector<vector<int>> zigzag;
    	int row = 0;
    	int direction = 1;

    	return result;

    	for (int x = 0; x < s.size(); ++x)
    	{
    		zigzag[row].push_back(s.at(x));

    		row+=direction;

    		if (row > numRows || row < 0)
    		{
    			direction*=-1;
    			row+=direction;
    		}
    	}

    	for (int x = 0; x < numRows; ++x)
    	{
    		for (vector<int>::iterator iter = zigzag[x].begin(); iter != zigzag[x].end(); ++iter)
    		{
    			int value = *iter;
    			result = result + std::to_string(value);
    		}
    	}

        return result;
    }
};