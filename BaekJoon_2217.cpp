// 백준 2217 - 로프
#include <iostream>
#include <algorithm>

using namespace std;

// 내림차순 정렬을 위한 함수
bool desc(int a, int b)
{
	return a > b;
}

int main()
{
	int N=0;	// 로프의 종류 수
	cin >> N;
	int rope[N]={};	// 각 로프가 들 수 있는 중량
	for(int i=0; i<N; i++)
		cin >> rope[i];

	sort(rope, rope+N, desc);	// 로프가 들 수 있는 중량을 내림차순으로 정렬

	int mWeight[N]={rope[0], };	// mWeight[0]은 rope[0]으로 초기화, 나머지는 0으로 초기화
	for(int i=1; i<N; i++)			// 내림차순으로 정렬된 로프에서 i번째 로프를 포함하여 들 수 있는 최대 무게는
		mWeight[i] = rope[i]*(i+1);	// i번째 로프가 들 수 있는 중량(rope[i]) X 사용한 로프의 개수(i+1)

	cout << *max_element(mWeight, mWeight+N);	// 최댓값 출력
	return 0;
}
