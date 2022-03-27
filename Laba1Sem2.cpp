#include<stdlib.h>
#include<iostream>

#include "Forest.h"
#include "tree.h"
#include "shrub.h"
#include "coniferous.h"
#include "deciduous.h"
#include "vertical.h"
#include "liana-shaped.h"

int main(int argc, char** argv) 
{
	bool f = true;
	int a = 10;
	std::cout << "Hi\n";
	//if (argc > 1)
	//{
	//	a = atoi(argv[1]);
	//}
	//else
	//	return 1;
	TTree tree1;
	tree1.SetHeight(100);
	tree1.SetDensity(500);

	TTree tree2 = tree1;

	TTree tree3(50, 700);

	tree3.SetConiferousTree(true);

	tree3.Print();

	TShrub shrub1(10, 700);

	shrub1.Print();

	TCoiferous coiferous(75, 500, 5);

	coiferous.SetConiferousTree(true);

	coiferous.Print();

	TDeciduous deciduous(30, 1000, 2);

	deciduous.SetConiferousTree(false);

	deciduous.Print();

	TVertical vertical(10, 800, 50.1);

	vertical.Print();

	TLianashaped lianashaped(1, 200, 500.1);

	lianashaped.Print();

	return 0;
}