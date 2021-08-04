
int finalPostion(int n, string commands ) {

	int x = 0, y = 0;
	for (auto cmd : commands) {
		int dx = 0;
		int dy = 0;
		switch (cmd) {
		case "LEFT":
			dy = -1; break;
		case "RIGHT":
			dy = 1; break;
		case "UP":
			dx = -1; break;
		case "DOWN":
			dx = 1; break;
		}

		if ((x + dx) >= 0 && (x + dx) < n && (y + dy) >= 0 && (y + dy) < n) {
			x += dx;
			y += dy;
		}
	}
	return x * n + y;
}

