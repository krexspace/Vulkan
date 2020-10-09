#pragma once
/*
* View frustum culling class
*
* Copyright (C) 2016 by Sascha Willems - www.saschawillems.de
*
* This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
*/

#include <vector>
#include <glm/glm.hpp>
#include <math.h>
#include <string>
#include <memory>
#include "enginebase.hpp"

namespace qgen {
	struct QgenSceneBuilder : SceneBuilder {
		shared_ptr<Scene> createScene() override;
	};
} // namespace qgen