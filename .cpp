#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, n = 0;
        ListNode* l3 = NULL;
        ListNode* temp = NULL;
        ListNode* start = NULL;


        while (l1 != NULL && l2 != NULL)
        {

            n = l1->val + l2->val;
            n += carry;
            carry = 0;
            if (n > 9)
            {

                carry = n / 10;
                n = n % 10;

            }
            // re = re * 10 + n;
            temp = new ListNode;
            temp->val = n;
            temp->next = NULL;


            if (l3 == NULL)
            {
                l3 = temp;
                start = l3;
            }
            else
            {
                l3->next = temp;
                l3 = l3->next;
                // while (l3->next != NULL)
                // {
                //     l3 = l3->next;
                // }
                // l3->next = temp;
            }

            l1 = l1->next;
            l2 = l2->next;
        }



        while (l1 != NULL)
        {
            //re = re * 10 + l1->val;
           
            temp = new ListNode;
            l1->val += carry;
            carry = 0;
            if (l1->val > 9)
            {
                carry = l1->val / 10;
                l1->val = l1->val % 10;
            }
            temp->val = l1->val;
            
            temp->next = NULL;
            l3->next = temp;
            l3 = l3->next;
            l1 = l1->next;



        }
        

        while (l2 != NULL)
        {
         
            
            temp = new ListNode;
            l2->val += carry;
            carry = 0;
            if (l2->val > 9)
            {
                carry = l2->val / 10;
                l2->val = l2->val % 10;
            }
            temp->val = l2->val;

            temp->next = NULL;
            l3->next = temp;
            l3 = l3->next;
            l2 = l2->next;
        }
        if (carry != 0)
        {
            temp = new ListNode;
            temp->val = carry;
            temp->next = NULL;
            l3->next = temp;
            
        }

        return start;
       
    }




    void append(ListNode** head_ref, int new_data)
    {
        /* 1. allocate node */
        ListNode* new_node = new ListNode();

        ListNode* last = *head_ref; /* used in step 5*/

        /* 2. put in the val */
        new_node->val = new_data;

        /* 3. This new node is going to be
        the last node, so make next of
        it as NULL*/
        new_node->next = NULL;

        /* 4. If the Linked List is empty,
        then make the new node as head */
        if (*head_ref == NULL)
        {
            *head_ref = new_node;
            return;
        }

        /* 5. Else traverse till the last node */
        while (last->next != NULL)
            last = last->next;

        /* 6. Change the next of last node */
        last->next = new_node;
        return;
    }

    // This function prints contents of
    // linked list starting from head
    void printList(ListNode* node)
    {
        while (node != NULL)
        {
            cout << " " << node->val;
            node = node->next;
        }
    }
};






int main()
{
    Solution solution;
    ListNode* head = NULL;
    ListNode* head1 = NULL;

    // Insert 6. So linked list becomes 6->NULL
    solution.append(&head, 9);
    solution.append(&head, 9);
    solution.append(&head, 9);
    solution.append(&head, 9);
    solution.append(&head, 9);
    solution.append(&head, 9);
    solution.append(&head, 9);
    solution.printList(head);
    cout << "\n\n" << endl;
    solution.append(&head1, 9);
    solution.append(&head1, 9);
    solution.append(&head1, 9);
    solution.append(&head1, 9);

    solution.printList(head1);
    cout << "\n\n" << endl;
    ListNode* sum = solution.addTwoNumbers(head, head1);

    solution.printList(sum);

    
    
}