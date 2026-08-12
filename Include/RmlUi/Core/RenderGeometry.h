#pragma once

#include "Colour.h"
#include "Types.h"

#include <cstdint>

namespace Rml {

enum class RenderGeometrySemantic {
	Unknown,
	Quad,
	NinePatch,
	BackgroundBorder,
	GlyphRun,
	RoundedClip,
	LayerComposite,
};

struct RenderGeometryMetadata {
	RenderGeometrySemantic semantic = RenderGeometrySemantic::Unknown;
	Vector4f local_bounds = {};
	Vector4f destination_edge_widths = {};
	Vector4f texture_source_insets = {};
	Vector4f border_widths = {};
	ColourbPremultiplied background_color = {};
	Array<ColourbPremultiplied, 4> border_colors = {};
	Vector4f corner_radii = {};
	Vector<int> quad_boundaries;
	Vector<int> glyph_quad_boundaries;
	String document_source;
	String source_identifier;
	uintptr_t element_address = 0;
	bool generic_fallback_permitted = true;

	bool operator==(const RenderGeometryMetadata&) const = default;
};

} // namespace Rml
