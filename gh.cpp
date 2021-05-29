#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> z{ 6,8,3,56 }; //create a list
	z.push_back(420); //add a new item at the end of the list
	z.pop_back(); //delete the last item of the list
	cout << z.size() << endl; //get the size of the list
	cout << *z.begin() << endl; //knows the memory adresse of the first item of the list
	cout << *z.end() << endl; //knows the memory adresse of the last item of the list
	cout << z[3] << endl; //prints the item 3 in the list
	z.at(3); //the same as z[3]
	z.clear(); // clears the list

	//first way of printing all items of a list
	for (int i = 0; i < z.size(); i++)
	{
		cout << z[i] << endl;
	}

	//second way of printing all items of a list
	for (auto item : z) {
		cout << item << endl;
	}
}