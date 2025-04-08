//এই function এর মাধ্যমে  যেকোনো given position থেকে value delete করা হবে।
//এখানে head এবং position নেয়া হচ্ছে parameter এ।
void delete_at_position(Node *head, int pos) 
{
    Node *tmp = head; //temporary variable এ head রাখা হচ্ছে।
    for (int i = 1; i <= pos - 1; i++) //এই loop এর মাধ্যমে আমরা position অব্দি যাচ্ছি।
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next; // একটা delete node এ যেই node করতে হবে সেটা রাখা হচ্ছে।
    tmp->next = tmp->next->next; // delete node এর পরের value এর সাথে আগের value এর connection create করা হচ্ছে।
    tmp->next->prev = tmp; //delete node এর পরের value এর previous এ আগের value রাখা হচ্ছে। 
    delete deleteNode; // node টা delete করে দেয়া হচ্ছে memory level থেকে। এতে address টা পরবর্তী যেকোনো value এর জন্য memory address টা available থাকবে।
}


//এই function এর মাধ্যমে tail node এর value delete করা হচ্ছে।
//parameter এ head node এবং tail node এর address নেয়া হচ্ছে।
void delete_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail; //as it is del node create করা হচ্ছে
    tail = tail->prev; //tail এ তার previous node রাখা হচ্ছে
    delete deleteNode; //এর পর del node delete করে দেয়া হচ্ছে
    tail->next = NULL; এবং tail এর next এ NULL রাখা হচ্ছে। যাতে এটা list এর end value হয়।
}

// head থেকে value delete করার process টাও tail এর মতো খালি variable গুলো opposite হবে।
void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
