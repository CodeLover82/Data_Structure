문자열의 접두사들에 대응되는 노드들이 서로 연결된 트리. (영어사전 보는 법과 동일)
루트는 항상 길이가 0인 문자열에 대응.
문자열의 최대길이를 M이라 할 때, 원소를 찾는 작업을 O(M) 에 할 수 있다.
	
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
    
    void insert(string str) {
        if(str.size() == 0) {
            finished = true;
//  	    if(hasNext)answer = false;  // 접두어 판단할 때 사용
        }
        else {
            int next = str[0] - '0';
            
            if(children[next] == NULL)children[next] = new TrieNode(), hasNext = true;
//          if(children[next]->finished == true)answer = false;  // 접두어 판단할 때 사용
            children[next]->insert(str.substr(1));
        }
    }
};
