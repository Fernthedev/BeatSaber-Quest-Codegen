#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ObjectInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ObjectInfo);
// Type: HoudiniEngineUnity::HAPI_ObjectInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9738))
// CS Name: ::HoudiniEngineUnity::HAPI_ObjectInfo
struct CORDL_TYPE HAPI_ObjectInfo : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field nameSH offset 0x0
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field objectInstancePathSH offset 0x4
 __declspec(property(get=__get_objectInstancePathSH, put=__set_objectInstancePathSH)) int32_t  objectInstancePathSH;

/// @brief Field hasTransformChanged offset 0x8
 __declspec(property(get=__get_hasTransformChanged, put=__set_hasTransformChanged)) bool  hasTransformChanged;

/// @brief Field haveGeosChanged offset 0x9
 __declspec(property(get=__get_haveGeosChanged, put=__set_haveGeosChanged)) bool  haveGeosChanged;

/// @brief Field isVisible offset 0xa
 __declspec(property(get=__get_isVisible, put=__set_isVisible)) bool  isVisible;

/// @brief Field isInstancer offset 0xb
 __declspec(property(get=__get_isInstancer, put=__set_isInstancer)) bool  isInstancer;

/// @brief Field isInstanced offset 0xc
 __declspec(property(get=__get_isInstanced, put=__set_isInstanced)) bool  isInstanced;

/// @brief Field geoCount offset 0x10
 __declspec(property(get=__get_geoCount, put=__set_geoCount)) int32_t  geoCount;

/// @brief Field nodeId offset 0x14
 __declspec(property(get=__get_nodeId, put=__set_nodeId)) int32_t  nodeId;

/// @brief Field objectToInstanceId offset 0x18
 __declspec(property(get=__get_objectToInstanceId, put=__set_objectToInstanceId)) int32_t  objectToInstanceId;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_objectInstancePathSH(int32_t  value) ;

constexpr int32_t& __get_objectInstancePathSH() ;

constexpr int32_t const& __get_objectInstancePathSH() const;

constexpr void __set_hasTransformChanged(bool  value) ;

constexpr bool& __get_hasTransformChanged() ;

constexpr bool const& __get_hasTransformChanged() const;

constexpr void __set_haveGeosChanged(bool  value) ;

constexpr bool& __get_haveGeosChanged() ;

constexpr bool const& __get_haveGeosChanged() const;

constexpr void __set_isVisible(bool  value) ;

constexpr bool& __get_isVisible() ;

constexpr bool const& __get_isVisible() const;

constexpr void __set_isInstancer(bool  value) ;

constexpr bool& __get_isInstancer() ;

constexpr bool const& __get_isInstancer() const;

constexpr void __set_isInstanced(bool  value) ;

constexpr bool& __get_isInstanced() ;

constexpr bool const& __get_isInstanced() const;

constexpr void __set_geoCount(int32_t  value) ;

constexpr int32_t& __get_geoCount() ;

constexpr int32_t const& __get_geoCount() const;

constexpr void __set_nodeId(int32_t  value) ;

constexpr int32_t& __get_nodeId() ;

constexpr int32_t const& __get_nodeId() const;

constexpr void __set_objectToInstanceId(int32_t  value) ;

constexpr int32_t& __get_objectToInstanceId() ;

constexpr int32_t const& __get_objectToInstanceId() const;

// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectInstancePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasTransformChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveGeosChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isInstancer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isInstanced", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "geoCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectToInstanceId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ObjectInfo(int32_t  nameSH, int32_t  objectInstancePathSH, bool  hasTransformChanged, bool  haveGeosChanged, bool  isVisible, bool  isInstancer, bool  isInstanced, int32_t  geoCount, int32_t  nodeId, int32_t  objectToInstanceId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ObjectInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ObjectInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ObjectInfo, 0x1c>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ObjectInfo, "HoudiniEngineUnity", "HAPI_ObjectInfo");
