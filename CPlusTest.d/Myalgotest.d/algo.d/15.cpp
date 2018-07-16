#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct Node{
Node *next;
int Data;
}NODE;

void _ADDNODE(NODE *target, int data){
	NODE * addNode = new NODE;
	addNode -> next = target -> next;
	addNode -> Data = data;

	target -> next = addNode;
}

void _DELETENODE(NODE *deleteTarget){
	NODE * removeTarget = deleteTarget -> next;
	deleteTarget -> next = removeTarget -> next;

	delete(removeTarget);
}

int main(){
	NODE *head = new NODE;
	head -> next = NULL;

	int cnt = 0;
	int N = 0;
	int number = 0;
	cin >> cnt;
	int findCount = cnt;
	while(cnt --){
		cin >> number;
	_ADDNODE(head,number); 
	}
	cout << endl;
	cout << "Delete Node : ";
	cin >> N;
	

	NODE *cur = new NODE;

		int programCheck = 0;
	//순환
	cur = head ->next;
	while(cur !=NULL){
		if(programCheck == findCount - N)_DELETENODE(cur);
		cout << cur -> Data << endl;
		cur = cur -> next;
		programCheck++;
	}

	delete head;
	delete cur;

}
