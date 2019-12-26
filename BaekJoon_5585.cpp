// 백준 5585 - 거스름돈
#include <iostream>

using namespace std;

int main()
{
	int coin[6] = {500, 100, 50, 10, 5, 1};	// 거스름돈 종류
	int price=0;	// 구입하는 물건의 가격
	cin >> price;

	int change = 1000 - price;	// change: 거슬러 받을 금액

	int coinCount=0;
	for(int i=0; i<=6 && change!=0; i++)
	{	// 큰 단위의 동전부터 사용
		if(coin[i] <= change)
		{	// 남은 금액보다 동전 금액이 크거나 같을 때만 사용 가능
			coinCount += change/coin[i];	// 큰 단위의 동전부터 최대한 많이 사용하기
			change = change%coin[i];		// 사용한 만큼 거스름돈 업데이트
		}
	}

	cout << coinCount;

	return 0;
}
