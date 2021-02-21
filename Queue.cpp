[ Queue ]

FIFO(first-in first-out) 방식.

< 선언 >
ex) queue<int> q;

< 원소 추가 >
ex) q.push(3);

< 제일 앞 원소 >
q.front();

< 제일 뒤 원소 >
q.back();

< 원소 삭제 >
q.pop();

< 큐의 공백 >
q.empty();  // 비어있으면 true 아니면, false.
ex) if(!q.empty()){}
