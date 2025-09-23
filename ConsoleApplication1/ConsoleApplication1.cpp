
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	/* Задача 1
	int n;
	cin >> n;
	int maxi = 0,mini=INT16_MAX,a,t,per=0;
	int otvet=0;
	if (n > 2) {
		cin >> a;
		t = a;
		n--;
		while (n != 0) {
			cin >> a;
			if (per == 0) {
				if (t < a) per = 1;
				else if (t > a) per = -1;
				else per = 0;
			}
			if (per == 1) {
				if (t < a) {
					maxi = max({ maxi,a,t });
					mini = min({ mini,a,t });
					otvet = max({ abs(maxi - mini),otvet });
				}
				else {
					per = 0;
					otvet = max({ abs(maxi - mini),otvet });
					maxi = 0;
					mini = INT16_MAX;
				}
			}
			else if (per == -1) {
				if (t > a) {
					maxi = max({ maxi,a,t });
					mini = min({ mini,a,t });
					otvet = max({ abs(maxi - mini),otvet });
				}
				else {
					per = 0;
					otvet = max({ abs(maxi - mini),otvet });
					maxi = 0;
					mini = INT16_MAX;
				}

			}
			t = a;
			n--;
		}
		cout << otvet;
	}
	else {
		if (n == 0) cout << "No";
		else if (n == 1) {
			cin >> a;
			cout << "No";
		}
		else if (n == 2) {
			cin >> a;
			int t;
			t = a;
			cin >> a;
			cout << abs(t - a);
		}
	}*/




	/* Задача 2
	int n;
	cin >> n;
	int a,count=0,otvet=0;
	while (n != 0) {
		cin >> a;
		if (a == 0) {
			count++;
			otvet = max({ otvet,count });
		}
		else {
			otvet = max({ otvet,count });
			count = 0;
		}
		n--;
	}
	cout << otvet;*/

	/*
	int n;
	cin >> n;
	int t = 1, f = 1, count=0;
	for (int i = 1;i <= n;i++) {
		if ((t <= i) && (i < (10 * t))) {
			count += f;
		}
		else {
			f++;
			t = t * 10;
			if ((t <= i) && (i < (10 * t))) {
				count += f;
			}
		}
	}
	cout << count;*/



    int n;
	cin >> n;
	int ost;
	int a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
	for (int i = 0;i <= n;i++) {
		while (i != 0) {
			ost = i % 10;
			i = i / 10;
			if (ost == 0) a0++;
			if (ost == 1) a1++;
			if (ost == 2) a2++;
			if (ost == 3) a3++;
			if (ost == 4) a4++;
			if (ost == 5) a5++;
			if (ost == 0) a0++;
			if (ost == 0) a0++;
			if (ost == 0) a0++;
			if (ost == 0) a0++;
		}
	}
	cout << a0;
	return 0;
}

