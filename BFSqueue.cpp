#include <iostream> #include <string> using namespace std;

const int QUEUE_CAPACITY = 100; class Queue {
private:
int queue_index[QUEUE_CAPACITY]; int queue_level[QUEUE_CAPACITY];

int maxSize; int front;
int rear; int count;

public:
Queue() {
maxSize = QUEUE_CAPACITY; front = 0;
rear = -1;
count = 0;
}

int isEmpty() {
if (count == 0) { return 1;
 
} else {
return 0;
}
}

int isFull() {
if (count == maxSize) { return 1;
} else {
return 0;
}
}

void enqueue(int itemIndex, int itemLevel) { if (isFull() == 1) {
cerr << "Error: Queue is full." << endl; return;
}
rear = (rear + 1) % maxSize;
queue_index[rear] = itemIndex; queue_level[rear] = itemLevel;
count++;
}
int getFrontIndex() {
if (isEmpty() == 1) {
cerr << "Error: Queue is empty." << endl; return -1;
}
return queue_index[front];
}
int getFrontLevel() {
if (isEmpty() == 1) {
cerr << "Error: Queue is empty." << endl; return -1;
}
return queue_level[front];
 
}

void dequeue() {
if (isEmpty() == 1) {
cerr << "Error: Cannot pop from empty queue." << endl; return;
}
front = (front + 1) % maxSize; count--;
}
};

void runBfs(int startNode, int numPages, int adjMatrix[20][20], string pages[]) { int visited[20] = {0};
Queue page; visited[startNode] = 1;
page.enqueue(startNode, 0);
cout << "\nIndexed (Visited) Web Pages in BFS Order:\n"; while (page.isEmpty() == 0) {
int currentPageIndex = page.getFrontIndex(); int currentLevel = page.getFrontLevel(); page.dequeue();
cout << "Level " << currentLevel << ": " << pages[currentPageIndex] << endl;

for (int i = 0; i < numPages; i++) {
if (adjMatrix[currentPageIndex][i] == 1 && visited[i] == 0) { visited[i] = 1;
page.enqueue(i, currentLevel + 1);
}
}
}
}

int main() { 
     int numPages;
cout << "Enter total number of web pages: "; cin >> numPages;
 
string pages[20];
cout << "Enter names of web pages (e.g., Home, About, Contact):\n"; for (int i = 0; i < numPages; i++) cin >> pages[i];

int adjMatrix[20][20];
cout << "Enter link adjacency matrix (1 if link exists, 0 otherwise):\n"; for (int i = 0; i < numPages; i++)
for (int j = 0; j < numPages; j++) cin >> adjMatrix[i][j];

string startPageName;
cout << "Enter starting page name: "; cin >> startPageName;
int startPageIndex = -1; int i = 0;
while (i < numPages) {
if (pages[i] == startPageName) { startPageIndex = i;
break;
} i++;
}

if (startPageIndex == -1) {
cout << "Starting page not found!" << endl; return 0;
}

runBfs(startPageIndex, numPages, adjMatrix, pages); return 0;
}
