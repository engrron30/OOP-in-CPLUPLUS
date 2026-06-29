#include <stdio.h>
#include <iostream>
using namespace std;

class Settings {
    private:
        static Settings* instance;
        Settings() {
            volume = 50;
        }

    public:
        int volume;
        static Settings *getInstance() {
            if (instance == nullptr)
                instance = new Settings();
            return instance;
        }
};

Settings* Settings::instance = nullptr;

int main()
{
    Settings *s1 = Settings::getInstance();
    Settings *s2 = Settings::getInstance();
    cout << "S1 Volume: " << s1->volume << endl;
    cout << "S2 Volume: " << s2->volume << endl;

    s1->volume = 80;
    cout << "S1 Volume: " << s1->volume << endl;
    cout << "S2 Volume: " << s2->volume << endl;

    s2->volume = 130;
    cout << "S1 Volume: " << s1->volume << endl;
    cout << "S2 Volume: " << s2->volume << endl;

	return 0;
}
