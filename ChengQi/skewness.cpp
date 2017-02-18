// skewness.cpp contains the implementation of skewness function 

#include <vector>
#include <numeric>
#include "skewness.h"

// skewness takes a reference to a constant double vector
//that holds the time series and returns its skewness
double skewness(const std::vector<double> &series){
	// Initialize s as the sample standard deviation of the series
	double s = 0;
	// Initialize m as the mean of the series
	double m = 0;
	// Compute the sample mean of the series
	m = accumulate(series.cbegin(), series.cend(), 0)/series.size();
	
	
} 
