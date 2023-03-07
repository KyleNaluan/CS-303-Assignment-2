#pragma once

#include <iostream>

using namespace std;


template <typename T>
class Single_Linked_List {
private:

	struct Node {
		T data;
		Node* next;

		Node(const T& d, Node* next_ptr = nullptr) : data(d), next(next_ptr) {}
	};

	Node* head;
	Node* tail;
	size_t num_items;

public:
	// Constructor & Destructor
	Single_Linked_List() {
		head = nullptr;
		tail = nullptr;
		num_items = 0;
	}

	~Single_Linked_List() {

		while (head != nullptr) {
			Node* current = head;
			head = head->next;
			delete current;
		}

		tail = nullptr;
		num_items = 0;

	}

	// Functions
	void push_front(const T& item) {
		// Create new node
		Node* newNode = new Node(item, head);

		head = newNode;

		// Check if list was empty
		if (tail == nullptr) {
			tail = head;
		}

		num_items++;
	}

	void push_back(const T& item) {

		// check if list is empty or not
		if (tail != nullptr) {
			tail->next = new Node(item);
			tail = tail->next;
			num_items++;
		}
		// if empty else executes
		else {
			push_front(item);
		}

	}

	void pop_front() {
		// Check if list is empty
		if (head == nullptr) {
			cout << "List is empty" << endl;
		}

		else {
			Node* removedNode = head;
			head = head->next;
			delete removedNode;

			// Set tail to null if there was only one item in list
			if (head == nullptr)
				tail = nullptr;

			num_items--;
		}

	}

	void pop_back() {
		// Check if list is empty
		if (tail == nullptr) {
			cout << "List is empty" << endl;
		}

		else {
			// Check to see if there is only one item in list
			if (head == tail) {
				delete tail;
				head = nullptr;
				tail = nullptr;
			}

			// Loop until tail is nextptr, then delete it
			else {
				Node* current = head;
				while (current->next != tail) {
					current = current->next;
				}
				delete tail;
				tail = current;
				tail->next = nullptr;
			}

			num_items--;

		}

	}

	T front() {
		return head->data;
	}

	T back() {
		return tail->data;
	}

	bool empty() {
		return (num_items == 0);
	}

	void insert(size_t index, const T& item) {
		// Index is at beginning
		if (index == 0)
			push_front(item);

		// Index is beyond end of list
		else if (index >= num_items)
			push_back(item);

		// Loop until index is next node
		else {
			Node* current = head;

			for (size_t i = 0; i < index - 1; i++) {
				current = current->next;
			}

			// Set new node
			Node* newNode = new Node(item, current->next);
			current->next = newNode;
			num_items++;
		}
	}

	bool remove(size_t index) {
		// Check if index is out of range
		if (index >= num_items) {
			return false;
		}

		// Remove from front if index = 0
		else if (index == 0) {
			pop_front();
			return true;
		}

		// Loop through until index is next node
		else {
			Node* current = head;

			for (size_t i = 0; i < index - 1; i++) {
				current = current->next;
			}

			// Set node to remove to index
			Node* removedNode = current->next;
			current->next = removedNode->next;

			// Reset tail if tail was removed
			if (removedNode == tail)
				tail = current;

			// Remove node
			delete removedNode;
			removedNode = nullptr;

			num_items--;

			return true;
		}
	}

	size_t find(const T& item) {
		Node* current = head;
		size_t index = 0;

		// loop through until a node matching the data item is found
		while (current != nullptr) {
			// Check if matching, if so return index
			if (current->data == item)
				return index;

			// If not, advance in the list
			current = current->next;
			index++;
		}

		// if item is not found, return size of list
		return num_items;
	}

	void displayList() {

		
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp->data << endl;
			temp = temp->next;
		}
		
	}

	size_t getNumItems() const { return num_items; }

};
