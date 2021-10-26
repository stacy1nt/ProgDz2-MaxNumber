#include <iostream>
#include <vector>

using namespace std;

int MaxNumber (vector<int> numbers){
    int max_num = numbers[0];

    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    return max_num;
}

int main() {
    vector<int> input;
    int quantity;
    cout << "How many numbers do you want to insert?" << endl;
    cin >> quantity;
    cout << "insert " << quantity << " numbers" << endl;

    for (int i = 0; i < quantity; ++i) {
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
    }

    int max_input;
    max_input = MaxNumber(input);
    cout << "Max number is " << max_input << endl;
    cout << "You can insert more numbers" << endl;
    int tmp;
    while (cin >> tmp){
        if (tmp > MaxNumber(input)){
            cout << "New max number is " << tmp << endl;
            break;
        }
    }
    return 0;
}