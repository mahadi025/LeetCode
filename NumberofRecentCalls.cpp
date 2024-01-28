#include <bits/stdc++.h>
using namespace std;

class RecentCounter
{
public:
	RecentCounter()
	{
	}

	queue<int> counter;

	int ping(int t)
	{

		counter.push(t);

		while (counter.front() < t - 3000)
		{
			counter.pop();
		}

		return counter.size();
	}
};