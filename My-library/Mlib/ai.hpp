#pragma once
#include <vector>
#include <string>
#include "Util/dataPoint.hpp"
#include "Ai/layer.hpp"

namespace Mlib {
	class Ai {
	public:
		Ai(std::vector<int> inSize);
		Ai(std::string path);
		std::vector<double> forwardProp(DataPoint datapoint);
		double loss(std::vector<DataPoint> datapoints);
		void learn(std::vector<DataPoint> datapoints, double learnRate, double momentum);
		void save() const;

	private:	
		void backProp(DataPoint datapoint);
		std::vector<int> sizes;
		std::vector<Layer> layers;
	};
}