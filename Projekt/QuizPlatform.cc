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
    friend class Quiz;

private:
    void show();
    void initQuiz(int quiz, string chosen);
    void results(int score);
};

class Quiz
{
public:
    Quiz(int quiz)
    {
        pick(quiz);
        score = 0;
    };
    friend class MainScreen;

private:
    int score;
    string questions[20];
    string answers[20];
    char correct[20];
    void pick(int quiz);
    int start(string chosen);
    void ask(int i);
};

void MainScreen::show()
{
    system("CLS");
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
        initQuiz(0, "C++");
        break;
    case 1:
        system("CLS");
        initQuiz(1, "JAVA");
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

void MainScreen::initQuiz(int quiz, string chosen)
{
    Quiz A(quiz);
    results(A.start(chosen));
    //A.pick(quiz);
    return show();
}

void MainScreen::results(int score)
{
    system("CLS");
    cout << "Your score: " << score << " / " << 20 << endl;
    cout << "Percentage: " << (score / 20.0) * 100 << endl;
    cout << endl;
    cout << "Press any key to show main screen." << endl;
    getch();
}

void Quiz::pick(int quiz)
{
    ifstream q;
    ifstream a;
    ifstream c;
    switch (quiz)
    {
    case 0:
        //ifstream q("questionsA.txt");
        //ifstream a("answersA.txt");
        //ifstream c("correctA.txt");
        q.open("questionsA.txt");
        a.open("answersA.txt");
        c.open("correctA.txt");
        break;
    case 1:
        //ifstream q("questionsA.txt");
        //ifstream a("answersA.txt");
        //ifstream c("correctA.txt");
        q.open("questionsB.txt");
        a.open("answersB.txt");
        c.open("correctB.txt");
        break;
    }
    if (q.is_open() && a.is_open() && c.is_open())
    {
        vector<int> numbers = randoms(20, 25);
        string line;
        int i = 0;
        int t;
        while (getline(q, line))
        {
            if (count(numbers.begin(), numbers.end(), i))
            {
                for (t = 0; t < 20; t++)
                {
                    if (numbers[t] == i)
                        break;
                }
                questions[t] = line;
            }
            i++;
        }
        q.close();
        i = 0;
        while (getline(a, line))
        {
            if (count(numbers.begin(), numbers.end(), i))
            {
                for (t = 0; t < 20; t++)
                {
                    if (numbers[t] == i)
                        break;
                }
                answers[t] = line;
            }
            i++;
        }
        a.close();
        i = 0;
        char l;
        while (!c.eof())
        {
            c.get(l);
            if (l == '\n')
                continue;
            if (count(numbers.begin(), numbers.end(), i))
            {
                for (t = 0; t < 20; t++)
                {
                    if (numbers[t] == i)
                        break;
                }
                correct[t] = l;
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

int Quiz::start(string chosen)
{
    system("CLS");
    cout << "You have chosen " << chosen << " Quiz\n";
    cout << "You will be asked 20 questions.\n";
    cout << "Every question has only one correct answer\n";
    cout << "For every correct answer you get 1 point.\n";
    cout << "To pass this quiz you have to gain at least 10 points.\n";
    cout << "Good luck!\n\n";
    cout << "Press any key to start\n";
    getch();
    ask(0);
    return score;
}

void Quiz::ask(int i)
{
    if (i == 20)
    {
        return;
    }
    system("CLS");
    char a = 'A';
    char answer;
    cout << questions[i] << "\n\n";
    int temp = 0;
    int pos;
    while (true)
    {
        pos = answers[i].substr(temp).find("|");
        if (pos == string::npos)
        {
            cout << (char)a << ". " << answers[i].substr(temp) << "\n\n";
            break;
        }
        cout << (char)a << ". " << answers[i].substr(temp, pos) << "\n\n";
        temp += pos + 1;
        a += 1;
    }
    cin.clear();
    fflush(stdin);
    cin >> answer;
    if (answer == correct[i] || (char)(answer - 32) == correct[i])
    {
        score += 1;
    }
    ask(i + 1);
}

int main(int argc, char *argv[])
{
    srand(time(0));
    MainScreen M;
    return 0;
}
