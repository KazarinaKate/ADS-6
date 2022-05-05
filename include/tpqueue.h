// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T arr[size];
  int tSize = 0;

 public:
  void push(T item) {
    if (tSize >= size) throw "Error: The queue is full";
    for (int i = tSize++; i >= 0; i--)
      if (i > 0 && ar[i - 1].prior >= item.prior) {
        ar[i] = ar[i - 1];
      } else {
        ar[i] = item;
        break;
      }
  }
  T pop() {
    if (tSize <= 0) throw "Error: The queue is empty";
    return ar[--tSize];
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
