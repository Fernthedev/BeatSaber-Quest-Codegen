#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FaceInfo)
// Forward declare root types
namespace UnityEngine::TextCore {
struct FaceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::FaceInfo);
// Type: UnityEngine.TextCore::FaceInfo
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15526))
// CS Name: ::UnityEngine.TextCore::FaceInfo
struct CORDL_TYPE FaceInfo : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_FaceIndex offset 0x0
 __declspec(property(get=__get_m_FaceIndex, put=__set_m_FaceIndex)) int32_t  m_FaceIndex;

/// @brief Field m_FamilyName offset 0x8
 __declspec(property(get=__get_m_FamilyName, put=__set_m_FamilyName)) ::StringW  m_FamilyName;

/// @brief Field m_StyleName offset 0x10
 __declspec(property(get=__get_m_StyleName, put=__set_m_StyleName)) ::StringW  m_StyleName;

/// @brief Field m_PointSize offset 0x18
 __declspec(property(get=__get_m_PointSize, put=__set_m_PointSize)) int32_t  m_PointSize;

/// @brief Field m_Scale offset 0x1c
 __declspec(property(get=__get_m_Scale, put=__set_m_Scale)) float_t  m_Scale;

/// @brief Field m_UnitsPerEM offset 0x20
 __declspec(property(get=__get_m_UnitsPerEM, put=__set_m_UnitsPerEM)) int32_t  m_UnitsPerEM;

/// @brief Field m_LineHeight offset 0x24
 __declspec(property(get=__get_m_LineHeight, put=__set_m_LineHeight)) float_t  m_LineHeight;

/// @brief Field m_AscentLine offset 0x28
 __declspec(property(get=__get_m_AscentLine, put=__set_m_AscentLine)) float_t  m_AscentLine;

/// @brief Field m_CapLine offset 0x2c
 __declspec(property(get=__get_m_CapLine, put=__set_m_CapLine)) float_t  m_CapLine;

/// @brief Field m_MeanLine offset 0x30
 __declspec(property(get=__get_m_MeanLine, put=__set_m_MeanLine)) float_t  m_MeanLine;

/// @brief Field m_Baseline offset 0x34
 __declspec(property(get=__get_m_Baseline, put=__set_m_Baseline)) float_t  m_Baseline;

/// @brief Field m_DescentLine offset 0x38
 __declspec(property(get=__get_m_DescentLine, put=__set_m_DescentLine)) float_t  m_DescentLine;

/// @brief Field m_SuperscriptOffset offset 0x3c
 __declspec(property(get=__get_m_SuperscriptOffset, put=__set_m_SuperscriptOffset)) float_t  m_SuperscriptOffset;

/// @brief Field m_SuperscriptSize offset 0x40
 __declspec(property(get=__get_m_SuperscriptSize, put=__set_m_SuperscriptSize)) float_t  m_SuperscriptSize;

/// @brief Field m_SubscriptOffset offset 0x44
 __declspec(property(get=__get_m_SubscriptOffset, put=__set_m_SubscriptOffset)) float_t  m_SubscriptOffset;

/// @brief Field m_SubscriptSize offset 0x48
 __declspec(property(get=__get_m_SubscriptSize, put=__set_m_SubscriptSize)) float_t  m_SubscriptSize;

/// @brief Field m_UnderlineOffset offset 0x4c
 __declspec(property(get=__get_m_UnderlineOffset, put=__set_m_UnderlineOffset)) float_t  m_UnderlineOffset;

/// @brief Field m_UnderlineThickness offset 0x50
 __declspec(property(get=__get_m_UnderlineThickness, put=__set_m_UnderlineThickness)) float_t  m_UnderlineThickness;

/// @brief Field m_StrikethroughOffset offset 0x54
 __declspec(property(get=__get_m_StrikethroughOffset, put=__set_m_StrikethroughOffset)) float_t  m_StrikethroughOffset;

/// @brief Field m_StrikethroughThickness offset 0x58
 __declspec(property(get=__get_m_StrikethroughThickness, put=__set_m_StrikethroughThickness)) float_t  m_StrikethroughThickness;

