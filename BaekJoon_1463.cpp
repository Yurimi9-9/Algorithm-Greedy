// 백준알고리즘 1463 - [Greedy algorithm] 1로 만들기
#include <iostream>

using namespace std;

int main()
{
	int N=0;
	cin >> N;
	int use[N+1]={0,};

	// N을 3가지 연산(나누기3 or 나누기2 or 빼기1)만 사용하여 최소연산으로 1로 만드는 방법을 찾기 위해
	// 1부터 N까지  곱하기3 or 곱하기2 or 더하기1 하여 갈 수 있는 최소연산 횟수를 구한다.
	for(int i=1; i<N; i++)
	{
		if(i*3 <= N)
			use[i*3] = use[i]+1;
		if(i*2 <= N && (i*2)%3!=0)
			use[i*2] = use[i]+1;
		if(use[i+1]==0 || (use[i]+1 < use[i+1] && use[i+1]!=0))
			use[i+1] = use[i]+1;
	}
	cout << use[N] << endl;

	return 0;
}
