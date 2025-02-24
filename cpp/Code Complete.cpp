#include <iostream>
#include<fstream>
#include <string.h>
#include <iomanip>
#include<conio.h>

using namespace std;

void addRecord();//Fx to write data to file from memory

class Student {
private:
    int rollno;
    char name[20];
    char course[20];
    char gender[10];
    int age;
    int std;

public:
    char *getName() {
        return name;
    }

    int getRollNo() {
        return rollno;
    }

    void getData() {
        cout << "Student Details\n";

        cout << "Roll No:";
        cin >> rollno;

        cout << "Name:";
        cin >> name;

        cout << "Course:";
        cin >> course;


        cout << "Gender:";
        cin >> gender;

        cout << "Age:";
        cin >> age;

        cout << "Standard:";
        cin >> std;
    }

    void showData() {
        cout << "Student Details\n";
        cout << "Roll No:" << rollno << endl;
        cout << "Name:" << name << endl;
        cout << "Course:" << course << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Standard:" << std << endl;
    }

    void modifyData() {
        cout << "Roll No.:" << rollno << endl;
        cout << "Student Details\n";

        cout << "Roll No:";
        cin >> rollno;

        cout << "Name:";
        cin >> name;

        cout << "Course:";
        cin >> course;



        cout << "Gender:";
        cin >> gender;

        cout << "Age:";
        cin >> age;

        cout << "Standard:";
        cin >> std;
    }

    void heading() {
        cout.setf(ios::left);
        cout << setw(10) << "Roll No";
        cout << setw(20) << "Name";
        cout << setw(10) <<
"Course";
        cout << setw(10) <<
 "Gender";
        cout << setw(5) << "Age";
        cout << setw(5) << "Std";
        cout << endl;
    }

    void listData() {
        cout.setf(ios::left);
        cout << setw(10) << rollno;
        cout << setw(20) << name;
        cout << setw(10) <<
course ;
        cout << setw(10) <<
 gender;
        cout << setw(5) << age;
        cout << setw(5) << std;
        cout << endl;
    }
};
class mainclass{
    public:
void menu() {
    cout << "\nSTUDENT RECORDS\n";
    cout << "===============\n";
    cout << "0.Exit\n";
    cout << "1.Register New Student\n";
    cout << "2.Show All Students\n";
    cout << "3.Search by roll No:\n";
    cout << "4.Search by Name:\n";
    cout << "5.Modify Record:\n";
    cout << "6.Delete Record:\n";

    cout << "Enter your choice:\n";
}

void addRecord()
{
	ofstream fout;
	fout.open("Doc 1.xlsx",ios::out|ios::app|ios::binary);
	s.getData();
	fout.write((char*)&s,sizeof(Student));
	
	fout.close();
	cout<<"\nData Saved to file....\n";
}
};

int maintanor() {
    int n = 0, ch, rn, i, flag = 0, pos;
    Student s[10];
    do {
        system("cls");
        menu();
        cin >> ch;
        switch (ch) {
        case 1:addRecord();
            //s[n].getData();
            //n++;
            //cout << "\nRecord saved successfully...\n";
            break;

        case 2:
            if (n > 0) {
                s[0].heading();
                for (i = 0; i < n; i++) {
                    s[i].listData();
                }
            }
            else {
                cout << "\nNothing to display...\n";
            }
            break;

        case 3:
            if (n > 0) {
                cout << "\nEnter roll No. to display:";
                cin >> rn;
                for(int i=0;i<n;i++)
						{
							if(rn==s[i].getRollNo())
							{
								s[i].showData();
								flag++;
							}
							else
							{
							cout<<"\nNothing to display...\n";
							}
							if(flag==0)
							{
								cout<<"\nNo such roll no.found....\n";
							}

						}
					}
			break;

			case 0: exit(0);

			default:cout<<"\nInvalid Choise..\n";
		}

		cout<<"\n\nPress any key to continue.....\n";
		getch();

	}while(ch!=0);

}}
;

int main()
{
//Student s;
mainclass m;
m.maintanor();

return 0;
}

