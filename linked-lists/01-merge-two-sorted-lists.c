#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    tail->next = (list1 != NULL) ? list1 : list2;
    return dummy.next;
}

int main(void) {
    // Test 1: Typical case ([1,2,4] + [1,3,4] -> [1,1,2,3,4,4])
    struct ListNode a3 = {4, NULL}, a2 = {2, &a3}, a1 = {1, &a2};
    struct ListNode b3 = {4, NULL}, b2 = {3, &b3}, b1 = {1, &b2};
    struct ListNode* m1 = mergeTwoLists(&a1, &b1);

    int expected1[] = {1, 1, 2, 3, 4, 4};
    for (int i = 0; i < 6; i++) {
        assert(m1 != NULL && m1->val == expected1[i]);
        m1 = m1->next;
    }
    assert(m1 == NULL);

    // Test 2: Edge case (both lists empty)
    assert(mergeTwoLists(NULL, NULL) == NULL);

    // Test 3: Edge case (one list empty, one list [0])
    struct ListNode c1 = {0, NULL};
    struct ListNode* m3 = mergeTwoLists(NULL, &c1);
    assert(m3 != NULL && m3->val == 0 && m3->next == NULL);

    printf("All local tests passed for 01-merge-two-sorted-lists.c!\n");
    return 0;
}