// 11_2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	cv::Mat src = imread("D:\\etest.jpg");
	cv::Mat dst;
	cv::Mat a[3];
	cv::Mat b[3];
	split(src, a);
	for (int i = 0; i < 3; i++) {
		equalizeHist(a[i], b[i]);
	}
	merge(b, 3, dst);
	cv::imshow("src", src);
	cv::imshow("dst", dst);
	cv::waitKey(0);
    return 0;
}

