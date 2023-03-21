#include"IsKPeriodic.hpp"

bool IsKPeriodic(const std::string& str, const int& K) {

	if (str.size() > 0 && K > 0 && !(str.size() % K)) {
		for (size_t i = K; i < str.size(); ++i) {
			if (str[i - K] != str[i]) {
				return false;
			}
		}
		return true;
	}
	else {
		return false;
	}
}