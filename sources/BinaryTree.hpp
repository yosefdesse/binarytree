  #pragma once
  #include<iterator>
  #include <ostream>

//  yosef is the king



namespace ariel
{
    template <typename T> 


    
    class BinaryTree
    {

        private:

        struct Node
        {

            T data;
            // Node* parent = nullptr;
            Node* right = nullptr;
            Node* left = nullptr;
            Node(T value):data(value),left(nullptr), right(nullptr)
            {

            }
            ~Node(){};
          
        };
        Node *root; 



        class iterator
        {

          Node* ptr_value;
        //   Node* parent;
          public:
          iterator(Node* ptr=nullptr):ptr_value(ptr)
          {

          }
          ~iterator(){};
          bool operator==(const iterator& itr) const
          {
            return ptr_value->data==itr.ptr_value->data;
          }
          iterator& operator++()
          {
            return *this;
          }
          const iterator operator++(int)
          {
            iterator temp=*this;
            return temp;
          }
          T& operator*()const
          {
            return ptr_value->data;
          }
          T* operator->()const
          {
            return &(ptr_value->data);
          }
          // T* operator->()const {
          //    return &(pointer_to_current_node->value);
          // }
          
          bool operator!=(const iterator& itr) const
          {
             return ptr_value==itr.ptr_value;
          }
        };


         
      
        public:

        // BinaryTree(Node root):root(root)
        // {
        //    root = node;
        // }
        BinaryTree(): root(nullptr) {  };
        ~BinaryTree(){};
        // BinaryTree(T root_value):root(root_value){};
        BinaryTree& add_root( T new_root)
        {
          root = new Node(new_root);
          return *this;
        }
        BinaryTree& add_left(const T& node_value ,const T& right_value)
        {
          return *this;
        }
        BinaryTree& add_right(const T& node_value ,const T& right_value)
        {
          return *this;
        }

        iterator begin_preorder()
        {
          return iterator(root);
          }
        iterator end_preorder()
        { 
          return (nullptr);
        }
        iterator begin_inorder()
        {
          return iterator(root);
        }
        iterator end_inorder()
        {
           return (nullptr);
        }
        iterator begin_postorder()
        {
          return iterator(root);
        }
        iterator end_postorder()
        { 
          return (nullptr);
        }
        // friend ostream& operator<<(ostream& os,const T node);

        friend std::ostream& operator<<(std::ostream& os,const BinaryTree &bt)
        {
          os<<"BinaryTree";
          return os;
        }
        // friend ostream& operator<<(ostream& os,const iterator bt){return os;};


        
        //   iterator begin() const { return iterator{first, second}; }
        //   iterator end() const
        //     {
        //   return iterator{first, second};
        //     }


        iterator begin()
        {
           return iterator{root};
        }
        iterator end()
        {
           return (nullptr);
        }

 
        // class in_iterator
        // {

        //     T data;
        //     struct Node* parent;
        //     public:
        //     in_iterator(T *ptr = nullptr){};
        //     ~in_iterator(){};
        //     // in_iterator& begin();
        //     // in_iterator& end();
        //     bool operator==(T& tree);
        //     in_iterator& operator++(T& tree);
        //     in_iterator& operator*(T& tree);
        //     in_iterator& operator->(T& tree);
        //     // in_iterator& operator!=(T& tree,T& node);
        //     in_iterator& operator!=(const T &other);
        //     // in_iterator& begin() const { return iterator{first, second}; };
        //     // in_iterator& end() const{ return iterator{first, second};
            

        // };

        // class post_iterator
        // {

        //     T data;
        //     struct Node* parent;
        //     public:
        //     post_iterator(Node *ptr = nullptr){};
        //     ~post_iterator(){};
        //     // post_iterator& begin();
        //     // post_iterator& end();
        //     bool operator==(Node& tree);
        //     post_iterator& operator++(Node& tree);
        //     post_iterator& operator*(Node& tree);
        //     post_iterator& operator->(Node& tree);
        //     // post_iterator& operator!=(Node& tree);
        //     // post_iterator& begin() const { return iterator{first, second}; };
        //     // post_iterator& end() const{return iterator{first, second};
            

        // };
        
        // class pre_iterator
        // {

        //     T data;
        //     struct Node* parent;
        //     public:
        //     pre_iterator(Node *ptr = nullptr){};
        //     ~pre_iterator(){};
        //     // pre_iterator& begin();
        //     // pre_iterator& end();
        //     bool operator==(Node& tree);
        //     pre_iterator& operator++(Node& tree);
        //     pre_iterator& operator*(Node& tree);
        //     pre_iterator& operator->(Node& tree);
        //     pre_iterator& operator!=(Node& tree);
        //     // pre_iterator& begin() const { return iterator{first, second}; };
        //     // pre_iterator& end() const{return iterator{first, second};
            

        // };
           
          
        


    };
}




