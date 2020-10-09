#pragma once
#include "enginescript.hpp"

namespace qgen {

	shared_ptr<Scene> QgenSceneBuilder::createScene() {
		// this->scene
		scene = make_shared<qgen::Scene>();
		scene->name = "QGEN Scene";
		return scene;
	}

} // namespace qgen