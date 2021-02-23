#include <string>

[ 문자열 ]

char* 와 다르게 문자열의 맨 뒤에 '\0'이 붙지 않는다.
대신에 문자열의 끝, 길이를 판별하기 위해 size() 함수가 존재.

< 정수로 바꾸기 >
stoi(str);

<정수를 문자열로 바꾸기 >
to_string(i);

< 문자열 길이 >
str.size();

< 맨 뒤 문자 추가 >
str.push_back('a');

< 맨 뒤 문자 삭제 >
str.pop_back();

< 문자열 이어붙이기 >
str += "123";
str3 = str + str2;  // "123" = "1" + "23"

< 문자열 자르기 >
str.substr(2); // 3번째 문자부터 끝까지의 문자열을 리턴
str.substr(2, 3); // 3번째 문자부터 3개 반환. 3 ~ 5

< 문자열 비교 >
str.compare(str2);  // 같으면 0, str이 사전순으로 앞에 있으면 -1, 뒤에 있으면 1

< 부분 문자열 찾기 >
str.find(str2); // 부분 문자열 str2가 str에 속해 있는지 확인 후 그 시작 위치 반환. 없으면 -1 반환.

< 문자열 파싱 >  
#include<sstream>
	
string str = "c++ c java";
istringstream ss(str);
string buffer;
vector<string> v;
while(getline(ss, buffer, ',')){
	v.push_back(buffer);
}
