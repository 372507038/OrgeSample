
#ifdef _DEBUG


#pragma comment(lib,"libboost_thread-vc110-mt-gd-1_55.lib")
#pragma comment(lib,"libboost_system-vc110-mt-gd-1_55.lib")
#pragma comment(lib,"libboost_date_time-vc110-mt-gd-1_55.lib")
#pragma comment(lib,"libboost_chrono-vc110-mt-gd-1_55.lib")


#pragma comment(lib,"OgreMain_d.lib")
#pragma comment(lib,"OgreOverlay_d.lib")
#pragma comment(lib,"OgreRTShaderSystem_d.lib")
#pragma comment(lib,"OgreVolume_d.lib")
#pragma comment(lib,"OgreTerrain_d.lib")
#pragma comment(lib,"OgreProperty_d.lib")
#pragma comment(lib,"OgrePaging_d.lib")
#pragma comment(lib,"OIS_d.lib")
#else

#pragma comment(lib,"libboost_chrono-vc110-mt-1_55.lib")
#pragma comment(lib," libboost_date_time-vc110-mt-1_55.lib")
#pragma comment(lib,"libboost_system-vc110-mt-1_55.lib")
#pragma comment(lib,"libboost_thread-vc110-mt-1_55.lib")

#pragma comment(lib,"OgreMain.lib")
#pragma comment(lib,"OgreOverlay.lib")
#pragma comment(lib,"OgreRTShaderSystem.lib")
#pragma comment(lib,"OgreVolume.lib")
#pragma comment(lib,"OgreTerrain.lib")
#pragma comment(lib,"OgreProperty.lib")
#pragma comment(lib,"OgrePaging.lib")
#pragma comment(lib,"OIS.lib")



#endif 





    
   

    
    
    

#pragma warning(disable:4819)