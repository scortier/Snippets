//1. Simple swap
void moveZeroes(vector<int>& a)
{
	int cnt = 0;
	if (a[i])
		swap(a[i], a[cnt++]);
}

//2.simple count the zeroes and place at the end
void moveZeroes(vector<int>& a) {
	int n = a.size();
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
			a[cnt++] = a[i];
	}
	while (cnt < n)
	{
		a[cnt++] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ",";
	}
}

//3. Stable Partition (to impress interviewer)
// include lambda function
void moveZeroes(vector<int>& a)
{
	stale_partition(begin(a), end(a), [](int i) {return i;});
}

//4. to avoid lambda u can use

void moveZeroes(vector<int>& a)
{
	stable_partition(rbegin(a), rend(a), logical_not<int>());
}