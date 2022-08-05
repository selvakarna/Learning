//
//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//int main()
//{
//    std::string image_path = samples::findFile("/home/selva/eclipse-workspace/Testimg/Test.jpeg");
//    Mat img = imread(image_path, IMREAD_COLOR);
//    if(img.empty())
//    {
//        std::cout << "Could not read the image: " << image_path << std::endl;
//        return 1;
//    }
//
//
//        imwrite("/home/selva/eclipse-workspace/Testimg/starry_night.png", img);
//
//    return 0;
//}
//
//


//#include<opencv2/opencv.hpp>//OpenCV header to use VideoCapture class//
//// Include Libraries
//
//#include<iostream>
//
//// Namespace to nullify use of cv::function(); syntax
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	// initialize a video capture object
//	VideoCapture vid_capture(0);
//	int frame_width = static_cast<int>(vid_capture.get(3));
//    int frame_height = static_cast<int>(vid_capture.get(4));
//    Size frame_size(frame_width, frame_height);
//    int frames_per_second= 20;
//
//	VideoWriter output("/home/selva/eclipse-workspace/Testimg/out.mkv", VideoWriter::fourcc('M', 'J', 'P', 'G'),frames_per_second, frame_size);
//
//	// Print error message if the stream is invalid
//	if (!vid_capture.isOpened())
//	{
//		cout << "Error opening video stream or file" << endl;
//	}
//
//	else
//	{
//		// Obtain fps and frame count by get() method and print
//		// You can replace 5 with CAP_PROP_FPS as well, they are enumerations
//		int fps = vid_capture.get(5);
//		cout << "Frames per second :" << fps;
//
//		// Obtain frame_count using opencv built in frame count reading method
//		// You can replace 7 with CAP_PROP_FRAME_COUNT as well, they are enumerations
//		int frame_count = vid_capture.get(7);
//		cout << "  Frame count :" << frame_count;
//	}
//
//
////	while (vid_capture.isOpened()).
//	for ( int i =0; i<1000; i++)
//{
//        // Initialize frame matrix
//        Mat frame;
//
//          // Initialize a boolean to check if frames are there or not
//        bool isSuccess = vid_capture.read(frame);
//
//        // If frames are not there, close it
//        if (isSuccess == false)
//        {
//            cout << "Stream disconnected" << endl;
//            break;
//        }
//
//
//            // If frames are present
//        if(isSuccess == true)
//        {
//            //display frames
//            output.write(frame);
//         //   if (waitKey(10) >= 0)
//               //         break;
//
//            //destroyAllWindows();
//                  // display frames
//                  //imshow("Frame", frame);
//
//
//
//        }
// }
//	vid_capture.release();
//}
// _++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//#include "opencv2/opencv.hpp"
//#include <iostream>
//using namespace cv;
//using namespace std;
//int main(){
//   cout << "Built with OpenCV " << CV_VERSION << endl;
//   Mat image;
//   Mat src;
//   VideoCapture capture;
//   capture.open(0);
//   capture >> src;
//   bool isColor = (src.type() == CV_8UC3);
//   VideoWriter writer;
//   int codec = VideoWriter::fourcc('D','I','v','X');  // 'M','P','4','V' //DIVX ,XVID
//
//
//
//   double fps = 15.0;
//   string filename ="/home/selva/Desktop/first.avi";
//   Size sizeFrame(640,480);
//   writer.open(filename, codec, fps, sizeFrame, isColor);
//   cout << "Started writing video... " << endl;
//   for (int i = 0 ; i < 60 ; i ++)
//   {
//      capture >> image;
//      Mat xframe;
//      resize(image,xframe,sizeFrame);
//      writer.write(xframe);
//      imwrite("/home/selva/Desktop/out.jpg",xframe);
//      cout << "Width : " << xframe.size().width << endl;
//      cout << "Height: " << xframe.size().height << endl;
//
//   }
//   cout << "Write complete !" << endl;
//   writer.release();
//
//   capture.release();
//
//   return 0;
//}
	//+++++++++++++++++++++++++++++++++++++++++
//#include "opencv2/opencv.hpp"
//#include <iostream>
//using namespace cv;
//
//using namespace std;
//
//int main() {
//
//
//
//namedWindow("Display window");
//
//VideoCapture cap(0);
//
//if (!cap.isOpened()) {
//
//cout << "cannot open camera";
//
//}
//
//while (true) {
//	Mat image;
//cap >> image;
//namedWindow("Dispimg", WINDOW_AUTOSIZE);
//imshow("Dispimg", image);
//
//waitKey(25);
//
//}
//
//return 0;
//
//}


//++++++++++++++++++++++++++
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(){

  // Create a VideoCapture object and use camera to capture the video
  VideoCapture cap(0);

  // Check if camera opened successfully
  if(!cap.isOpened()){
   	cout << "Error opening video stream" << endl;
        return -1;
  }

  // Default resolutions of the frame are obtained.The default resolutions are system dependent.
  int frame_width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
  int frame_height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);
//  int frame_width = 640;
//  int frame_height =480;

  // Define the codec and create VideoWriter object.The output is stored in 'outcpp.avi' file.
  VideoWriter video("outcpp2.avi", cv::VideoWriter::fourcc('M','J','P','G'), 30, Size(frame_width,frame_height));

//  while(1)
  for(int i=0; i<120;i++)
  {

    Mat frame;

    // Capture frame-by-frame
    cap.read (frame);

    // If the frame is empty, break immediately
    if (frame.empty())
      break;

    // Write the frame into the file 'outcpp.avi'
    video.write(frame);

    // Display the resulting frame
//    imshow( "Frame", frame );

    // Press  ESC on keyboard to  exit
//    char c = (char)waitKey(1);
//    if( c == 27 )
//      break;
  }

  // When everything done, release the video capture and write object
  cap.release();
  video.release();

  // Closes all the frames
  destroyAllWindows();
  return 0;
}


