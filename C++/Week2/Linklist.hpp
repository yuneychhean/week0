#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int value;
    Node * next;
};

class linklist{

    private:
    string name;

    public:
    // Contructor = method but special
    linklist(string name){
        this -> name = name;
    }
    linklist(){
        name = "defult";
    }
    void setName (string name ){ // store data 
        this -> name = name ;
    }
    string getName (){ // 
        return name;
    }
    // method = function
    void sayHi(linklist &Other) {
        cout << "Hi! " << Other.getName() << endl;
    }
    
};

