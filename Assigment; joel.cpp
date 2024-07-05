#include <iostream>
using namespace std;
int main() {
 /*int score ;
    cout <<" Enter the score you had:\n ";
    cin>>score;

    if (score <= 100 and score >= 80){
        cout <<'A';
    }
    else if (score < 80 and score>=75){
    cout <<"B+";
    }
    else if (score< 75 and score >=70){
        cout <<'B';
    }
    else if (score < 65 and score >= 60){
        cout <<"C+";
    }
    else if (score <60 and score >= 55){
        cout << "C";
    }
    else if (score <55 and score >= 50){
        cout <<"D";
    }
    else if (score < 50 and score >= 45){
        cout <<"E";
    }
    else if (score <45 and score >= 0){
        cout <<"F";
    }
    else{
        cout << "In valid score;Your score must range from  0 to 100";
    }

         writing this in switch case.*/

    int Score;
    cout << "Enter your score:";
    cin >>  Score;

    int category;
    if (Score <= 100 and Score >= 80) {
        category = 1;
    }
    else if (Score < 80 and Score >= 75) {
        category = 2;
    }
    else if (Score < 75 and Score >= 70) {
        category = 3;
    }
    else if (Score < 70 and Score >= 65) {
        category = 4;
    }
    else if (Score < 65 and Score >= 60) {
        category = 5;
    }
    else if (Score < 60 and Score >= 55) {
        category = 6;
    }
    else if (Score < 55 and Score >= 50){
        category = 7;}
    else if (Score < 50 and Score >= 45){
   category = 8;}
    else if (Score <45 and Score >= 0){
        category = 9;
    }

    else {
        category = 9;
    }

    switch (category) {
        case 1:
            cout << 'A';
            break;
        case 2:
            cout << "B+";
            break;
        case 3:
            cout << "B";
            break;
        case 4:
            cout << "C+";
            break;
        case 5:
            cout << "C";
            break;
        case 6:
            cout << "D";
            break;
        case 7:
            cout << "E";
            break;
        case 8:
            cout << "F";
            break;
        case 9:
            cout << "Invalid score; Your score must range from 0 to 100";
            break;
    }

    return 0;
}