/// @brief Field m_TabWidth offset 0x5c
 __declspec(property(get=__get_m_TabWidth, put=__set_m_TabWidth)) float_t  m_TabWidth;

 __declspec(property(get=get_faceIndex)) int32_t  faceIndex;

 __declspec(property(get=get_familyName, put=set_familyName)) ::StringW  familyName;

 __declspec(property(get=get_styleName, put=set_styleName)) ::StringW  styleName;

 __declspec(property(get=get_pointSize, put=set_pointSize)) int32_t  pointSize;

 __declspec(property(get=get_scale, put=set_scale)) float_t  scale;

 __declspec(property(get=get_lineHeight, put=set_lineHeight)) float_t  lineHeight;

 __declspec(property(get=get_ascentLine, put=set_ascentLine)) float_t  ascentLine;

 __declspec(property(get=get_capLine, put=set_capLine)) float_t  capLine;

 __declspec(property(get=get_meanLine, put=set_meanLine)) float_t  meanLine;

 __declspec(property(get=get_baseline, put=set_baseline)) float_t  baseline;

 __declspec(property(get=get_descentLine, put=set_descentLine)) float_t  descentLine;

 __declspec(property(get=get_superscriptOffset, put=set_superscriptOffset)) float_t  superscriptOffset;

 __declspec(property(get=get_superscriptSize, put=set_superscriptSize)) float_t  superscriptSize;

 __declspec(property(get=get_subscriptOffset, put=set_subscriptOffset)) float_t  subscriptOffset;

 __declspec(property(get=get_subscriptSize, put=set_subscriptSize)) float_t  subscriptSize;

 __declspec(property(get=get_underlineOffset, put=set_underlineOffset)) float_t  underlineOffset;

 __declspec(property(get=get_underlineThickness, put=set_underlineThickness)) float_t  underlineThickness;

 __declspec(property(get=get_strikethroughOffset, put=set_strikethroughOffset)) float_t  strikethroughOffset;

 __declspec(property(put=set_strikethroughThickness)) float_t  strikethroughThickness;

 __declspec(property(get=get_tabWidth, put=set_tabWidth)) float_t  tabWidth;

constexpr void __set_m_FaceIndex(int32_t  value) ;

constexpr int32_t& __get_m_FaceIndex() ;

constexpr int32_t const& __get_m_FaceIndex() const;

constexpr void __set_m_FamilyName(::StringW  value) ;

constexpr ::StringW& __get_m_FamilyName() ;

constexpr ::StringW const& __get_m_FamilyName() const;

constexpr void __set_m_StyleName(::StringW  value) ;

constexpr ::StringW& __get_m_StyleName() ;

constexpr ::StringW const& __get_m_StyleName() const;

constexpr void __set_m_PointSize(int32_t  value) ;

constexpr int32_t& __get_m_PointSize() ;

constexpr int32_t const& __get_m_PointSize() const;

constexpr void __set_m_Scale(float_t  value) ;

constexpr float_t& __get_m_Scale() ;

constexpr float_t const& __get_m_Scale() const;

constexpr void __set_m_UnitsPerEM(int32_t  value) ;

constexpr int32_t& __get_m_UnitsPerEM() ;

constexpr int32_t const& __get_m_UnitsPerEM() const;

constexpr void __set_m_LineHeight(float_t  value) ;

constexpr float_t& __get_m_LineHeight() ;

constexpr float_t const& __get_m_LineHeight() const;

constexpr void __set_m_AscentLine(float_t  value) ;

constexpr float_t& __get_m_AscentLine() ;

constexpr float_t const& __get_m_AscentLine() const;

constexpr void __set_m_CapLine(float_t  value) ;

constexpr float_t& __get_m_CapLine() ;

constexpr float_t const& __get_m_CapLine() const;

constexpr void __set_m_MeanLine(float_t  value) ;

constexpr float_t& __get_m_MeanLine() ;

constexpr float_t const& __get_m_MeanLine() const;

constexpr void __set_m_Baseline(float_t  value) ;

constexpr float_t& __get_m_Baseline() ;

constexpr float_t const& __get_m_Baseline() const;

constexpr void __set_m_DescentLine(float_t  value) ;

constexpr float_t& __get_m_DescentLine() ;

constexpr float_t const& __get_m_DescentLine() const;

