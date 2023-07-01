#include "ProgressBar.h"
#include <math.h>

ProgressBar::ProgressBar()
{
    //ctor
}

ProgressBar::~ProgressBar()
{
    //dtor
}

std::string ProgressBar::display(float length) {
	std::string result = "[";
	for (int i = 0; i < round(length); i++) {
		result += "#";
	}
	if (length < 10.0) {
		result += "...";
	}
	result += "]";
	return(result);
}