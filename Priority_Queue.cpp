include <queue>

[ 우선순위 큐 ]

우선순위에 따라 정렬된 큐.
디폴트는 내림차순 정렬이다.
	
< 선언 > 
priority_queue<자료형> pq; 

< 오름차순 정렬 >
음수로 삽입. 마찬가지로 빼낼때도 -붙여서 빼기. 
ex) pq.push(-x);  
ex) int x = -pq.top();

< 원소 추가 >
ex) pq.push(3);

< 제일 위 원소 >
pq.top();

< 원소 삭제 > 
pq.pop();
