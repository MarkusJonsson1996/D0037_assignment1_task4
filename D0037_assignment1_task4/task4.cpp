#include <iostream>
#include <string>
using namespace std;

//#define TASK4
#define TASK5

int main() {
	
	int qi = 0;
	char c_awnser[15];
	string awnser;

	string questions[6] = { "What's your name? ",
							"What's your age? ",
							"What's your gender? ",
							"What's your adress? ",
							"Are you married (y/n)? ",
							"What's your height (m)? "
	};

	struct per_s {
		string name;
		int age;
		string gender;
		string adress;
		bool married;
		float height;
	}per1;

	while (qi < 6) {
		cout << questions[qi];

#ifdef TASK4
		cin >> awnser;
#endif
#ifdef TASK5
		scanf("%14s", c_awnser);
		awnser.assign(c_awnser);
#endif

		switch (qi)
		{
		case 0:
			per1.name = awnser;
			break;

		case 1:
			per1.age = stoi(awnser);
			break;

		case 2:
			per1.gender = awnser;
			break;

		case 3:
			per1.adress = awnser;
			break;

		case 4:
			if (awnser[0] == 'y')
				per1.married = true;
			else
				per1.married = false;
			break;

		case 5:
			per1.height = stof(awnser);
			break;

		default:
			break;
		}

		qi++;
	}
#ifdef TASK4
	cout << endl;
	cout << "You've entered: " << endl;
	cout << "Name: " << per1.name << endl;
	cout << "Age: " << per1.age << endl;
	cout << "Gender: " << per1.gender << endl;
	cout << "Adress: " << per1.adress << endl;

	if (per1.married)
		cout << "Married: Yes" << endl;
	else
		cout << "Married: No" << endl;

	cout << "Height: " << per1.height << endl;
#endif

#ifdef TASK5
	printf("\nYou've entered: \n");
	printf("Name: %s\n", per1.name.c_str());
	printf("Age: %i\n", per1.age);
	printf("Gender: %s\n", per1.gender.c_str());
	printf("Adress: %s\n", per1.adress.c_str());
	printf("Married: %i\n", per1.married);
	printf("Height: %f\n", per1.height);


#endif
}