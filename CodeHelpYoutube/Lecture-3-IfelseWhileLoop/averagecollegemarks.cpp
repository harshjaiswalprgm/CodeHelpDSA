#include <iostream>
using namespace std;

int main() {
    //using float bcz marks can be in points.
    float computerScienceScore, systemDesignScore, dataStructureScore;
    
  
    cout << "entetr your CS score: ";
    cin >> computerScienceScore;
    
    cout << "entetr your SD score: ";
    cin >> systemDesignScore;
    
    cout << "entetr your DS score: ";
    cin >> dataStructureScore;
    
   
    float averageScore = (computerScienceScore + systemDesignScore + dataStructureScore) / 3.0;

    
    cout << "Your average score is: " << averageScore << endl;
    if (averageScore >= 90) {
        cout << "Your grade is: A" << endl;
    }
    if (averageScore >= 80 && averageScore < 90) {
        cout << "Your grade is: B" << endl;
    }
    if (averageScore >= 70 && averageScore < 80) {
        cout << "Your grade is: C" << endl;
    }
    if (averageScore >= 60 && averageScore < 70) {
        cout << "Your grade is: D" << endl;
    }
    if (averageScore < 60) {
       
        cout << "Your grade is: F" << endl;
    }

    return 0;
}