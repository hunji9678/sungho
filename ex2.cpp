#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

void print_matInfo(string m_name, Mat m)
{
	cout << "[ " << m_name << " 행렬]" << endl;
	cout << "    채널수  = " << m.channels() << endl;
	cout << "    행 x 열 = " << m.rows << " x " << m.cols << endl << endl;
	cout << m << endl << endl;
}

int main()
{
	int data[] = {1,2,3,4,5,6,7,8,9,10,11,12};

	Mat_<int> m1(2, 6, data);
	print_matInfo("m1(2, 6)", m1);

	Mat m2 = m1.reshape(2);
	print_matInfo("m2(2, 3)", m2);

	Mat m3 = m1.reshape(3);
	print_matInfo("m3(2, 2)", m3);

	Mat m4 = m1.reshape(3, 1);
	print_matInfo("m4(1, 4)", m4);

	Mat m5 = m1.reshape(1, 3);
	print_matInfo("m5(3, 4)", m5);

	Mat m6 = m1.reshape(1, 4);
	print_matInfo("m6(4, 3)", m6);
	
	return  0;
}