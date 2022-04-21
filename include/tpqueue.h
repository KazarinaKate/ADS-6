// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
    private:
    T array[100];
    int first, last;
 public:
     TPQueue() : first(0), last(0) {}
     void push(T n) {
         int g = ++last - 1;
         while (((g - 1) >= first) && (array[(g - 1) % size].prior < n.prior)) {
             array[g % size] = array[(g - 1) % size];
             --g;
         }
         array[g % size] = n;
    }
    T pop() {
        return array[(first++) % size];
    }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
