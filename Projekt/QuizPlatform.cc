#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <conio.h>

using namespace std;

vector<int> randoms(int s, int numOfQuestions)
{
    vector<int> numbers;
    int el;
    while (numbers.size() < s)
    {
        el = rand() % numOfQuestions;
        while (count(numbers.begin(), numbers.end(), el))
        {
            el = rand() % numOfQuestions;
        }
        numbers.push_back(el);
    }
    return numbers;
}

class MainScreen
{
public:
    MainScreen() { show(); };
    friend class QuizA;

private:
    void show();
    void initQuizA();
    void initQuizB();
    void results(int score);
};

class QuizA
{
public:
    QuizA()
    {
        pick();
        score = 0;
    };
    friend class MainScreen;

private:
    int score;
    string questions[20];
    string answers[20];
    char correct[20];
    void pick();
    void start();
    void ask(int i);
};

void MainScreen::show()
{
    int q;
    cout << "Welcome!!!" << endl;
    cout << "Choose a quiz: " << endl;
    cout << "0: C++ Quiz\n\n";
    cout << "1: JAVA Quiz\n\n";
    cin >> q;
    switch (q)
    {
    case 0:
        system("CLS");
        initQuizA();
        break;
    default:
        cout << "There is no such quiz" << endl;
        cout << "Press any key to start again" << endl;
        getch();
        system("CLS");
        show();
        break;
    }
}

void MainScreen::initQuizA()
{
    QuizA A;
    A.start();
}

void MainScreen::results(int score)
{
    cout << "Your score: " << score << " / " << 20 << endl;
    cout << "Percentage: " << score / 20 << endl;
}

void QuizA::pick()
{
    ifstream q("questionsA.txt");
    ifstream a("answersA.txt");
    ifstream c("correctA.txt");
    if (q.is_open() && a.is_open() && c.is_open())
    {
        vector<int> numbers = randoms(20, 25);
        string line;
        int i = 0;
        int t = 0;
        while (getline(q, line))
        {
            if (count(numbers.begin(), numbers.end(), i))
            {
                questions[t] = line;
                t++;
            }
            i++;
        }
        q.close();
        i = 0;
        t = 0;
        while(getline(a, line)){
            if (count(numbers.begin(), numbers.end(), i))
            {
                answers[t] = line;
                t++;
            }
            i++;
        }
        a.close();
        i = 0;
        t = 0;
        char l;
        while(!c.eof()){
            c.get(l);
            if(l == '\n') continue;
            if (count(numbers.begin(), numbers.end(), i))
            {
                correct[t] = l;
                t++;
            }
            i++;
        }
    }
    else
    {
        system("CLS");
        cout << "Unable to open a file" << endl;
    }
}

void QuizA::start()
{
    system("CLS");
    cout << "You have choosen C++ Quiz\n";
    cout << "You will be asked 20 questions.\n";
    cout << "Every question has only one correct answer";
    cout << "For every correct answer you get 1 point.\n";
    cout << "To pass this quiz you have to gain at least 10 points.\n";
    cout << "Good luck!\n\n";
    cout << "Press any key to start\n";
    getch();
    ask(0);
}

void QuizA::ask(int i){
    if(i == 20){
        return;
    }
    system("CLS");
    char a = 'A';
    char answer;
    cout << questions[i] << "\n";
    cout << answers[i] << "\n\n";
    cin >> answer;
    if(answer == correct[i] || (char)(answer-32) == correct[i]) {
        score += 1;
    }
    ask(i+1);
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    MainScreen M;
    return 0;
}
