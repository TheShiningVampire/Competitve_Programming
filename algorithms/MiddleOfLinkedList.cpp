#include <iostream>
using namespace std;

ListNode* middleNode(ListNode* head) {
        
        ListNode* temp1,*temp2;
        temp1 = head;
        temp2 = head;
        
        
        
        while( temp2 != NULL )
        {
            if(temp2->next != NULL)
            {
                temp1 = temp1->next;
                temp2 = (temp2->next)->next;
            }
            else
            {
                break;
            }
        }        
       return temp1;
        
    }

