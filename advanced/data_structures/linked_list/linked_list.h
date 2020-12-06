#pragma once

struct node
{
  int data;
  node *next;
};

class DataStructure
{
public:
  DataStructure();
  /**
   * A linked list is a linear data structure, in which 
   * the elements are not stored at contiguous memory 
   * locations. The elements in a linked list are linked 
   * using pointers as shown in the below example:
   * 
   *       head     
            | 
            |  
        +---+---+     +---+---+       +----+------+ 
        | A  | o----->|  B  | o-----> |  C | NULL | 
        +---+---+     +---+---+       +----+------+ 
        Data   Next   

    @param n Data value.
   **/
  void addNode(int n);

private:
  node *m_head, *m_tail;
};