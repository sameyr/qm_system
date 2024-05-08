# Linked List

* Why do we use "Node* head = new Node()" to declare a new node and not " Node head "?
   
    In C++, when you declare a variable of type Node, such as Node 'head', you are allocating memory for that variable on the stack. However, in the case of a linked list, you typically want to dynamically allocate memory for each node because you don't know in advance how many nodes you will need and you want them to persist beyond the scope of the current function.

    So, Node* head = new Node(); is used to dynamically allocate memory for a new node on the heap. This way, the node will persist until it is explicitly deallocated (usually by using delete), and you can create as many nodes as you need without worrying about running out of stack space.

    Additionally, by using Node*, you are storing a pointer to the node rather than the node itself. This is essential for building a linked list, where each node needs to store a reference to the next node in the list. 