constexpr void __set_m_SuperscriptOffset(float_t  value) ;

constexpr float_t& __get_m_SuperscriptOffset() ;

constexpr float_t const& __get_m_SuperscriptOffset() const;

constexpr void __set_m_SuperscriptSize(float_t  value) ;

constexpr float_t& __get_m_SuperscriptSize() ;

constexpr float_t const& __get_m_SuperscriptSize() const;

constexpr void __set_m_SubscriptOffset(float_t  value) ;

constexpr float_t& __get_m_SubscriptOffset() ;

constexpr float_t const& __get_m_SubscriptOffset() const;

constexpr void __set_m_SubscriptSize(float_t  value) ;

constexpr float_t& __get_m_SubscriptSize() ;

constexpr float_t const& __get_m_SubscriptSize() const;

constexpr void __set_m_UnderlineOffset(float_t  value) ;

constexpr float_t& __get_m_UnderlineOffset() ;

constexpr float_t const& __get_m_UnderlineOffset() const;

constexpr void __set_m_UnderlineThickness(float_t  value) ;

constexpr float_t& __get_m_UnderlineThickness() ;

constexpr float_t const& __get_m_UnderlineThickness() const;

constexpr void __set_m_StrikethroughOffset(float_t  value) ;

constexpr float_t& __get_m_StrikethroughOffset() ;

constexpr float_t const& __get_m_StrikethroughOffset() const;

constexpr void __set_m_StrikethroughThickness(float_t  value) ;

constexpr float_t& __get_m_StrikethroughThickness() ;

constexpr float_t const& __get_m_StrikethroughThickness() const;

constexpr void __set_m_TabWidth(float_t  value) ;

constexpr float_t& __get_m_TabWidth() ;

constexpr float_t const& __get_m_TabWidth() const;

/// @brief Method get_faceIndex addr 0x2d20488 size 0x8 virtual false final false
inline int32_t get_faceIndex() ;

/// @brief Method get_familyName addr 0x2d20490 size 0x8 virtual false final false
inline ::StringW get_familyName() ;

/// @brief Method set_familyName addr 0x2d20498 size 0x8 virtual false final false
inline void set_familyName(::StringW  value) ;

/// @brief Method get_styleName addr 0x2d204a0 size 0x8 virtual false final false
inline ::StringW get_styleName() ;

/// @brief Method set_styleName addr 0x2d204a8 size 0x8 virtual false final false
inline void set_styleName(::StringW  value) ;

/// @brief Method get_pointSize addr 0x2d204b0 size 0x8 virtual false final false
inline int32_t get_pointSize() ;

/// @brief Method set_pointSize addr 0x2d204b8 size 0x8 virtual false final false
inline void set_pointSize(int32_t  value) ;

/// @brief Method get_scale addr 0x2d204c0 size 0x8 virtual false final false
inline float_t get_scale() ;

/// @brief Method set_scale addr 0x2d204c8 size 0x8 virtual false final false
inline void set_scale(float_t  value) ;

/// @brief Method get_lineHeight addr 0x2d204d0 size 0x8 virtual false final false
inline float_t get_lineHeight() ;

/// @brief Method set_lineHeight addr 0x2d204d8 size 0x8 virtual false final false
inline void set_lineHeight(float_t  value) ;

/// @brief Method get_ascentLine addr 0x2d204e0 size 0x8 virtual false final false
inline float_t get_ascentLine() ;

/// @brief Method set_ascentLine addr 0x2d204e8 size 0x8 virtual false final false
inline void set_ascentLine(float_t  value) ;

/// @brief Method get_capLine addr 0x2d204f0 size 0x8 virtual false final false
inline float_t get_capLine() ;

/// @brief Method set_capLine addr 0x2d204f8 size 0x8 virtual false final false
inline void set_capLine(float_t  value) ;

/// @brief Method get_meanLine addr 0x2d20500 size 0x8 virtual false final false
inline float_t get_meanLine() ;

/// @brief Method set_meanLine addr 0x2d20508 size 0x8 virtual false final false
inline void set_meanLine(float_t  value) ;

/// @brief Method get_baseline addr 0x2d20510 size 0x8 virtual false final false
inline float_t get_baseline() ;

