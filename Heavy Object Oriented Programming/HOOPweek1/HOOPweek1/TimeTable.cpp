class TimeTable
{
private:


public:
	// bepaald wat er in ieder vakje komt van het grid. (15 lessen + 1 voor de dagen aan te duiden, 7 dagen + 1 om de lessen aan te geven)
	static char textGrid[16][8];
	void setText(char t[16][8]);

};



// zet de juiste tekst.
void TimeTable::setText(char t[16][8]) 
{
	t = textGrid;
}


