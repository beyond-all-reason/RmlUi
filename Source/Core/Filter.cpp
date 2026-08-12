#include "../../Include/RmlUi/Core/Filter.h"
#include "../../Include/RmlUi/Core/RenderManager.h"

namespace Rml {

Filter::Filter() {}

Filter::~Filter() {}

bool Filter::GetInlineBrightness(float& /*value*/) const
{
	return false;
}

void Filter::ExtendInkOverflow(Element* /*element*/, Rectanglef& /*scissor_region*/) const {}

FilterInstancer::FilterInstancer() {}

FilterInstancer::~FilterInstancer() {}

} // namespace Rml
