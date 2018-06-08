#include "car.h"
#include <queue>
#include <vector>

int main() {
	setlocale(LC_ALL, "russian");
	srand(time( NULL));

	vector<queue<Car>> boxes(3);
	
	queue <Car> box1, box2, box3;

	Car first("lexus", 15);
	Car second("suzuki", 30);
	Car third("volvo", 20); 
	

	box1.push(first);
	box2.push(second);
	box3.push(third);

	boxes.push_back(box1);
	boxes.push_back(box2);
	boxes.push_back(box2);
	

	/*for (int i = 0; i < 3; i++)
		cout <<boxes.at(i) << endl;
	*/
	for (auto it = boxes.begin(); it<boxes.end(); ++it)
		cout << *it << ends;

	system("pause");
	return 0;
}