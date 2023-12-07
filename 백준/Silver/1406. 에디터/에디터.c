#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {		//연결 리스트의 node 구조체
	char key; //문자가 저장될 변수
	struct node* prev, * next; //노드의 왼쪽과 오른쪽 노드 포인터
}node;

node* head, * tail, * p; //리스트의 head, tail, 커서 변수

void init(void) {		//리스트 초기화
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	head->prev = head; //head와 tail 연결
	head->next = tail;
	tail->prev = head;
	tail->next = tail;
	p = head; //커서는 head(리스트의 맨 앞)으로 정의
}

void left(void) { // 커서 포인터 왼쪽으로 이동
	if (p != head) { //커서가 head일 때는 더 이상 갈 수 없음
		p = p->prev;
	}
}

void right(void) { //커서 포인터 오른쪽으로 이동
	if (p != tail->prev) { //커서가 문자열의 마지막일 때는 더 이상 갈 수 없음
		p = p->next;
	}
}

void del(void) { //커서 왼쪽(커서 포인터가 가리키는 노드)의 글자 삭제
	if (p != head) { //커서가 맨 왼쪽에 있을 경우 삭제하지 않음
		node* t = p;
		p = p->prev; //커서 이동
		p->next = t->next; //삭제될 노드의 이전 노드와 다음 노드 연결
		t->next->prev = p;
		free(t); //노드 삭제
	}
}

void insert(char c) { //문자 삽입
	node* n = (node*)malloc(sizeof(node));
	n->key = c;
	n->prev = p; //삽입될 노드와 이전, 다음 노드 연결
	n->next = p->next;
	p->next->prev = n;
	p->next = n;
	p = n; //삽입된 문자로 커서 이동
}

void del_all(void) { //메모리 free
	node* d = head->next;
	while (d != tail) { //head~tail 사이의 노드 모두 삭제
		node* t = d;
		d = d->next;
		free(t);
	}
	free(head); //head, tail노드 삭제
	free(tail);
}

void print(void) { // head~tail 사이의 노드 키값 출력
	node* s = head->next;
	while (s != tail) {
		printf("%c", s->key);
		s = s->next;
	}
}

int main(void) {

	int m;
	char c;
	init();

	while ((c = getchar()) != '\n') //엔터가 입력되기 전까지 문자 저장
		insert(c);

	scanf("%d\n", &m); //명령 개수 읽어오기
	for (int i = 0; i < m; i++) {
		scanf("%c", &c);
		if (c == 'P') {
			getchar(); //명령어와 삽입될 글자 사이의 공백 무시
			scanf("%c", &c);
			insert(c);
			getchar(); //다음에 들어오는 엔터 무시
		}
		else if (c == 'L') {
			left();
			getchar();
		}
		else if (c == 'D') {
			right();
			getchar();
		}
		else {
			del();
			getchar();
		}
	}
	print(); //출력
	del_all(); //할당된 메모리 돌려주기
	return 0;
}