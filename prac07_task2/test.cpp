import key_value_pair;
import <iostream>;
import <string>;
import <format>;
import <concepts>; // Added

using namespace std;

int main()
{
    KeyValuePair<int, double> kv1{ 11, 2.33 };
    cout << format("{} = {}\n", kv1.getKey(), kv1.getValue());
}
