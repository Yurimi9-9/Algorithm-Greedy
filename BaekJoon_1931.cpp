// 백준 1931 - 회의실 배정
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N=0;
	cin >> N;

	pair <unsigned long, unsigned long> time[N];
	for(int i=0; i<N; i++)
		cin >> time[i].second >> time[i].first;

	sort(time, time+N);	// 회의가 끝나는 시간(time[i].first) 기준으로 오름차순 정렬

	int current = 0;	// 마지막으로 선택한 회의의 인덱스
						// (오름차순으로 정렬했으므로, 가장 먼저 끝나는 회의(정렬 후의 time[0])는 무조건 선택)
	int count = 1;		// 선택한 회의의 수
	for(int i=1; i<N; i++)
	{	// 앞 회의가 끝나는 시각 <= 뒤 회의가 시작하는 시간 일 때, 그 회의 선택
		if(time[current].first <= time[i].second)
		{
			count++;
			current = i;
		}
	}

	cout << count;

	return 0;
}
