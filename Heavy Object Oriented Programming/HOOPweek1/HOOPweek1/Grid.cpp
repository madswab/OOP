#include "TimeTable.cpp"

class Grid 
{
private:
	// voor grid.
	int width, height;

public:
	char TimeTable::textGrid;
	void drawGrid(int w, int h, char textGridTimeTable[][8]);

};


// maakt een grid van vakjes en zet de teks er in.
void Grid::drawGrid(int w, int h, char textGridTimeTable[][8])
{
	w = width;
	h = height;
	textGridTimeTable = TimeTable::textGrid;
}









