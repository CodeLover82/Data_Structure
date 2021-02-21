- 해시(map) --------------------------------------------------------

기본적으로 key값의 오름차순으로 정렬된다.
정렬방법을 바꾸려면, 직접 구조체를 정의해 연산자 오버로딩을 해야 함.

include <map>
map<string, int> mp;  // map<key, value> int 형의 value는 0으로 초기화
원소 추가 : mp["a"]++;
원소 삭제 : mp.erase("a");
value 값 : mp.count("a");
순회 : 
for(map<string, int>::iterator iter = mp.begin();iter != mp.end();iter++) {
	iter->first  // key 값
	iter->second // value 값
}
역순회 :
for(map<string, int>::reverse_iterator iter = mp.rbegin();iter != mp.rend();iter++) {
	iter->first  // key 값
	iter->second // value 값
}
