#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *low = head;
    struct ListNode *high = head;

    while(high && high -> next){
        low = low ->next;
        high = high ->next ->next;
        if(low == high){
            low = head;
            while(high != low){
                low = low ->next;
                high=high->next;
            }
            return low;
        }
    }
    return NULL;
}