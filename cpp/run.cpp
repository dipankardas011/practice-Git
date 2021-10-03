#include <iostream>
using std::cin;
using std::endl;
using std::cout;

namespace Time{
    int t;
    void display(){
        cout<<"t-> "<<t<<endl;
    }
};

namespace Date{
    struct data{
        int dd, mm, yy;

        void display(){
            cout<<"in format dd-mm-yy: "<<dd<<"-"<<mm<<"-"<<yy<<endl;
        }
    };
};


int main(int argc, char** argv) {
    Time::t = 999;
    Date::data cal;
    cal.dd = 2, cal.mm = 3, cal.yy = 2999;

    Time::display();
    cal.display();
    return EXIT_SUCCESS;
}