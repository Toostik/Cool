#include <iostream>

struct ListNode {
	int val;
	ListNode* next;

	ListNode() {
		val = 0;
		next = nullptr;
	}

	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
	void addToHead(Node*& head, int val) {
		Node* newNode = new Node{ val, head };
		head = newNode;
	}
	void print(Node* head) {
		while (head != nullptr) {
			std::cout << head->data << " ";
			head = head->next;
		}
		void reverse(Node * &head) {
			Node* prev = nullptr;
			Node* current = head;
			Node* next = nullptr;

			while (current != nullptr) {
				next = current->next; 
				current->next = prev; 
				prev = current;       
				current = next;
			}

			head = prev; 
		}


class MyLinkedList {
public:
    MyLinkedList();
	size_t get_size();	// Получить размер списка
	void addToHead(Node*& head, int val);
	void add_at_tail(int val);	// Добавить элемент в конец списка
	void add_at_index(size_t index, int val); // Добавить элемент по индексу
	void delete_at_index(size_t index);	// Удалить элемент по индексу
private:
	ListNode* head;
	size_t size;
};

MyLinkedList::MyLinkedList() : head(nullptr), size(0) {}

size_t MyLinkedList::get_size() { return size; }

void MyLinkedList::add_at_tail(int val) {
	++size;
	// Создать новый экземляр ListNode или новый элемент списка
	ListNode* newNode = new ListNode(val, nullptr);

	if (head == nullptr) {
		head = newNode;
		return;
	}
	// Двигаем указатель it до достижения последнего элемента списка
	ListNode* it = head;
	while (it->next != nullptr)
		it = it->next;
	
	// Присваиеваем указателю на следующий элемент (next) текущего последнего элемента
	// адрес нового последнего элемента
	it->next = newNode;
}
    
void MyLinkedList::delete_at_index(size_t index) {
	if (index < 0 || index >= size) {
		std::cerr << "Index is out of bounds of the list. " 
					"Current size: " << size << "\n";
		return;
	}
	--size;

	ListNode* prev = head;

	if (index == 0) {
		head = head->next;
		delete prev;
	}
	
	ListNode* curr = head->next;
	size_t pos = 0;
	
	while (prev != nullptr && pos < index - 1) {
		prev = prev->next;
		curr = curr->next;
		++pos;
	}
	prev->next = curr->next;
	delete curr;
}

void MyLinkedList::add_at_index(size_t index, int val) {
	if (index < 0 || index >= size) {
		std::cerr << "Index is out of bounds of the list. " 
					"Current size: " << size << "\n";
		return;
	}
	++size;

	ListNode* prev = head;
	ListNode* curr = head->next;
	size_t pos = 0;
	
	while (prev != nullptr && pos < index - 1) {
		prev = prev->next;
		curr = curr->next;
		++pos;
	}
	ListNode* newNode = new ListNode(val, curr);
	prev->next = newNode;
}


int main() {
	Node* head = nullptr;
	addToHead(head, 5);
	addToHead(head, 2);
	addToHead(head, 4);
	int arr[5] = {1, 2, 3, 4, 5};
	MyLinkedList* obj = new MyLinkedList();
	for (int val : arr) {
		obj->add_at_tail(val);
	}
	// obj->print_list();
	std::cout << "Deleting the last element...\n";
	obj->delete_at_index(7);
	// obj->print_list();

	std::cout << "Add at index 3\n";
	obj->add_at_index((size_t) 2, 10);
	// obj->print_list();

	
	print(head);
	reverse(head);
	print(head);
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}

  	return 0;
}