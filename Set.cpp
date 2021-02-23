#include <set>

key 값은 중복이 허용되지 않으며, 중복 삽입해도 에러가 나지 않지만 변화 X.
원소가 삽입되면 자동으로 정렬된다.(균형이진트리)
정렬방법을 바꾸려면, 직접 구조체를 정의해 연산자 오버로딩을 해야 함.

< 선언 >
set<int> s;

< 원소 추가 > 
s.insert(2);

< 원소 조회 >
*iter;

< 원소 찾기 >
s.find(2); // 찾을 경우 해당 위치의 반복자를 반환하며, 없을 경우 s.end() 반환.

< 원소 삭제 >
s.erase(iter); // iter = s.end()일때를 예외처리해야 한다.

< 순회 >
for(set<int>::iterator iter = s.begin();iter != s.end();iter++) {
	cout<< *iter ;
}

< 역순회 >
for(set<int>::reverse_iterator iter = s.rbegin();iter != s.rend();iter++) {
	*iter;
}

