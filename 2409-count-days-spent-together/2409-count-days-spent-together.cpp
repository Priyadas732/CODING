#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    int getDayOfYear(const string& date) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        int totalDays = day;
        for (int m = 0; m < month - 1; ++m) {
            totalDays += days[m];
        }
        return totalDays;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int startA = getDayOfYear(arriveAlice);
        int endA = getDayOfYear(leaveAlice);
        int startB = getDayOfYear(arriveBob);
        int endB = getDayOfYear(leaveBob);

        int overlapStart = max(startA, startB);
        int overlapEnd = min(endA, endB);

        return max(0, overlapEnd - overlapStart + 1);
    }
};