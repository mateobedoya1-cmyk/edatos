#include <iostream>

using namespace std;

class Vec {
private:
 int* data;
 size_t count;
 size_t capacity;
public:
 Vec() : data(nullptr), count(0), capacity(0) {} 
 Vec (size_t c): data (new int [c]), count(0), capacity (c) {}
  ~Vec() {
    delete [] data;
  }

  size_t size() const { return count;}

  void push_back (int elem) {
    if (count == capacity) {
         grow();
    }
    data[count] = elem;
    count++;
  }
  void grow () {
    cout << "Growing..." << endl;
    size_t newcapacity = capacity * 2 ;
    int* newblock = new int [newcapacity];
    for (size_t i = 0; i < count; i++) {
        newblock [i] = data [i];
     }
     delete [] data;
     data = newblock;
     capacity = newcapacity;
  }
};

int main() {
    cout << "Vectors!!!" << endl;
    Vec w(2);
for (size_t i = 0; i < 100; i++){
    w.push_back(10);
}  
    cout << w.size() << endl;
    return 0;
}