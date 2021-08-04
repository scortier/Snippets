class Solution {
public:
	vector<int> pos{0, 0};
	bool isRobotBounded(string ins) {
		int dir = 1; // dir%4 represents direction, {0,1,2,3} representing {E,N,W,S}.
		for (int i = 0; i < ins.length(); i++) {
			if (ins[i] == 'L') // Left means moving anticlockwise (N->W).
				dir++;
			else if (ins[i] == 'R') // Right means moving clockwise (N->E).
				dir--;
			else
				move(dir % 4); // dir%4 always any one from {0,1,2,3} representing {E,N,W,S}.
		}
		if ( (pos[0] == 0 && pos[1] == 0) || (dir % 4 != 1) ) // either at (0,0) or pointing towards North.
			return true;
		else
			return false;
	}
	void move(int d) {
		// Movement based on direction d
		if (d == 0)
			pos[0]++;
		else if (d == 1)
			pos[1]++;
		else if (d == 2)
			pos[0]--;
		else
			pos[1]--;
	}
};





class Solution {
public:
	bool isRobotBounded(string instn) {


		// directions vector
		vector<vector<int>> dirs = {{0, 1}, {0, -1}, { -1, 0}, {1, 0}}; // N, S, W, E

		// starting and current location and direction
		vector<int> startingLocation{0, 0};
		vector<int> startingDirection(dirs[0]);
		vector<int> currDirection(startingDirection);
		vector<int> currLocation(startingLocation);

		// if after one cycle we're NOT looking in the starting direction,
		// or we're at the starting point
		for (char c : instructions) {
			if (c == 'G') {
				currLocation[0] = currDirection[0] + currLocation[0];
				currLocation[1] = currDirection[1] + currLocation[1];
			}
			else if (c == 'L') {
				currDirection = { -currDirection[1], currDirection[0]};
			}
			else {
				currDirection = {currDirection[1], -currDirection[0]};
			}
		}

		// return true
		if ((currDirection[0] != startingDirection[0] || currDirection[1] != startingDirection[1]) ||
		        (currLocation[0] == startingLocation[0] && currLocation[1] == startingLocation[1]))
			return true;

		return false;


	}
};



