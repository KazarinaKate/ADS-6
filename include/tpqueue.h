// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T ar[size] = {0};
  int b;

 public:
  TPQueue() : a(0), b(0) {}
  void push(T temp) {
    int l = b++;
    while ((--l >= a) && (ar[l % size].prior < temp.prior)) {
      ar[(l + 1) % size] = ar[l % size];
    }
    ar[(l + 1) % size] = temp;
  }
  T pop() {
  return ar[(a++) % size];
}
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
