#ifndef Isothetic_h
#define Isothetic_h

#include <iostream>
#include <vector>
#include <math.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

void drawGrid(Mat& image, int size);
vector<Point2i> makeOIP(Mat& img, int gsize);
vector<Point2i> animateOIP(Mat& img, Mat& final, int gsize);
void drawOIC(Mat& img, vector<Point2i> vertices, bool filled);
void patternRandRGB(Mat& src, Mat& dest, int gsize);

#endif