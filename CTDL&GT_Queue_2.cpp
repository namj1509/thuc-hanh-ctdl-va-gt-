#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Khởi tạo một hàng đợi rỗng
    queue<int> q;

    // Thêm các phần tử vào hàng đợi
    q.push(10);
    q.push(20);
    q.push(30);

    // In ra hàng đợi
    cout << "Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
