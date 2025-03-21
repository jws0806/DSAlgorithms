/*
	스택: 알고리즘 구현 -- 연결자료구조(단순연결리스트)
	파일명: linkedStack.h
		- stackNode	: 노드(data, link)
		- LinkedStack	: top
*/

// #pragma once
#ifndef __ListStack_H__
#define __ListStack_H__
// 스택 구현: 단순 연결 리스트 -- stackNode, LinkedStack
typedef int element;
typedef struct _stackNode {
	element			data;
	struct _stackNode*	link;
}stackNode;

typedef struct _LinkedStack {
	stackNode* top;
}LinkedStack;

#endif

// 스택 구현: 단순 연결 리스트 -- 함수 원형
LinkedStack*	stackCreate(void);
void		stackDestroy(LinkedStack* s);
stackNode*	makeStackNode(int data);
void		push(LinkedStack* s, element data);
element		pop(LinkedStack* s);
element		peek(LinkedStack* s);
_Bool		isEmpty(LinkedStack* s);
void		printStack(LinkedStack* s);
