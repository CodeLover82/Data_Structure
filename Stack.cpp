#include <stack>

[ Stack ]
LIFO(last-in first-out) 방식.

< 선언 >
ex) stack<int> st;

< 원소 추가 >
ex) st.push(3);

< 제일 위 원소 >
st.top();

< 원소 삭제 >
st.pop();

< 스택의 공백 >
st.empty();  // 비어있으면 true 아니면, false.
ex) if(!st.empty()){}
