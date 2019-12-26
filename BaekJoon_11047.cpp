// 백준 11047 - 동전 0
#include <iostream>

using namespace std;

int main()
{
	int N=0;		// 동전의 가짓수
	long long K=0;	// 동전 가치의 합
	cin >> N >> K;
	int coin[N]={ };// 동전의 종류 저장
	int num=0;		// 동전을 사용한 개수

	for(int i=0; i<N; i++)
		cin >> coin[i];

	long long remain = K;
	for(int i=N-1; i>=0 && remain!=0; i--)
	{
		if(remain < coin[i])	// 목표 가치(K)까지 남은 값이 coin[i]보다 작으면
			continue;			// 그 동전은 사용하지 못한다
		else
		{
			num += remain / coin[i];	// 사용할 수 있는 coin[i]의 최대 개수를 사용한 동전 수에 더한다.
			remain = remain % coin[i];	// coin[i]를 최대한 사용하고 남는 금액
		}
	}

	cout << num;

	return 0;
}
