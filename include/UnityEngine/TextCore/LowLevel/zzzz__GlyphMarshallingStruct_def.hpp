#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphMarshallingStruct)
namespace UnityEngine::TextCore {
struct GlyphClassDefinitionType;
}
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct);
// Type: UnityEngine.TextCore.LowLevel::GlyphMarshallingStruct
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15531))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphMarshallingStruct
struct CORDL_TYPE GlyphMarshallingStruct : public ::bs_hook::ValueTypeWrapper<0x34> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field index offset 0x0
 __declspec(property(get=__get_index, put=__set_index)) uint32_t  index;

/// @brief Field metrics offset 0x4
 __declspec(property(get=__get_metrics, put=__set_metrics)) ::UnityEngine::TextCore::GlyphMetrics  metrics;

/// @brief Field glyphRect offset 0x18
 __declspec(property(get=__get_glyphRect, put=__set_glyphRect)) ::UnityEngine::TextCore::GlyphRect  glyphRect;

/// @brief Field scale offset 0x28
 __declspec(property(get=__get_scale, put=__set_scale)) float_t  scale;

/// @brief Field atlasIndex offset 0x2c
 __declspec(property(get=__get_atlasIndex, put=__set_atlasIndex)) int32_t  atlasIndex;

/// @brief Field classDefinitionType offset 0x30
 __declspec(property(get=__get_classDefinitionType, put=__set_classDefinitionType)) ::UnityEngine::TextCore::GlyphClassDefinitionType  classDefinitionType;

constexpr void __set_index(uint32_t  value) ;

constexpr uint32_t& __get_index() ;

constexpr uint32_t const& __get_index() const;

constexpr void __set_metrics(::UnityEngine::TextCore::GlyphMetrics  value) ;

constexpr ::UnityEngine::TextCore::GlyphMetrics& __get_metrics() ;

constexpr ::UnityEngine::TextCore::GlyphMetrics const& __get_metrics() const;

constexpr void __set_glyphRect(::UnityEngine::TextCore::GlyphRect  value) ;

constexpr ::UnityEngine::TextCore::GlyphRect& __get_glyphRect() ;

constexpr ::UnityEngine::TextCore::GlyphRect const& __get_glyphRect() const;

constexpr void __set_scale(float_t  value) ;

constexpr float_t& __get_scale() ;

constexpr float_t const& __get_scale() const;

constexpr void __set_atlasIndex(int32_t  value) ;

constexpr int32_t& __get_atlasIndex() ;

constexpr int32_t const& __get_atlasIndex() const;

constexpr void __set_classDefinitionType(::UnityEngine::TextCore::GlyphClassDefinitionType  value) ;

constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType& __get_classDefinitionType() ;

constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType const& __get_classDefinitionType() const;

// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "::UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: None }, CppParam { name: "glyphRect", ty: "::UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "classDefinitionType", ty: "::UnityEngine::TextCore::GlyphClassDefinitionType", modifiers: "", def_value: None }]
constexpr GlyphMarshallingStruct(uint32_t  index, ::UnityEngine::TextCore::GlyphMetrics  metrics, ::UnityEngine::TextCore::GlyphRect  glyphRect, float_t  scale, int32_t  atlasIndex, ::UnityEngine::TextCore::GlyphClassDefinitionType  classDefinitionType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphMarshallingStruct(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x34>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphMarshallingStruct()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, 0x34>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, "UnityEngine.TextCore.LowLevel", "GlyphMarshallingStruct");
