#include <iostream>

using namespace std;

class Vec {
private:
 int* data;
 size_t count;
 size_t capacity;

public:
 Vec() : data(), count()
};

int main() {
    cout << "Vectors!!!" << endl;
    return 0;
}
