// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T ar[size] = { 0 };
  int first, last;

 public:
  TPQueue() : first(0), last(0) {}
  void push(T temp) {
    int l = last++;
    while ((--l >= first) && (ar[l % size].prior < temp.prior)) {
      ar[(i + 1) % size] = ar[i % size];
    }
    ar[(i + 1) % size] = temp;
  }
  T pop() {
  return ar[(first++) % size];
}
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
