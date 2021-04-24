#include <iostream>
#include <string>
using namespace std;

string str;
int k, len;

bool isKPeriodic(string str, int len, int k) 
{
        for (int i = k; i < len; i = i + k)
        {
            if (i + k > len)
                return false;
            else
            {
                for (int j = 0; j < len; j++)

                {
                    if (str[i] != str[j])
                        return false;
                    else i++;
                }
                return true;
            }
        }
        return true;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "������� ����������� ������ �� �������� "<<endl;
    cin >> str;
    cout << "������� ����������� ����� �������� ������� " << endl;
    cin >> k;
    int len = str.length();
    if (isKPeriodic(str, len, k))
        cout << "�������� ������ " << str << " ������ ������� " << k <<endl;
    else
        cout << "�������� ������ " << str << " ������� " << k << " �� ������ "<<endl;
    return 0;
}