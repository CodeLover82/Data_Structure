[ Map ]
각 노드가 key와 value 쌍으로 이루어진 트리이다. 

< 특징 >
key의 중복을 허용하지 않는다.
내부 구현은 검색, 삽입, 삭제가 O(logn)인 레드블랙트리로 구성.
자료를 저장할 때 자동으로 key를 기준으로 오름차순 정렬한다.

	
< 선언 >
map<key, value> m;
ex) map<string, int> m;

< 원소 추가 >
map.insert(key, value);  // key가 중복된다면 insert가 수행되지 않는다.
ex) m.insert("x", 3);

< value 값 변경 >
map[key] = value;
ex) m["x"]++;

< 원소 찾기 >
map.find(key)  // 해당 위치의 iterator 반환. 없을 시 map.end() 반환.
ex) if(m.find("x") != m.end()){}

< 원소 삭제 >
1. 특정 위치의 요소 삭제
map.erase(iter);
ex) m.erase(m.begin() + 2);

2. key 값으로 삭제
map.erase(key);
ex) m.erase("x");

< 순회 >
ex)
for(map<string, int>::iterator iter = m.begin();iter != m.end();iter++) {
	iter->first  // key 값
	iter->second // value 값
}

< 역순회 >
for(map<string, int>::reverse_iterator iter = m.rbegin();iter != m.rend();iter++) {
	iter->first  // key 값
	iter->second // value 값
}
