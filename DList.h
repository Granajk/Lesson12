#pragma once
#include <iostream>
using std::cout;
using std::endl;

template<typename T>
class DNode {
public:
	T info;
	DNode* prev;
	DNode* next;

	DNode(T value) { info = value; next = prev = nullptr; }
	void showNode() {
		cout << "-INFO: " << info << endl;
		cout<<"\tPREV: " << prev << endl;
		cout<<"\tNEXT: " << next << endl;
	}


};
template<typename T>
class DList {

	DNode<T>* head;
	DNode<T>* current;
public:
	DList() { head = current = nullptr; }
	void push_back(T value) {
		DNode<T>* el = new DNode<T>(value);
		if (head == nullptr) {
			head = current = el;
		}
		else {
			current->next = el;
			el->prev = current;
			current = el;
		}
	}
	~DList() {
		DNode<T>* p = head;
		while (p != nullptr) {
			cout << "del: " << p->info << endl;
			p = p->next;
			if (p != nullptr)
			{
				delete p->prev;
			}
		}
		
	}
	void showList() {
		DNode<T>* p = head;
		while (p != nullptr) {
			/*cout << p->info << " ";*/
			p->showNode();
			p = p->next;
		}
		cout << endl;
	}

	void showReverseList() {
		DNode<T>* p = current;
		while (p != nullptr) {
			p->showNode();
			p = p->prev;
		}

		cout << endl;
	}

	DNode<T>* search(T value) {
		DNode<T>* p = head;
		while (p != nullptr) {
			if (p->info == value) {
				return p;
			}
			p = p->next;
		}
		return nullptr;
	}

	void push_front(T value) {
		DNode<T>* el = new DNode<T>(value);
		if (head == nullptr)
		{
			head = el; current = el;
		}
		else
		{
			el->next = head;
			head->prev = el;
			head = el;
		}
	}
	void insertBefore(T before, T value) {
		DNode<T>* insertB = search(before);
		if (insertB) {
			DNode<T>* newNode = new DNode<T>(value);
			newNode->next = insertB;
			newNode->prev = insertB->prev;
			if (insertB->prev) {
				insertB->prev->next = newNode;
			}
			else {
				head = newNode;
			}
			insertB->prev = newNode;
		}
	}
	void insertAfter(T after, T value) {
		DNode<T>* insertA = search(after);
		if (insertA) {
			DNode<T>* newNode = new DNode<T>(value);
			newNode->prev = insertA;
			newNode->next = insertA->next;
			if (insertA->next) {
				insertA->next->prev = newNode;
			}
			else {
				current = newNode;
			}
			insertA->next = newNode;
		}
	}
	void erase(T value) {
		DNode<T>* erase = search(value);
		if (erase) {
			if (erase->prev) {
				erase->prev->next = erase->next;
			}
			else {
				head = erase->next;
			}
			if (erase->next) {
				erase->next->prev = erase->prev;
			}
			else {
				current = erase->prev;
			}
			delete erase;
		}
	}
};