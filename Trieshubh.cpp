class Node{
public:
    char data;
    bool terminal;
    unordered_map<char, Node*> children;

    Node(char data){
        this->data = data;
        this->terminal = false;

    }

};

class Trie {
    Node* root;
    int count;

    Trie() {
        this->root = new Node('\0');
        this->count = 0;
    }

    void addword(string str){
       Node* temp = root;
       rep(i,sz(str)){
           char ch = str[i];
           if(temp->children.count(ch)){
               temp = temp->children[ch];
           }
           else{
               Node* n = new Node(ch);
               temp->children[ch] = n;
               temp = n;
           }
       }
       temp->terminal = true;


    }

    bool search(st str){
        Node* temp = root;
        rep(i,sz(str)){
            char ch = str[i];
            if(temp->children.count(ch)){
                temp = temp->children[ch];
            }
            else{
                return false;
            }
        }
        return temp->terminal;


    }


};
