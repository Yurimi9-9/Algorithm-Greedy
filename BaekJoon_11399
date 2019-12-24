// BaekJoon 11399
#include <iostream>
#include <algorithm>    // sort 함수를 사용하기 위해

using namespace std;

int main()
{
    int N=0;          // 사람 수
    cin >> N;
    int time[N]={};    // 현금 인출에 걸리는 시간
    int sum=0;         // 걸리는 시간의 합계
    
    for(int i=0; i<N; i++)
        cin >> time[i];
    
    sort(time, time+N);    // sort(배열첫원소, 마지막원소) : 오름차순 정렬
    
    sum+=time[0];
    for(int i=1; i<N; i++)
    {   // 앞 사람이 끝난 후 인출을 시작하므로, [i]=[i-1]+[i]
        time[i] += time[i-1];
        sum += time[i];
    }
    
    cout << sum;
    
    return 0;
}
