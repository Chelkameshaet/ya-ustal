// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Participant {
    int id;
    int score;
};
bool compareParticipants(const Participant& a, const Participant& b) {
    return a.score > b.score; 
}

int main() 
{
    setlocale(0, "");
    int numParticipants;
    cout << "Введите количество участников: ";
    cin >> numParticipants;
    vector<Participant> participants;
    for (int i = 0; i < numParticipants; ++i) {
        Participant participant;
        cout << "Введите идентификационный номер для участника " << i + 1 << ": ";
        cin >> participant.id;
        cout << "Введите количество баллов для участника " << i + 1 << ": ";
        cin >> participant.score;
        participants.push_back(participant);
    }

    sort(participants.begin(), participants.end(), compareParticipants);

    cout << "\nОтсортированный список участников:\n";
    cout << "Идентификационный номер | Баллы\n";
    cout << "-------------------------|------\n";
    for (const auto& participant : participants) {
        cout << "           " << participant.id << "           |   " << participant.score << "\n";
    }

    return 0;
}