#include "hall.h"

hall::hall()
{
	length=0;
	width=0;
	area=0;
	hall_cost=1000;
}
istream& operator >>(istream& input,hall& h)
{ 
	cout << "Enter length and width of hall: ";
	input >> h.length ;
	input >> h.width;
    h.area= h.get_area();
	h.hall_cost = h.area * 2;
	return input;
}
ostream& operator <<(ostream& output,hall& h)
{
	output << "Length: "<<h.length << endl;
	output << "Width: " << h.width << endl;
	output << "Area: "  << h.area << endl;
	output << "Cost of hall"<< h.hall_cost << endl;
	return output;
}
float hall:: operator +(hall& h)
{
	return (this->area + h.area) ;
}
float hall:: get_area()
{
	area = length*width;
	return area;
}