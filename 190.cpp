#include<iostream>
#include<queue>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int marks;

    Student(string name,int marks){
        this->name=name;
        this->marks=marks;
    }

    bool operator<(const Student &other) const {
        return marks < other.marks;
    }
};

ostream &operator<<(ostream &os, const Student &s){
    os << s.name << " " << s.marks;
    return os;
}

int main(){
    priority_queue<Student> pq;
    pq.push(Student("Snow",71));
    pq.push(Student("Rins",78));
    pq.push(Student("Leftenant",83));
    while (!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    
    
    return 0;
}