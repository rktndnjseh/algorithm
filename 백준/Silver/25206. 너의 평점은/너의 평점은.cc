#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<string> subject(20);  // 과목을 저장할 벡터
    vector<float> score(20);    // 점수를 저장할 벡터
    vector<string> grade(20);    // 학점을 저장할 벡터
    unordered_map<string, float> gradePoints = {
    {"A+", 4.5f}, {"A0", 4.0f}, {"B+", 3.5f}, {"B0", 3.0f}, {"C+", 2.5f}, {"C0", 2.0f}, {"D+", 1.5f}, {"D0", 1.0f},{"F", 0.0f}
    };
    vector<float> gradeScore(20);
    float sum = 0;
    float result = 0;
    int countP = 0;

    for (int i = 0; i < 20; i++) {
        cin >> subject[i] >> score[i] >> grade[i];
        sum += score[i];

        auto it = gradePoints.find(grade[i]);
        if (it != gradePoints.end()) {
            gradeScore[i] = it->second;
            result += score[i] * gradeScore[i];
        }

        if (grade[i] == "P") {
            sum -= score[i];
            countP++;
        }
    }
    cout << result / sum << endl;

    return 0;
}