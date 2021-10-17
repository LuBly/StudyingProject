#include <iostream>
#include <queue>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	priority_queue<int> maxHeap;
	priority_queue<int, vector<int>, greater<int>> minHeap;
	//Priority queue를 이용한 max , min heap 생성

	int n, num;//n=외치는 정수의 갯수, num=외치는 정수
	
	cin >> n;
	for (int k = 0; k < n; k++) {
		cin >> num;
		if (maxHeap.size() == minHeap.size()) {
			maxHeap.push(num);
		}
		else minHeap.push(num);
		
		if (!maxHeap.empty()&&!minHeap.empty()&&maxHeap.top() > minHeap.top()) {//각각의 top을 교환.
			int tempMax = maxHeap.top();
			int tempMin = minHeap.top();
			maxHeap.pop();
			minHeap.pop();
			maxHeap.push(tempMin);
			minHeap.push(tempMax);
		}
		cout << maxHeap.top() << '\n';
	}



}