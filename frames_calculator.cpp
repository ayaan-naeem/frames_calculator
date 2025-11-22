#include <iostream>
using namespace std;

void greet() {

    int minutes;
    int frames_per_seconds;
    int number_of_frames;

    cout << "Enter Number of Minutes :";
    cin >> minutes;

    cout << "Enter Frames Per Second : ";
    cin >> frames_per_seconds;

    number_of_frames = frames_per_seconds * minutes * 60;

    cout << "Total Number of Frames will be : "<<number_of_frames<<endl;
}

int main() {

    int count = 1;

    while (count <= 5) {  
        greet();          
        count++;          

    }
    return 0;
}
