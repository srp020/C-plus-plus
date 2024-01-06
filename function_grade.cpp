#include <iostream>
using namespace std;

string calgrade(float score)
{
    if (score >= 80 && score <= 100)
    {
        return "A";
    }
    else if(score >= 75 && score <= 79)
    {
        return "B+";
    }
    else if(score >= 70 && score <= 74)
    {
        return "B";
    }
    else if(score >= 65 && score <= 69)
    {
        return "C+";
    }
    else if(score >= 60 && score <= 64)
    {
        return "C";
    }
    else if(score >= 55 && score <= 59)
    {
        return "D+";
    }
    else if(score >= 50 && score <= 54)
    {
        return "D";
    }
    else if(score >= 0 && score <= 49)
    {
        return "F";
    }
    else
    {
        return "Error!";
    }
}

void display(string value, int std)
{
    cout << "Student " << std << " Grade : " << value << endl;
}

void input_score(float& score, int std)
{
    cout << "Student " << std << " " << "Enter Score : ";
    cin >> score;
}

int main()
{
    float score = 0;
    int j = 1;

    int arrScore[19];

    for(int i = 0; i < 20; i++)
    {
        input_score(score, i + 1);
        arrScore[i] = score;
    }

    cout << "\n=============================\n\n";

    for(int i = 0; i < 20; i++)
    {
        display(calgrade(arrScore[i]), j++);
    }

    return 0;
}