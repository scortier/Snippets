
class Solution {
	int finalInstances(int instances, vector<int>&averageUtil) {

		for (int i = 0; i < averageUtil.size(); i++) {

			if (averageUtil[i] < 25 && instances > 1) {
				instances = (int) (ceil(instances / 2.0));
				i += 10;
			}
			if (i < averageUtil.size() && averageUtil[i] > 60 && instances < 200000000) {
				instances *= 2;
				i += 10;
			}
		}

		return instances;
	}
};

//java

public class UtilizationChecks {

	public int finalInstances(int instances, int[] averageUtil) {

		for (int i = 0; i < averageUtil.length; i++) {

			if (averageUtil[i] < 25 && instances > 1) {
				instances = (int) (Math.ceil(instances / 2.0));
				i += 10;
			}
			if (i < averageUtil.length && averageUtil[i] > 60 && instances < 200000000) {
				instances *= 2;
				i += 10;
			}
		}

		return instances;
	}
}