/// @brief Method set_baseline addr 0x2d20518 size 0x8 virtual false final false
inline void set_baseline(float_t  value) ;

/// @brief Method get_descentLine addr 0x2d20520 size 0x8 virtual false final false
inline float_t get_descentLine() ;

/// @brief Method set_descentLine addr 0x2d20528 size 0x8 virtual false final false
inline void set_descentLine(float_t  value) ;

/// @brief Method get_superscriptOffset addr 0x2d20530 size 0x8 virtual false final false
inline float_t get_superscriptOffset() ;

/// @brief Method set_superscriptOffset addr 0x2d20538 size 0x8 virtual false final false
inline void set_superscriptOffset(float_t  value) ;

/// @brief Method get_superscriptSize addr 0x2d20540 size 0x8 virtual false final false
inline float_t get_superscriptSize() ;

/// @brief Method set_superscriptSize addr 0x2d20548 size 0x8 virtual false final false
inline void set_superscriptSize(float_t  value) ;

/// @brief Method get_subscriptOffset addr 0x2d20550 size 0x8 virtual false final false
inline float_t get_subscriptOffset() ;

/// @brief Method set_subscriptOffset addr 0x2d20558 size 0x8 virtual false final false
inline void set_subscriptOffset(float_t  value) ;

/// @brief Method get_subscriptSize addr 0x2d20560 size 0x8 virtual false final false
inline float_t get_subscriptSize() ;

/// @brief Method set_subscriptSize addr 0x2d20568 size 0x8 virtual false final false
inline void set_subscriptSize(float_t  value) ;

/// @brief Method get_underlineOffset addr 0x2d20570 size 0x8 virtual false final false
inline float_t get_underlineOffset() ;

/// @brief Method set_underlineOffset addr 0x2d20578 size 0x8 virtual false final false
inline void set_underlineOffset(float_t  value) ;

/// @brief Method get_underlineThickness addr 0x2d20580 size 0x8 virtual false final false
inline float_t get_underlineThickness() ;

/// @brief Method set_underlineThickness addr 0x2d20588 size 0x8 virtual false final false
inline void set_underlineThickness(float_t  value) ;

/// @brief Method get_strikethroughOffset addr 0x2d20590 size 0x8 virtual false final false
inline float_t get_strikethroughOffset() ;

/// @brief Method set_strikethroughOffset addr 0x2d20598 size 0x8 virtual false final false
inline void set_strikethroughOffset(float_t  value) ;

/// @brief Method set_strikethroughThickness addr 0x2d205a0 size 0x8 virtual false final false
inline void set_strikethroughThickness(float_t  value) ;

/// @brief Method get_tabWidth addr 0x2d205a8 size 0x8 virtual false final false
inline float_t get_tabWidth() ;

/// @brief Method set_tabWidth addr 0x2d205b0 size 0x8 virtual false final false
inline void set_tabWidth(float_t  value) ;

// Ctor Parameters [CppParam { name: "m_FaceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FamilyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_StyleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_PointSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UnitsPerEM", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LineHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AscentLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CapLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeanLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Baseline", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DescentLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SuperscriptOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SuperscriptSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SubscriptOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SubscriptSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UnderlineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UnderlineThickness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StrikethroughOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StrikethroughThickness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TabWidth", ty: "float_t", modifiers: "", def_value: None }]
constexpr FaceInfo(int32_t  m_FaceIndex, ::StringW  m_FamilyName, ::StringW  m_StyleName, int32_t  m_PointSize, float_t  m_Scale, int32_t  m_UnitsPerEM, float_t  m_LineHeight, float_t  m_AscentLine, float_t  m_CapLine, float_t  m_MeanLine, float_t  m_Baseline, float_t  m_DescentLine, float_t  m_SuperscriptOffset, float_t  m_SuperscriptSize, float_t  m_SubscriptOffset, float_t  m_SubscriptSize, float_t  m_UnderlineOffset, float_t  m_UnderlineThickness, float_t  m_StrikethroughOffset, float_t  m_StrikethroughThickness, float_t  m_TabWidth) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FaceInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FaceInfo()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::FaceInfo, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::FaceInfo, "UnityEngine.TextCore", "FaceInfo");
