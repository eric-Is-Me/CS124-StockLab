#pragma once
template <class T>
class MaxHeap {
  private:
    int size;    // maximum size
    int nNodes;  // current number of nodes
    T *buf;
  public:

    MaxHeap();
    ~MaxHeap();
    bool isEmpty() {return (nNodes == 0);}
    bool isFull() {return (nNodes == size);}
    bool Insert(T x);
    bool Remove (T &x);
    bool peak(T x);
};

template <class T>
MaxHeap<T>::MaxHeap()
// constructor builds a heap of max_size
{
  nNodes = 0;
  buf = new T[10 + 1];    // buf[0] is not used
  if(buf) size = 10;
  else size = 0;
}
template <class T>
MaxHeap<T>::~MaxHeap()
// Destructor
{
  delete [] buf;
}
template <class T>
bool MaxHeap<T>::Insert(T x)
// inserts x into the Heap
// returns true if successful, false if the heap is full

{
  if (isFull()) return false;


  nNodes++; // the last node of the heap is now vacant
  //starting from the last node, go from node i to
  // its parent iparent and as long as te parent is
  // smaller than x, move the parent down;

  int i = nNodes;
  int iparent;
  while (i > 1) {
    iparent = i/2;
    if (x <= buf[iparent]) break;
    buf[i] = buf[iparent];
    i = iparent;
  }
  // insert x into the created vacancy
  buf[i] = x;

  return true;
}

template <class T>
bool MaxHeap<T>::Remove(T &x)
// remove the largest element from the root of the Heap
// return true if successful, false if the heap is empty
{
  if (isEmpty()) return false;

  // retrieve the top element

  x = buf[1];

  // starting from the vacant root, go from node iparent to its
  // larger child i and, as long as that child
  // is greater than the last element of the heap,
  // move that child up:

  int iparent = 1; //root
  int i = 2;      // its left child
  while(i <= nNodes) {
    // set i to the right child, i+1 if it
    //  exists and is larger
    if(i < nNodes && buf[i] < buf[i+1]) i++;

    //compare with the last node:
    if(buf[i] <= buf[nNodes]) break;

    buf[iparent] = buf[i];
    iparent = i;
    i *= 2;
  }

  //move the last element int the created vacancy:
  if(nNodes > 1) buf[iparent] = buf[nNodes];
  nNodes--;

  return true;
}
template <class T>
bool MaxHeap<T>::peak(T x) {
  if (x <= buf[1])
    return true;
  else
    return false;
}
