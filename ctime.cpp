#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int given, purchase, change, centavo;
    cout << "\n\nMARKET RECEIPT\n\n";

    cout << "Enter Amount Purchased: ";
    cin >> purchase;
    cout << "Enter Item Price: ";
    cin >> given;

    change = given - purchase;
    centavo = change/0.25;

    if (given < purchase)
    cout << "Invalid\n";
    else
    {
        cout << "\nThe change is: " << change << endl;
        cout << "The number of centavo is: " << centavo << endl;}

    time_t now = time(0);
    char* dt = ctime(&now);
    cout << dt << endl;

    return 0;
}