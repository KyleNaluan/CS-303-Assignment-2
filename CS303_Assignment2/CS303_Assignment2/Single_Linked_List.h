#pragma once


template <class T>
struct Node {
	T data;
	Node* nextPtr;
};

template <class T>
class Single_Linked_List {
private:
	Node* head;
	Node* tail;
	int num_items;

public:
	// Constructors
	Single_Linked_List();
	~Single_Linked_List();

	// Functions
	void push_front();
	void push_back();
	void pop_front();
	void pop_back();
	T front();
	T back();
	bool empty();

	void insert(size_t index, const T& item);
	bool remove(size_t index);
	size_t find(const T& item);
};
