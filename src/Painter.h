
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
#pragma comment(lib,"opencv_core245d.lib")
#pragma comment(lib,"opencv_highgui245d.lib")
#pragma comment(lib,"opencv_calib3d245d.lib")
#pragma comment(lib,"opencv_imgproc245d.lib")
#pragma comment(lib,"opencv_features2d245d.lib")
#else
#pragma comment(lib,"opencv_core245.lib")
#pragma comment(lib,"opencv_highgui245.lib")
#pragma comment(lib,"opencv_calib3d245.lib")
#pragma comment(lib,"opencv_imgproc245.lib")
#pragma comment(lib,"opencv_features2d245.lib")
#endif

const int screenWidth = 1280;				//画面の解像度
const int screenHenght = 960;				//画面の解像度
const double scale = screenWidth / 1920.0;	//ワコムタブレットが1920なので、それに合わせる

class Painter{
private:
	cv::Mat lineScreen;
	cv::Mat mainScreen;

	
	std::string windowName;
public:
	Painter(){
		cv::Mat lineScreen(screenHenght, screenWidth, CV_8UC3, cv::Scalar(255, 255, 255));
		cv::Mat mainScreen(screenHenght, screenWidth, CV_8UC3);
		////window設定
		windowName = "painter";
		cv::namedWindow(windowName, 1);

	}
	~Painter(){
		mainScreen.release();
		lineScreen.release();
	}

	cv::Mat draw(int x, int y, int pressure){
		//画面の消去
		mainScreen = cv::Scalar(255, 255, 255);

		//ラインを描画する
		if(pressure > 0) cv::circle(lineScreen, cv::Point(x*scale, y*scale), pressure/200.0, cv::Scalar(0, 0, 0), -1, CV_AA);
		lineScreen.copyTo(mainScreen);

		//マウスを描画する
		cv::circle(mainScreen, cv::Point(x*scale, y*scale), 2, cv::Scalar(200, 0, 200), -1, CV_AA);

		cv::imshow(windowName, mainScreen);
		return mainScreen;
	}
};
