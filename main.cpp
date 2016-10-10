#include <iostream>

using namespace std;

int main()
{
    cout <<  " HW#4 " << endl << endl;

    cout.setf(ios::fixed, ios::floatfield);  // specify the number of decimal places (2 digits after a period)
    cout.precision(2);


 int id, jdNum, bestId;
 double score, avScore, bestScore=0;

     cout << "Please enter athlete ID number " << endl;
    cin >> id;

     while (id >= 0) {           // read until user enters a negative number for STOP the program

    double low=10, high=0, sumScore=0;

     cout << "Enter a number of judges "<< endl;
     cin >> jdNum;

     cout << "Enter a score of each judge "<< endl;
     for (int i=0; i<jdNum; i++) {
        cin >> score;

              if (score > high){
                high = score;}
              else if (score < low){
                low = score;}

        sumScore = sumScore + score;
        avScore = (sumScore - high - low) / jdNum;
}

    if (avScore > bestScore){
        bestScore = avScore;
        bestId = id;
    }


    cout << " Athlete ID " << id << " average score is " << avScore << endl;
    //cout<< " Sumscore " << sumScore << " high " <<high<< " low "<< low<< endl;
    cout << endl << endl;

     cout << " Enter the id of the next athlete, or negative number to STOP the program ... "<<endl;
		cin>>id;

}

 cout<< " Athlete ID " << bestId << " has best score of " << bestScore << endl;

    return 0;
}
