/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//yha pr do pointer liy hai tmp1 and temp2 or temp1 jb null hojayega to usko dusre wale ll ki head pr dal denge or bdhate chlenge temp1 ko or temp2 dono ko phr temp2 null hoga to usko bhi same tem1 pr dal denge or dono pointer ko bdhaayenge or phr jha pr vo log mil jayega vhi node return krdnge
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode*temp1=headA;
      ListNode*temp2=headB;
      while(temp1!=temp2){
        if(temp1!=NULL){
        temp1=temp1->next;
      }else{
          temp1=headB;
      }
      if(temp2!=NULL){
        temp2=temp2->next;
      }else{
          temp2=headA;
      }
      
      }
        return temp1;
    }
};
