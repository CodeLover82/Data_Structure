#include <vector>

[ 벡터 ]

< 수동 초기화 >
vector<int> v = {1, 2, 3, 4, 5};

< 크기를 준 채로 선언 >
vector<int> v(N);

< 크기를 주고, 초기화를 한 채로 선언 >
vector<int> v(N, x); // 크기 N으로 선언하고, 모두 x로 초기화한다.

< 크기 >
v.size();

< 맨 뒤 원소 추가 >
v.push_back(1);

< 맨 뒤 원소 삭제 >
v.pop_back();
