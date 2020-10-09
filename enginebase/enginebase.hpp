/*
* Engine Base
* Provides the Engine API to be used by the Engine Scripts and external interfaces
* Vulkan or graphics api independant layer
*/

#include <vector>
#include <glm/glm.hpp>
#include <math.h>
#include <string>
#include <memory>

using namespace std;
namespace qgen {
	struct Camera {

	}; 

	struct Scene {
		string name;
	};

	struct Transform {

	};

	struct MeshShape {

	};

	struct MeshInstance {
		virtual Transform getTransform() = 0;
		virtual MeshShape getMeshShape() = 0;
	};


	class Material {

	};

	class Texture {

	};

	class MaterialInstance {
		virtual Material getMaterial() = 0;
	};

	class Shader {
		string vert;
		string frag;
	};

	/*
	* Scene builder
	*/
	struct SceneBuilder {
		shared_ptr<Scene> scene;
		virtual shared_ptr<Scene> createScene() = 0;
	};

	/*
	* GLTF
	*/
	struct GltfLoader {
		string path;
	};
} // namespace qgen