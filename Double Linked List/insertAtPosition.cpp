// এই function এর মাধ্যমে head এবং tail ছাড়া যেকোনো অন্য position এ value রাখা যাবে। এখানে head, position আর value parameter হিসেবে নেয়া হচ্ছে।

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val); // given value দিয়ে একটা new node create করা হচ্ছে।
    Node *tmp = head; // temporary একটা node এ head রাখা হচ্ছে যাতে loop চালিয়া traverse করা যায়

    for (int i = 1; i <= pos - 1; i++) //position অব্দি loop চালিয়ে reach করা হচ্ছে।
    {
        tmp = tmp->next;
    }

// এখানে tmp node এর next এ এবং next node এর previous এ new nodeকে রাখা হচ্ছে।
    newNode->next = tmp->next;     // tmp এর next কে new এর next এ রাখা হচ্ছে।
    tmp->next = newNode;           // tmp এর next এ newnode কে রাখা হচ্ছে।
    newNode->next->prev = newNode; // new এর next এ যে value আছে তার previous এ                       newnode কে রাখা হচ্ছে। যাতে dual connection হয়।
    newNode->prev = tmp;          // newnode এর previous এর tmp node রাখা হচ্ছে।
}
