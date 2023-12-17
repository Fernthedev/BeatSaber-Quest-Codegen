#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_GeoInfo)
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_GeoInfo);
// Type: HoudiniEngineUnity::HAPI_GeoInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9739))
// CS Name: ::HoudiniEngineUnity::HAPI_GeoInfo
struct CORDL_TYPE HAPI_GeoInfo : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::HoudiniEngineUnity::HAPI_GeoType  type;

/// @brief Field nameSH offset 0x4
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field nodeId offset 0x8
 __declspec(property(get=__get_nodeId, put=__set_nodeId)) int32_t  nodeId;

/// @brief Field isEditable offset 0xc
 __declspec(property(get=__get_isEditable, put=__set_isEditable)) bool  isEditable;

/// @brief Field isTemplated offset 0xd
 __declspec(property(get=__get_isTemplated, put=__set_isTemplated)) bool  isTemplated;

/// @brief Field isDisplayGeo offset 0xe
 __declspec(property(get=__get_isDisplayGeo, put=__set_isDisplayGeo)) bool  isDisplayGeo;

/// @brief Field hasGeoChanged offset 0xf
 __declspec(property(get=__get_hasGeoChanged, put=__set_hasGeoChanged)) bool  hasGeoChanged;

/// @brief Field hasMaterialChanged offset 0x10
 __declspec(property(get=__get_hasMaterialChanged, put=__set_hasMaterialChanged)) bool  hasMaterialChanged;

/// @brief Field pointGroupCount offset 0x14
 __declspec(property(get=__get_pointGroupCount, put=__set_pointGroupCount)) int32_t  pointGroupCount;

/// @brief Field primitiveGroupCount offset 0x18
 __declspec(property(get=__get_primitiveGroupCount, put=__set_primitiveGroupCount)) int32_t  primitiveGroupCount;

/// @brief Field edgeGroupCount offset 0x1c
 __declspec(property(get=__get_edgeGroupCount, put=__set_edgeGroupCount)) int32_t  edgeGroupCount;

/// @brief Field partCount offset 0x20
 __declspec(property(get=__get_partCount, put=__set_partCount)) int32_t  partCount;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_GeoType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_GeoType& __get_type() ;

constexpr ::HoudiniEngineUnity::HAPI_GeoType const& __get_type() const;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_nodeId(int32_t  value) ;

constexpr int32_t& __get_nodeId() ;

constexpr int32_t const& __get_nodeId() const;

constexpr void __set_isEditable(bool  value) ;

constexpr bool& __get_isEditable() ;

constexpr bool const& __get_isEditable() const;

constexpr void __set_isTemplated(bool  value) ;

constexpr bool& __get_isTemplated() ;

constexpr bool const& __get_isTemplated() const;

constexpr void __set_isDisplayGeo(bool  value) ;

constexpr bool& __get_isDisplayGeo() ;

constexpr bool const& __get_isDisplayGeo() const;

constexpr void __set_hasGeoChanged(bool  value) ;

constexpr bool& __get_hasGeoChanged() ;

constexpr bool const& __get_hasGeoChanged() const;

constexpr void __set_hasMaterialChanged(bool  value) ;

constexpr bool& __get_hasMaterialChanged() ;

constexpr bool const& __get_hasMaterialChanged() const;

constexpr void __set_pointGroupCount(int32_t  value) ;

constexpr int32_t& __get_pointGroupCount() ;

constexpr int32_t const& __get_pointGroupCount() const;

constexpr void __set_primitiveGroupCount(int32_t  value) ;

constexpr int32_t& __get_primitiveGroupCount() ;

constexpr int32_t const& __get_primitiveGroupCount() const;

constexpr void __set_edgeGroupCount(int32_t  value) ;

constexpr int32_t& __get_edgeGroupCount() ;

constexpr int32_t const& __get_edgeGroupCount() const;

constexpr void __set_partCount(int32_t  value) ;

constexpr int32_t& __get_partCount() ;

constexpr int32_t const& __get_partCount() const;

/// @brief Method getGroupCountByType addr 0x2191c20 size 0x28 virtual false final false
inline int32_t getGroupCountByType(::HoudiniEngineUnity::HAPI_GroupType  type) ;

// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_GeoType", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isEditable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isTemplated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDisplayGeo", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasGeoChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasMaterialChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "primitiveGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "edgeGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "partCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_GeoInfo(::HoudiniEngineUnity::HAPI_GeoType  type, int32_t  nameSH, int32_t  nodeId, bool  isEditable, bool  isTemplated, bool  isDisplayGeo, bool  hasGeoChanged, bool  hasMaterialChanged, int32_t  pointGroupCount, int32_t  primitiveGroupCount, int32_t  edgeGroupCount, int32_t  partCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_GeoInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_GeoInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_GeoInfo, 0x24>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_GeoInfo, "HoudiniEngineUnity", "HAPI_GeoInfo");
