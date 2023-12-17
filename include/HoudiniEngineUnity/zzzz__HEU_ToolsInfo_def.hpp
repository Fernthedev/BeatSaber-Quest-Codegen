#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ToolsInfo)
namespace UnityEngine {
struct Color;
}
namespace HoudiniEngineUnity {
struct __HEU_ToolsInfo__PaintMeshVisibility;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_ToolsInfo__PaintMergeMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_ToolsInfo__PaintMergeMode;
}
namespace HoudiniEngineUnity {
struct __HEU_ToolsInfo__PaintMeshVisibility;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ToolsInfo);
// Type: ::PaintMergeMode
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9948))
// CS Name: ::HEU_ToolsInfo::PaintMergeMode
struct CORDL_TYPE __HEU_ToolsInfo__PaintMergeMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_ToolsInfo__PaintMergeMode_Unwrapped
enum struct ____HEU_ToolsInfo__PaintMergeMode_Unwrapped : int32_t {
__E_REPLACE = static_cast<int32_t>(0x0),
__E_ADD = static_cast<int32_t>(0x1),
__E_SUBTRACT = static_cast<int32_t>(0x2),
__E_MULTIPLY = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field REPLACE value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode const REPLACE;

/// @brief Field ADD value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode const ADD;

/// @brief Field SUBTRACT value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode const SUBTRACT;

/// @brief Field MULTIPLY value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode const MULTIPLY;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_ToolsInfo__PaintMergeMode_Unwrapped () const noexcept {
return std::bit_cast<____HEU_ToolsInfo__PaintMergeMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_ToolsInfo__PaintMergeMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_ToolsInfo__PaintMergeMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_ToolsInfo__PaintMergeMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::PaintMeshVisibility
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9949))
// CS Name: ::HEU_ToolsInfo::PaintMeshVisibility
struct CORDL_TYPE __HEU_ToolsInfo__PaintMeshVisibility : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_ToolsInfo__PaintMeshVisibility_Unwrapped
enum struct ____HEU_ToolsInfo__PaintMeshVisibility_Unwrapped : int32_t {
__E_AUTO = static_cast<int32_t>(0x0),
__E_SHOW = static_cast<int32_t>(0x1),
__E_HIDE = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AUTO value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility const AUTO;

/// @brief Field SHOW value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility const SHOW;

/// @brief Field HIDE value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility const HIDE;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_ToolsInfo__PaintMeshVisibility_Unwrapped () const noexcept {
return std::bit_cast<____HEU_ToolsInfo__PaintMeshVisibility_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_ToolsInfo__PaintMeshVisibility(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_ToolsInfo__PaintMeshVisibility(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_ToolsInfo__PaintMeshVisibility()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ToolsInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9950))
// CS Name: ::HoudiniEngineUnity::HEU_ToolsInfo*
class CORDL_TYPE HEU_ToolsInfo : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using PaintMeshVisibility = ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility;

using PaintMergeMode = ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _paintBrushSize offset 0x18
 __declspec(property(get=__get__paintBrushSize, put=__set__paintBrushSize)) float_t  _paintBrushSize;

/// @brief Field _paintBrushOpacity offset 0x1c
 __declspec(property(get=__get__paintBrushOpacity, put=__set__paintBrushOpacity)) float_t  _paintBrushOpacity;

/// @brief Field _paintIntValue offset 0x20
 __declspec(property(get=__get__paintIntValue, put=__set__paintIntValue)) ::ArrayW<int32_t,::Array<int32_t>*>  _paintIntValue;

/// @brief Field _paintFloatValue offset 0x28
 __declspec(property(get=__get__paintFloatValue, put=__set__paintFloatValue)) ::ArrayW<float_t,::Array<float_t>*>  _paintFloatValue;

/// @brief Field _paintStringValue offset 0x30
 __declspec(property(get=__get__paintStringValue, put=__set__paintStringValue)) ::ArrayW<::StringW,::Array<::StringW>*>  _paintStringValue;

/// @brief Field _lastAttributesGeoID offset 0x38
 __declspec(property(get=__get__lastAttributesGeoID, put=__set__lastAttributesGeoID)) int32_t  _lastAttributesGeoID;

/// @brief Field _lastAttributesPartID offset 0x3c
 __declspec(property(get=__get__lastAttributesPartID, put=__set__lastAttributesPartID)) int32_t  _lastAttributesPartID;

/// @brief Field _lastAttributeNodeName offset 0x40
 __declspec(property(get=__get__lastAttributeNodeName, put=__set__lastAttributeNodeName)) ::StringW  _lastAttributeNodeName;

/// @brief Field _lastAttributeName offset 0x48
 __declspec(property(get=__get__lastAttributeName, put=__set__lastAttributeName)) ::StringW  _lastAttributeName;

/// @brief Field _brushHandleColor offset 0x50
 __declspec(property(get=__get__brushHandleColor, put=__set__brushHandleColor)) ::UnityEngine::Color  _brushHandleColor;

/// @brief Field _affectedAreaPaintColor offset 0x60
 __declspec(property(get=__get__affectedAreaPaintColor, put=__set__affectedAreaPaintColor)) ::UnityEngine::Color  _affectedAreaPaintColor;

/// @brief Field _liveUpdate offset 0x70
 __declspec(property(get=__get__liveUpdate, put=__set__liveUpdate)) bool  _liveUpdate;

/// @brief Field _isPainting offset 0x71
 __declspec(property(get=__get__isPainting, put=__set__isPainting)) bool  _isPainting;

/// @brief Field _editPointBoxSize offset 0x74
 __declspec(property(get=__get__editPointBoxSize, put=__set__editPointBoxSize)) float_t  _editPointBoxSize;

/// @brief Field _editPointBoxUnselectedColor offset 0x78
 __declspec(property(get=__get__editPointBoxUnselectedColor, put=__set__editPointBoxUnselectedColor)) ::UnityEngine::Color  _editPointBoxUnselectedColor;

/// @brief Field _editPointBoxSelectedColor offset 0x88
 __declspec(property(get=__get__editPointBoxSelectedColor, put=__set__editPointBoxSelectedColor)) ::UnityEngine::Color  _editPointBoxSelectedColor;

/// @brief Field _recacheRequired offset 0x98
 __declspec(property(get=__get__recacheRequired, put=__set__recacheRequired)) bool  _recacheRequired;

/// @brief Field _paintMergeMode offset 0x9c
 __declspec(property(get=__get__paintMergeMode, put=__set__paintMergeMode)) ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode  _paintMergeMode;

/// @brief Field _showOnlyEditGeometry offset 0xa0
 __declspec(property(get=__get__showOnlyEditGeometry, put=__set__showOnlyEditGeometry)) bool  _showOnlyEditGeometry;

/// @brief Field _alwaysCookUpstream offset 0xa1
 __declspec(property(get=__get__alwaysCookUpstream, put=__set__alwaysCookUpstream)) bool  _alwaysCookUpstream;

/// @brief Field _paintMeshVisiblity offset 0xa4
 __declspec(property(get=__get__paintMeshVisiblity, put=__set__paintMeshVisiblity)) ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility  _paintMeshVisiblity;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ToolsInfo*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ToolsInfo*>*() noexcept;

constexpr void __set__paintBrushSize(float_t  value) ;

constexpr float_t& __get__paintBrushSize() ;

constexpr float_t const& __get__paintBrushSize() const;

constexpr void __set__paintBrushOpacity(float_t  value) ;

constexpr float_t& __get__paintBrushOpacity() ;

constexpr float_t const& __get__paintBrushOpacity() const;

constexpr void __set__paintIntValue(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__paintIntValue() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__paintIntValue() const;

constexpr void __set__paintFloatValue(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__paintFloatValue() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__paintFloatValue() const;

constexpr void __set__paintStringValue(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__paintStringValue() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__paintStringValue() const;

constexpr void __set__lastAttributesGeoID(int32_t  value) ;

constexpr int32_t& __get__lastAttributesGeoID() ;

constexpr int32_t const& __get__lastAttributesGeoID() const;

constexpr void __set__lastAttributesPartID(int32_t  value) ;

constexpr int32_t& __get__lastAttributesPartID() ;

constexpr int32_t const& __get__lastAttributesPartID() const;

constexpr void __set__lastAttributeNodeName(::StringW  value) ;

constexpr ::StringW& __get__lastAttributeNodeName() ;

constexpr ::StringW const& __get__lastAttributeNodeName() const;

constexpr void __set__lastAttributeName(::StringW  value) ;

constexpr ::StringW& __get__lastAttributeName() ;

constexpr ::StringW const& __get__lastAttributeName() const;

constexpr void __set__brushHandleColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__brushHandleColor() ;

constexpr ::UnityEngine::Color const& __get__brushHandleColor() const;

constexpr void __set__affectedAreaPaintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__affectedAreaPaintColor() ;

constexpr ::UnityEngine::Color const& __get__affectedAreaPaintColor() const;

constexpr void __set__liveUpdate(bool  value) ;

constexpr bool& __get__liveUpdate() ;

constexpr bool const& __get__liveUpdate() const;

constexpr void __set__isPainting(bool  value) ;

constexpr bool& __get__isPainting() ;

constexpr bool const& __get__isPainting() const;

constexpr void __set__editPointBoxSize(float_t  value) ;

constexpr float_t& __get__editPointBoxSize() ;

constexpr float_t const& __get__editPointBoxSize() const;

constexpr void __set__editPointBoxUnselectedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__editPointBoxUnselectedColor() ;

constexpr ::UnityEngine::Color const& __get__editPointBoxUnselectedColor() const;

constexpr void __set__editPointBoxSelectedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__editPointBoxSelectedColor() ;

constexpr ::UnityEngine::Color const& __get__editPointBoxSelectedColor() const;

constexpr void __set__recacheRequired(bool  value) ;

constexpr bool& __get__recacheRequired() ;

constexpr bool const& __get__recacheRequired() const;

constexpr void __set__paintMergeMode(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode  value) ;

constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode& __get__paintMergeMode() ;

constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode const& __get__paintMergeMode() const;

constexpr void __set__showOnlyEditGeometry(bool  value) ;

constexpr bool& __get__showOnlyEditGeometry() ;

constexpr bool const& __get__showOnlyEditGeometry() const;

constexpr void __set__alwaysCookUpstream(bool  value) ;

constexpr bool& __get__alwaysCookUpstream() ;

constexpr bool const& __get__alwaysCookUpstream() const;

constexpr void __set__paintMeshVisiblity(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility  value) ;

constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility& __get__paintMeshVisiblity() ;

constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility const& __get__paintMeshVisiblity() const;

/// @brief Method IsEquivalentTo addr 0x21e9694 size 0x620 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ToolsInfo*  other) ;

static inline ::HoudiniEngineUnity::HEU_ToolsInfo* New_ctor() ;

/// @brief Method .ctor addr 0x21e9cb4 size 0x108 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ToolsInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ToolsInfo(HEU_ToolsInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ToolsInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ToolsInfo(HEU_ToolsInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_ToolsInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ToolsInfo, 0xa8>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode, "HoudiniEngineUnity", "HEU_ToolsInfo/PaintMergeMode");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility, "HoudiniEngineUnity", "HEU_ToolsInfo/PaintMeshVisibility");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ToolsInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ToolsInfo*, "HoudiniEngineUnity", "HEU_ToolsInfo");
