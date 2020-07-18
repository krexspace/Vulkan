# Ubuntu Linux Vulkan SDK  - Steps 

## VULKAN SDK INSTALL  

Download VULKAN SDK tar.gz  
Explode it to any directory  
Set paths 
gedit .bashrc  
VULKAN SDK ref: https://vulkan.lunarg.com/doc/sdk/1.2.141.2/linux/getting_started.html    
export VULKAN_SDK=~/sdks/vulkansdk-linux-x86_64-1.2.141.2/1.2.141.2/x86_64  
export PATH=$VULKAN_SDK/bin:$PATH  
export LD_LIBRARY_PATH=$VULKAN_SDK/lib:$LD_LIBRARY_PATH  
export VK_LAYER_PATH=$VULKAN_SDK/etc/vulkan/explicit_layer.d  
That’s it for vulkan sdk (assuming Nvidia drivers are installed)  
Test by running:  vulkaninfo (Super useful info)  

--- 

## ASSIMP dependency 
 

Get assimp from github (https://github.com/assimp/assimp/blob/master/Build.md)   
Build using cmake   
cmake CMakeLists.txt   
make install   
That’s it!   

--- 

##  Get SW VulkanLab Code from git 
Build it with cmake   
https://github.com/krexspace/VulkanLab.git   
mkdir build_linux64   
cd build_linux64   
cmake -S .. -B . 

---
