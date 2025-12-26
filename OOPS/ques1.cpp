#include<iostream>
using namespace std;
class Book{
    private:
    char name;
    int price;
    int noOfPages;
    //setter
    public:
    void setname(char n){
        name=n;
    }
    void setprice(int pr){
        price=pr;
    }
    void setnp(int page){
        noOfPages=page;
    }

    int countBooks(int p){
        if(price<p)
            return 1;
        else{
            return 0;
        }
    }

    bool isBookPresent(char book){
        if(name==book)
            return true;
        else    
            return false;
    }

};
int main(){
    Book harrypotter;
    harrypotter.setname('H');
    harrypotter.setprice(1000);
    harrypotter.setnp(500);
    cout<<harrypotter.countBooks(2000)<<endl;
    cout<<harrypotter.isBookPresent('B');

}