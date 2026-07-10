/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* oddEvenList(ListNode* &head) {
            //your code goes here
            ListNode* odd = head;
            ListNode* even = head->next;
            ListNode* evenHead = head->next;

            if (head == nullptr || head->next == nullptr) 
            {
                return head;
            }

            while(even!=nullptr && even->next!=nullptr)
            {
                odd->next = odd->next->next;
                even->next = even->next->next;

                odd = odd->next;
                even = even->next;
            }
            odd->next = evenHead;
            return head;
        }
};