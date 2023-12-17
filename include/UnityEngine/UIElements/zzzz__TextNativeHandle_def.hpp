#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextNativeHandle)
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextNativeHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextNativeHandle);
// Type: UnityEngine.UIElements::TextNativeHandle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7146))
// CS Name: ::UnityEngine.UIElements::TextNativeHandle
struct CORDL_TYPE TextNativeHandle : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <MeasuredSizes>k__BackingField offset 0x0
 __declspec(property(get=__get__MeasuredSizes_k__BackingField, put=__set__MeasuredSizes_k__BackingField)) ::UnityEngine::Vector2  _MeasuredSizes_k__BackingField;

/// @brief Field <RoundedSizes>k__BackingField offset 0x8
 __declspec(property(get=__get__RoundedSizes_k__BackingField, put=__set__RoundedSizes_k__BackingField)) ::UnityEngine::Vector2  _RoundedSizes_k__BackingField;

/// @brief Field textVertices offset 0x10
 __declspec(property(get=__get_textVertices, put=__set_textVertices)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  textVertices;

/// @brief Field m_PreviousTextParamsHash offset 0x20
 __declspec(property(get=__get_m_PreviousTextParamsHash, put=__set_m_PreviousTextParamsHash)) int32_t  m_PreviousTextParamsHash;

 __declspec(property(get=get_MeasuredSizes, put=set_MeasuredSizes)) ::UnityEngine::Vector2  MeasuredSizes;

 __declspec(property(get=get_RoundedSizes, put=set_RoundedSizes)) ::UnityEngine::Vector2  RoundedSizes;

/// @brief Convert operator to "::UnityEngine::UIElements::ITextHandle"
constexpr operator  ::UnityEngine::UIElements::ITextHandle*() ;

constexpr void __set__MeasuredSizes_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__MeasuredSizes_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__MeasuredSizes_k__BackingField() const;

constexpr void __set__RoundedSizes_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__RoundedSizes_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__RoundedSizes_k__BackingField() const;

constexpr void __set_textVertices(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>& __get_textVertices() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> const& __get_textVertices() const;

constexpr void __set_m_PreviousTextParamsHash(int32_t  value) ;

constexpr int32_t& __get_m_PreviousTextParamsHash() ;

constexpr int32_t const& __get_m_PreviousTextParamsHash() const;

/// @brief Method get_MeasuredSizes addr 0x2e46424 size 0x8 virtual true final true
inline ::UnityEngine::Vector2 get_MeasuredSizes() ;

/// @brief Method set_MeasuredSizes addr 0x2e4642c size 0x8 virtual true final true
inline void set_MeasuredSizes(::UnityEngine::Vector2  value) ;

/// @brief Method get_RoundedSizes addr 0x2e46434 size 0x8 virtual true final true
inline ::UnityEngine::Vector2 get_RoundedSizes() ;

/// @brief Method set_RoundedSizes addr 0x2e4643c size 0x8 virtual true final true
inline void set_RoundedSizes(::UnityEngine::Vector2  value) ;

/// @brief Method New addr 0x2e46444 size 0x5c virtual false final false
static inline ::UnityEngine::UIElements::ITextHandle* New() ;

/// @brief Method IsLegacy addr 0x2e464a0 size 0x8 virtual true final true
inline bool IsLegacy() ;

/// @brief Method GetLineHeight addr 0x2e464a8 size 0x70 virtual true final true
inline float_t GetLineHeight(int32_t  characterIndex, ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  textParams, float_t  textScaling, float_t  pixelPerPoint) ;

/// @brief Method Update addr 0x2e4657c size 0x70 virtual true final true
inline ::UnityEngine::TextCore::Text::TextInfo* Update(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  parms, float_t  pixelsPerPoint) ;

/// @brief Method GetVertices addr 0x2e465ec size 0x210 virtual false final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> GetVertices(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  parms, float_t  scaling) ;

/// @brief Method GetCursorPosition addr 0x2e467fc size 0x58 virtual true final true
inline ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters  parms, float_t  scaling) ;

/// @brief Method ComputeTextWidth addr 0x2e46854 size 0x80 virtual true final true
inline float_t ComputeTextWidth(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  parms, float_t  scaling) ;

/// @brief Method ComputeTextHeight addr 0x2e46518 size 0x64 virtual true final true
inline float_t ComputeTextHeight(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  parms, float_t  scaling) ;

/// @brief Method IsElided addr 0x2e468d4 size 0x8 virtual true final true
inline bool IsElided() ;

// Ctor Parameters [CppParam { name: "_MeasuredSizes_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_RoundedSizes_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "textVertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>", modifiers: "", def_value: None }, CppParam { name: "m_PreviousTextParamsHash", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextNativeHandle(::UnityEngine::Vector2  _MeasuredSizes_k__BackingField, ::UnityEngine::Vector2  _RoundedSizes_k__BackingField, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  textVertices, int32_t  m_PreviousTextParamsHash) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextNativeHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextNativeHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextNativeHandle, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextNativeHandle, "UnityEngine.UIElements", "TextNativeHandle");
