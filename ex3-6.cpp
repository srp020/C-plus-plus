#include <iostream>
using namespace std;
int main() {
    int start,end,h,m,s,;
    cout << "Data inputs are integer!.\n";
    cout << "Enter start kilometer:";
    cin >> start >>;
    cout << "Enter end kilometer:";
    cin >> end;
    cout << "Enter time used(hour minute second)";
    cin >> h,m,s;
    int total =h*3600+m*60+s;
    int distance =end-start;
    double average=distance/(total/3600);
    cout <<"Car travel " <<distance<< "Kilometers in "<<h,m,s<<endl;
    cout << "Average velocity was"<<average<<"kph.";
    return 0;
}