문자열을 효율적으로 저장하고 탐색할 수 있는 자료구조.
문자열의 접두사들에 대응되는 노드들이 서로 연결된 트리. (영어사전 보는 법과 동일)

장점 : 문자열의 최대길이를 M이라 할 때, 원소를 찾는 작업을 O(M) 에 할 수 있다.
단점 : 각 노드에서 자식들에 대한 포인터들을 배열로 모두 저장하고 있기 때문에 저장 공간의 크기가 크다.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int NUMBER = 10; // 나올 수 있는 자료의 개수(문자일 경우 26)

struct TrieNode {
    TrieNode *children[NUMBER];
    bool finished; // 이 노드에서 종료되는 문자열이 있는지
    bool hasNext; // 자식 노드가 있는지
  
    TrieNode() { // 생성자
        for(int i = 0;i < NUMBER;i++)children[i] = NULL;
        finished = false;
        hasNext = false;
    }
    
	// 자료구조에 문자열 삽입
    void insert(string str) {
        if(str.size() == 0) {
            finished = true;
//  	    if(hasNext)hasPrefix = false;  // 이 문자열이 다른 문자열의 접두어인지 판단할 때 사용
        }
        else {
            int next = str[0] - '0';
            
            if(children[next] == NULL) {
				children[next] = new TrieNode();
				hasNext = true;
			}
			
//          if(children[next]->finished == true)hasPrefix = false;  // 다른 문자열이 이 문자열의 접두어인지 판단할 때 사용
            children[next]->insert(str.substr(1));
        }
    }
	
	// 문자열 탐색
	bool find(string str) {
		if(str.size() == 0)return finished;  // 이 위치에서 끝난 문자열이 있으면 true, 없으면 false를 반환.
		
		int next = str[0] - '0';
		if(!children[next])return false;
		
		return children[next]->find(str.substr(1));
	}
};

int main(){
	vector<string> phone_book; // 문자열 벡터
	
	TrieNode* root = new TrieNode();  //  루트는 항상 길이가 0인 문자열에 대응.
	
	for(int i = 0;i < phone_book.size();i++){
        root->insert(phone_book[i]);
    }
    
	string str = "123";
	cout << root->find(str);
	
	return 0;
}
 
