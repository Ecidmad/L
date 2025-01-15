#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
using namespace std;
void printVector(const vector<float>& vec)
{
    for (const auto& elem : vec)
    {
        cout << elem << " \n";
    }
}
class Settings
{
public:
    static void Add(const string& key, const string& value)
    {
        settingsMap[key] = value;
    }

    static string Get(const string& key)
    {
        if (settingsMap.find(key) != settingsMap.end())
        {
            return settingsMap[key];
        }
        return "Key not found";
    }

    static void Print() {
        for (const auto& pair : settingsMap) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
private:
    static map<string, string> settingsMap;
};
map<string, string> Settings::settingsMap;
int main()
{
    //vector<float> vec;
    //vec.push_back(1.1f);
    //vec.push_back(2.2f);
    //vec.push_back(3.3f);
    //vec.push_back(4.4f);
    //vec.push_back(5.5f);
    //vector<float>::iterator i = vec.begin();
    //i = i + 3;
    //cout << "Initial vector: ";
    //printVector(vec);
    //vec.insert(i, 6.6f);
    //cout << "Vector after insertion: ";
    //printVector(vec);
    //i = vec.end();
    //vec.erase(i);
    //cout << "Vector after removing last element: ";
    //printVector(vec);
    Settings::Add("Language", "C++");
    Settings::Add("Version", "1.0");
    Settings::Add("Platform", "Linux");
    cout << "Settings map:" << endl;
    cout << "Get Language: " << Settings::Get("Language") << endl;
    cout << "Get UnknownKey: " << Settings::Get("UnknownKey") << endl;
    Settings::Print();
}