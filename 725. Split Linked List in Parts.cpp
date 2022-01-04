/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
      int length(ListNode *head)
    {
        int tmp=0;
        while(head!=NULL){
            head=head->next;
            tmp++;
        }
        return tmp;
    }
   vector<ListNode*> splitListToParts(ListNode* head, int k) {
       int len=length(head);
       vector<ListNode*> ans(k,NULL);
       int cnt=len/k;
       int left=len%k;
       ListNode* prev=NULL;
       for(int i=0;i<k;i++){
           ans[i]=head;
           int max=cnt;
           if(left>0){   
                max=cnt+1;
                left--;
            }
           for(int j=0;j<max;j++){
               prev=head;
               head=head->next;
           }
           if(prev!=NULL)   prev->next=NULL;
       } 
        return ans;
    }
};