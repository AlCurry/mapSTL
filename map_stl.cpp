
/* 
 * File:   map_stl.cpp
 * Author: alcurry
 *
 * Created on October 1, 2015, 10:47 PM
 * 
 * An example of a hash map utility, performing various functions with a menu interface.
 * Pieces could be used within another program.
 * Maps are a series of key value pairs, in this case the key is a string and the value is int.
 * One use of this structure could be to count the frequency of words, either adding a new pair 
 * or incrementing the value of an existing one while parsing a document.
 */

#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    map<string,int> mp;
    map<string, int>::iterator it;
    int choice, item;
    string s;
    while (1)
    {
        cout << "\n---------------------" << endl;
        cout << "Map Implementation in Stl" << endl;
        cout << "\n---------------------" << endl;
        cout << "1.Insert Element into the Map" << endl;
        cout << "2.Delete Element of the Map" << endl;
	cout << "3.Size of the Map" << endl;
        cout << "4.Find Element at a key in Map" << endl;
        cout << "5.Dislplay by Iterator" << endl;
        cout << "6.Count Elements at a specific key" << endl;
        cout << "7.Exit" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            cout << "Enter value to be inserted: ";
            cin >> item;
            cout << "Enter the key: ";
            cin >> s;
            mp.insert(pair<string,int>(s, item));
            break;
        case 2:
            cout << "Enter the mapped string to be deleted: ";
            cin >> s;
            mp.erase(s);
            break;
        case 3:
	    cout << "Size of Map: ";
	    cout << mp.size() << endl;
            break;
        case 4:
	    cout << "Enter the key at which value to be found: ";
            cin >> s;
            if (mp.count(s) != 0)
                cout << mp.find(s)->second << endl;
            else
                cout << "No Element Found" << endl;
            break;
        case 5:
	    cout << "Displaying Map by Iterator: " << endl;
            for (it = mp.begin(); it != mp.end(); it++)
            {
                cout << (*it).first << ": " << (*it).second << endl;
            }
            break;
        case 6:
            cout << "Enter the key at which number of values to be counted: ";
            cin >> s;
            cout << mp.count(s) << endl;
            break;
	case 7:
            exit(1);
	    break;
        default:
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;

}

