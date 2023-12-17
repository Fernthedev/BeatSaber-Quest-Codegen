#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CookOptions)
namespace HoudiniEngineUnity {
struct HAPI_PackedPrimInstancingMode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CookOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CookOptions);
// Type: HoudiniEngineUnity::HAPI_CookOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9732))
// CS Name: ::HoudiniEngineUnity::HAPI_CookOptions
struct CORDL_TYPE HAPI_CookOptions : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field splitGeosByGroup offset 0x0
 __declspec(property(get=__get_splitGeosByGroup, put=__set_splitGeosByGroup)) bool  splitGeosByGroup;

/// @brief Field splitGeosByAttribute offset 0x1
 __declspec(property(get=__get_splitGeosByAttribute, put=__set_splitGeosByAttribute)) bool  splitGeosByAttribute;

/// @brief Field splitAttrSH offset 0x4
 __declspec(property(get=__get_splitAttrSH, put=__set_splitAttrSH)) int32_t  splitAttrSH;

/// @brief Field maxVerticesPerPrimitive offset 0x8
 __declspec(property(get=__get_maxVerticesPerPrimitive, put=__set_maxVerticesPerPrimitive)) int32_t  maxVerticesPerPrimitive;

/// @brief Field refineCurveToLinear offset 0xc
 __declspec(property(get=__get_refineCurveToLinear, put=__set_refineCurveToLinear)) bool  refineCurveToLinear;

/// @brief Field curveRefineLOD offset 0x10
 __declspec(property(get=__get_curveRefineLOD, put=__set_curveRefineLOD)) float_t  curveRefineLOD;

/// @brief Field clearErrorsAndWarnings offset 0x14
 __declspec(property(get=__get_clearErrorsAndWarnings, put=__set_clearErrorsAndWarnings)) bool  clearErrorsAndWarnings;

/// @brief Field cookTemplatedGeos offset 0x15
 __declspec(property(get=__get_cookTemplatedGeos, put=__set_cookTemplatedGeos)) bool  cookTemplatedGeos;

/// @brief Field splitPointsByVertexAttributes offset 0x16
 __declspec(property(get=__get_splitPointsByVertexAttributes, put=__set_splitPointsByVertexAttributes)) bool  splitPointsByVertexAttributes;

/// @brief Field packedPrimInstancingMode offset 0x18
 __declspec(property(get=__get_packedPrimInstancingMode, put=__set_packedPrimInstancingMode)) ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  packedPrimInstancingMode;

/// @brief Field handleBoxPartTypes offset 0x1c
 __declspec(property(get=__get_handleBoxPartTypes, put=__set_handleBoxPartTypes)) bool  handleBoxPartTypes;

/// @brief Field handleSpherePartTypes offset 0x1d
 __declspec(property(get=__get_handleSpherePartTypes, put=__set_handleSpherePartTypes)) bool  handleSpherePartTypes;

/// @brief Field checkPartChanges offset 0x1e
 __declspec(property(get=__get_checkPartChanges, put=__set_checkPartChanges)) bool  checkPartChanges;

/// @brief Field cacheMeshTopology offset 0x1f
 __declspec(property(get=__get_cacheMeshTopology, put=__set_cacheMeshTopology)) bool  cacheMeshTopology;

/// @brief Field extraFlags offset 0x20
 __declspec(property(get=__get_extraFlags, put=__set_extraFlags)) int32_t  extraFlags;

constexpr void __set_splitGeosByGroup(bool  value) ;

constexpr bool& __get_splitGeosByGroup() ;

constexpr bool const& __get_splitGeosByGroup() const;

constexpr void __set_splitGeosByAttribute(bool  value) ;

constexpr bool& __get_splitGeosByAttribute() ;

constexpr bool const& __get_splitGeosByAttribute() const;

constexpr void __set_splitAttrSH(int32_t  value) ;

constexpr int32_t& __get_splitAttrSH() ;

constexpr int32_t const& __get_splitAttrSH() const;

constexpr void __set_maxVerticesPerPrimitive(int32_t  value) ;

constexpr int32_t& __get_maxVerticesPerPrimitive() ;

constexpr int32_t const& __get_maxVerticesPerPrimitive() const;

constexpr void __set_refineCurveToLinear(bool  value) ;

constexpr bool& __get_refineCurveToLinear() ;

constexpr bool const& __get_refineCurveToLinear() const;

constexpr void __set_curveRefineLOD(float_t  value) ;

constexpr float_t& __get_curveRefineLOD() ;

constexpr float_t const& __get_curveRefineLOD() const;

constexpr void __set_clearErrorsAndWarnings(bool  value) ;

constexpr bool& __get_clearErrorsAndWarnings() ;

constexpr bool const& __get_clearErrorsAndWarnings() const;

constexpr void __set_cookTemplatedGeos(bool  value) ;

constexpr bool& __get_cookTemplatedGeos() ;

constexpr bool const& __get_cookTemplatedGeos() const;

constexpr void __set_splitPointsByVertexAttributes(bool  value) ;

constexpr bool& __get_splitPointsByVertexAttributes() ;

constexpr bool const& __get_splitPointsByVertexAttributes() const;

constexpr void __set_packedPrimInstancingMode(::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  value) ;

constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode& __get_packedPrimInstancingMode() ;

constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode const& __get_packedPrimInstancingMode() const;

constexpr void __set_handleBoxPartTypes(bool  value) ;

constexpr bool& __get_handleBoxPartTypes() ;

constexpr bool const& __get_handleBoxPartTypes() const;

constexpr void __set_handleSpherePartTypes(bool  value) ;

constexpr bool& __get_handleSpherePartTypes() ;

constexpr bool const& __get_handleSpherePartTypes() const;

constexpr void __set_checkPartChanges(bool  value) ;

constexpr bool& __get_checkPartChanges() ;

constexpr bool const& __get_checkPartChanges() const;

constexpr void __set_cacheMeshTopology(bool  value) ;

constexpr bool& __get_cacheMeshTopology() ;

constexpr bool const& __get_cacheMeshTopology() const;

constexpr void __set_extraFlags(int32_t  value) ;

constexpr int32_t& __get_extraFlags() ;

constexpr int32_t const& __get_extraFlags() const;

// Ctor Parameters [CppParam { name: "splitGeosByGroup", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitGeosByAttribute", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitAttrSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxVerticesPerPrimitive", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "refineCurveToLinear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "curveRefineLOD", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "clearErrorsAndWarnings", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cookTemplatedGeos", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "splitPointsByVertexAttributes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "packedPrimInstancingMode", ty: "::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode", modifiers: "", def_value: None }, CppParam { name: "handleBoxPartTypes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "handleSpherePartTypes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "checkPartChanges", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cacheMeshTopology", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "extraFlags", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CookOptions(bool  splitGeosByGroup, bool  splitGeosByAttribute, int32_t  splitAttrSH, int32_t  maxVerticesPerPrimitive, bool  refineCurveToLinear, float_t  curveRefineLOD, bool  clearErrorsAndWarnings, bool  cookTemplatedGeos, bool  splitPointsByVertexAttributes, ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode  packedPrimInstancingMode, bool  handleBoxPartTypes, bool  handleSpherePartTypes, bool  checkPartChanges, bool  cacheMeshTopology, int32_t  extraFlags) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_CookOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_CookOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CookOptions, 0x24>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CookOptions, "HoudiniEngineUnity", "HAPI_CookOptions");
