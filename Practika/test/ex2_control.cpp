#include <iostream>
using namespace std;

class Distance {
 public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { 
		cout << "\nconstructor default\n"; 
	}

	Distance(float meters) : MTF(3.280833F) {
		float fltfeet = MTF * meters;
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
		cout << "\nconstructor one parameter\n";
	}

	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{ }

	void getdist()
	{
		cout << "\nEnter feet: "; cin >> feet;
		cout << "Enter inches: ";  cin >> inches;
	}

	void showdist() const {
		cout << feet << "\'-" << inches << '\"';
	}

	Distance operator+ (Distance) const;

	/   operator float() const {
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

	void operator= (Distance);

 private:
	const float MTF;
	int feet;
	float inches;

};

void Distance::operator= (Distance dist) {
	Distance::feet = dist.feet;
	Distance::inches = dist.inches;
}

Distance Distance::operator+ (Distance d2) const {
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

int main()
{

	float mtrs;
	Distance dist1 = 2.35F;

	Distance dist101;
	cout << "\ndist101 = ";
	dist101.showdist();

	cout << "\ndist1 = ";
	dist1.showdist();

	cout << "\ndist101 = ";
	dist101.showdist();
	mtrs = static_cast<float>(dist1);
	cout << "\ndist1 = " << mtrs << " meters\n";
	Distance dist2(5, 10.25);

	mtrs = dist2;
	cout << "\ndist2 = " << mtrs << " meters\n";


	cout << "\ndist2 = " << mtrs << " meters\n";
	Distance dist11 = dist1 + dist2;

	Distance testDist;
	testDist = dist2;
	cout << "\ntestDist = " << static_cast<float>(testDist) << " meters\n";

	return 0;
}
