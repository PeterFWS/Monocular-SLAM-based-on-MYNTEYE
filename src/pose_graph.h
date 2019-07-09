#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <eigen3/Eigen/Dense>

namespace vins_PoseGraph_reader 
{
    // This namespace define the functions used to process pose graph generated from VINS-Mono

    void loadPoseGraph();
    void saveImages_txt_in_COLMAP_format(int index, Eigen::Vector3d VIO_T, Eigen::Vector3d PG_T, Eigen::Quaterniond VIO_Q, Eigen::Quaterniond PG_Q);
    void saveCameras_txt_in_COLMAP_format();
    void savePoints3D_txt_in_COLMAP_format();   

    // Global path
    const std::string POSE_GRAPH_SAVE_PATH = "/home/shu/catkin_ws/src/VINS-Mono/pose_graph/TEST_bag5/";
    const std::string IMAGES_TXT_SAVE_PATH = "/home/shu/fangwenSHU/Monocular-SLAM-based-on-MYNTEYE/output/";
    const std::string CAMERAS_TXT_SAVE_PATH = "/home/shu/fangwenSHU/Monocular-SLAM-based-on-MYNTEYE/output/";
    const std::string POINTS3D_TXT_SAVE_PATH = "/home/shu/fangwenSHU/Monocular-SLAM-based-on-MYNTEYE/output/";
}

// Global function utilities
void testFunc();
std::string modify_img_name(int index_num);
void write_camera_model(FILE *pFile, const int& camera_id, const std::string& camera_model);


namespace orbslam2_PoseGraph_reader 
{
    // This namespace define the functions used to process key-frames/ camera-frames generated from ORB-SLAM2
    void loadKeyFrames();
    void saveImages_txt_in_COLMAP_format();
    void saveCameras_txt_in_COLMAP_format();
    void savePoints3D_txt_in_COLMAP_format();

    const std::string POSE_GRAPH_SAVE_PATH = "";
    const std::string IMAGES_TXT_SAVE_PATH = "/home/shu/fangwenSHU/Monocular-SLAM-based-on-MYNTEYE/output/";
    const std::string CAMERAS_TXT_SAVE_PATH = "/home/shu/fangwenSHU/Monocular-SLAM-based-on-MYNTEYE/output/";
    const std::string POINTS3D_TXT_SAVE_PATH = "/home/shu/fangwenSHU/Monocular-SLAM-based-on-MYNTEYE/output/";
}