#ifndef DOTTEDLINE_H
#define DOTTEDLINE_H

#include "LineStyle.h"

class DottedLine: public LineStyle
{
	
public:

 DottedLine(Colour colour, shared_ptr<Display> display_ptr);
	virtual void plotLine(PointPair end_points) override;
	
	
private:

unsigned int FunctionCallNumber;

};


#endif
