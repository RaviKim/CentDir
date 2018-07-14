
/*	linked list  */
/* 
<Author>RaviKim
<Date> 180713
<Description>	Make List Add Func
<ver> 1.1
*/
#if 1

#include <stdio.h>
#include <iostream>
#include <memory>
using namespace std;

/*	LinkedList 구현 */
typedef struct NODE {
	NODE *next;	// node 저장하는 포인터(다음 노드)
	int data;	// 해당 node에 저장되어지는 Data
}NODE;

void _ADDNODE(NODE *target, int data) {
	NODE * addNode = new NODE;	// 새로운 노드 객체생성
	addNode->next = target->next; // 새로운 노드의 다음 노드에 다음 노드 주소 저장.
	addNode->data = data;	// 노드가 담고있는 데이터를 저장.

	target->next = addNode;	// 기존 노드 새노드를 지정.
}

int main(void) {
	
	NODE *head = new NODE;	//처음 노드 생성
	//shared_ptr<NODE> head(new NODE);

	head->next = NULL;	// 처음 데이터 저장 하지 않음
	// 새노드 추가부분
	_ADDNODE(head, 10);	
	_ADDNODE(head, 20);	
	_ADDNODE(head, 30);

	NODE * cnt = head->next;	//	리스트 탐색하는 포인터 .

	while (cnt!=NULL) {		// NULL이 아닐때 까지 반복
		cout << cnt->data << endl;
		cnt = cnt->next;	//다음 노드 주소 저장.
	}

	cnt = head->next;
	while (cnt != NULL) {
		NODE *next = cnt->next;	//	다음 노드 임시 저장.
		delete(cnt);	//	노드 메모리 해제
		cnt = next;	// 포인터에 다음 노드 주소 저장
	}

	delete head;
	return 0;
}
#endif
