#include <iostream>
#include <string>

using namespace std;

int main()
{

    cout << "\n\t\t\033[1;32m****** Welcome to Quiz of Idiots 2024 !! ******\033[0m" << endl;
    cout << "\n\033[1mYou Will Be Having \033[1;31m4 Question\033[0m \033[1mTry To Answer Them Correctly." << endl;
    cout << "But, First Let Me Know Your Name : \033[0m\033[34m";

    string name;
    getline(cin >> ws, name);

    string Questions[] = {
        "Q1) Who is the President of India ?",
        "Q2) Who is the Prime Minister of India ?",
        "Q3) What is Red Teaming ?",
        "Q4) DDoS stands for ?"};

    string Options[4][4] = {
        {"1) Ram Nath Kovind", "2) Nirmala Sita Raman", "3) Droupadi Murmu", "4) " + name},
        {"1) Sha Rukh Khan", "2) Race 3 Ka Salman Khan", "3) Aaae Baingan", "4) Mr. Modi"},
        {"1) Red teaming is the practice of simulating real-world cyberattacks to identify vulnerabilities in an organization’s systems.", "2) Aaadi Baadi", "3) Delhi Ka Dalal tu, Ja Me ni de ra javab !!", "4) Red teaming is the art of teaming red in a red environment while having all the mental focus on the red sky."},
        {"1) Ishk Meraaa Dardddd Meraaaaa", "2) Tune Naaa Samjha Meriii Jaaa", "3) Denial-of-service attack", "4) Vishuudh Chutiye ho tum Itna bhi ni pata"}};

    int Answers[] = {3, 4, 1, 3};

    int s = size(Questions);
    int a = size(Options[0]);
    int score = 0;
    for (int i = 0; i < s; i++)
    {

        cout << "\n\033[0m\033[1m********************************************\033[0m" << endl;
        cout << "\n\033[1;33m" << Questions[i] << "\033[0m\n"
             << endl;

        for (int j = 0; j < a; j++)
        {
            cout << "\t" << Options[i][j] << endl;
        }

        int ans;
        cout << "\n\033[1mYour Answer : ";
        cin >> ans;

        if (ans == Answers[i])
        {
            cout << "\033[1;32mCorrect !!\033[0m" << endl;
            score++;
        }
        else
        {
            cout << "\033[1;31mWrong !!" << endl;
            cout << "\033[1;32mCorrect Ans : \033[0m" << "\033[1m" << Answers[i] << "\033[0m" << endl;
        }
    }

    cout << "\n\t\033[1mThe Quiz is Now over !!" << endl;
    cout << "\tYou Scored \033[1;32m" << score << "\033[0m \033[1mOut of\033[1;31m 5 \033[0m" << endl;
    cout << "\t\033[1mPercentage Accuracy : \033[1;32m" << (((double)score / 5) * 100) << "%\033[0m\n" << endl;
    return 0;
}