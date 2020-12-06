#include "linked_list.h"

DataStructure::DataStructure() 
{
  m_head = nullptr;
  m_tail = nullptr;
}

void DataStructure::addNode(int n)
{
  node *tmp = new node;
  tmp->data = n;
  tmp->next = nullptr;

  if (m_head == nullptr)
  {
    m_head = tmp;
    m_tail = tmp;
  }
  else
  {
    m_tail->next = tmp;
    m_tail = m_tail->next;
  }
}