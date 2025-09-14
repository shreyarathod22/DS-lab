#include <iostream>
using namespace std;

class Node {
public:
    string task;
    int priority;
    int time;
    Node* next;

    void display();
    void insert(Node*, Node*);

    // Parameterised constructor
    Node(string m, int p, int e) {
        task = m;
        priority = p;
        time = e;
        next = NULL;
    }
};

void Node::display() {
    // cout << "Task name :" << task << endl;
    cout << priority << "-->" << " ";
    // cout << "Execution time:" << time << endl;
}

void Node::insert(Node* h, Node* t) {
    Node* t1 = h;
    while (t1->next != NULL) {
        t1 = t1->next;
    }
    t1->next = t;
}

int main() {
    int i, n, p, e;
    string m;
    Node* header = NULL;
    Node* temp = NULL;

    cout << "How many nodes you want to insert in the linked list : ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter task details (taskname, priority, execution time): ";
        cin >> m >> p >> e;
        temp = new Node(m, p, e);

        if (header == NULL) {
            header = temp;
        } else {
            if (temp->priority > header->priority) {
                temp->next = header;
                header = temp;
            } else {
                Node* prev = header;
                Node* curr = header->next;

                if (curr == NULL) {
                    header->next = temp;
                } else {
                    // Traverse to find insertion point
                    while (curr != NULL && curr->priority >= temp->priority) {
                        prev = curr;
                        curr = curr->next;
                    }

                    // Insert node between prev and curr
                    prev->next = temp;
                    temp->next = curr;
                }
            }
        }
    }

    // Print the list
    temp = header;
    while (temp != NULL) {
        temp->display();
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
