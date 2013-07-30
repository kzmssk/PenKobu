
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

const int screenWidth = 1280;				//��ʂ̉𑜓x
const int screenHenght = 960;				//��ʂ̉𑜓x
const double scale = screenWidth / 1920.0;	//���R���^�u���b�g��1920�Ȃ̂ŁA����ɍ��킹��

class Painter{
private:
	cv::Mat lineScreen;
	cv::Mat mainScreen;

	
	std::string windowName;
public:
	Painter(){
		cv::Mat lineScreen(screenHenght, screenWidth, CV_8UC3, cv::Scalar(255, 255, 255));
		cv::Mat mainScreen(screenHenght, screenWidth, CV_8UC3);
		////window�ݒ�
		windowName = "painter";
		cv::namedWindow(windowName, 1);

	}
	~Painter(){
		mainScreen.release();
		lineScreen.release();
	}

	cv::Mat draw(int x, int y, int pressure){
		//��ʂ̏���
		mainScreen = cv::Scalar(255, 255, 255);

		//���C����`�悷��
		if(pressure > 0) cv::circle(lineScreen, cv::Point(x*scale, y*scale), pressure/200.0, cv::Scalar(0, 0, 0), -1, CV_AA);
		lineScreen.copyTo(mainScreen);

		//�}�E�X��`�悷��
		cv::circle(mainScreen, cv::Point(x*scale, y*scale), 2, cv::Scalar(200, 0, 200), -1, CV_AA);

		cv::imshow(windowName, mainScreen);
		return mainScreen;
	}
};
