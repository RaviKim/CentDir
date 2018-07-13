#if 1

#include <stdio.h>
#include <iostream>
using namespace std;

/*	LinkedList 구현 */
typedef struct NODE {
	NODE *next;	// node 저장하는 포인터(다음 노드)
	int data;	// 해당 node에 저장되어지는 Data
}NODE;


int main(void) {
	NODE *head = new NODE;	// Node 생성 (첫번째 )
	NODE *node1 = new NODE; // NodeData 두번째 생성.
	NODE *node2 = new NODE;	// NODE 3번째

	head->data = 100;	//  head  NODE에는 100을 넣음.
	head ->next = node1;// 다음 연결될 노드 정보 저장.

	node1->data = 10;	// 두번째 노드에는 10을 저장.
	node1->next = node2; // 두번째 노드가 가리키는 정보는 3번째 노드의 주소.
	
	node2->data = 20;	// 3번째 노드에 20을 저장.
	node2->next = NULL; // 3번째 다음 노드는 아무것도 없으니  NULL


	NODE *cnt = head->next; //리스트 count용

	while (cnt != NULL) {
	
		cout << cnt->data << endl;
		cnt = cnt->next;
	}

	delete head;
	delete node1;
	delete node2;
	delete cnt;

}

#endif
