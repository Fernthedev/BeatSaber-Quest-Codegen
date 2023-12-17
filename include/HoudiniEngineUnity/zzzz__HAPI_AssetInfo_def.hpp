#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_AssetInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_AssetInfo);
// Type: HoudiniEngineUnity::HAPI_AssetInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9731))
// CS Name: ::HoudiniEngineUnity::HAPI_AssetInfo
struct CORDL_TYPE HAPI_AssetInfo : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field nodeId offset 0x0
 __declspec(property(get=__get_nodeId, put=__set_nodeId)) int32_t  nodeId;

/// @brief Field objectNodeId offset 0x4
 __declspec(property(get=__get_objectNodeId, put=__set_objectNodeId)) int32_t  objectNodeId;

/// @brief Field hasEverCooked offset 0x8
 __declspec(property(get=__get_hasEverCooked, put=__set_hasEverCooked)) bool  hasEverCooked;

/// @brief Field nameSH offset 0xc
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field labelSH offset 0x10
 __declspec(property(get=__get_labelSH, put=__set_labelSH)) int32_t  labelSH;

/// @brief Field filePathSH offset 0x14
 __declspec(property(get=__get_filePathSH, put=__set_filePathSH)) int32_t  filePathSH;

/// @brief Field versionSH offset 0x18
 __declspec(property(get=__get_versionSH, put=__set_versionSH)) int32_t  versionSH;

/// @brief Field fullOpNameSH offset 0x1c
 __declspec(property(get=__get_fullOpNameSH, put=__set_fullOpNameSH)) int32_t  fullOpNameSH;

/// @brief Field helpTextSH offset 0x20
 __declspec(property(get=__get_helpTextSH, put=__set_helpTextSH)) int32_t  helpTextSH;

/// @brief Field helpURLSH offset 0x24
 __declspec(property(get=__get_helpURLSH, put=__set_helpURLSH)) int32_t  helpURLSH;

/// @brief Field objectCount offset 0x28
 __declspec(property(get=__get_objectCount, put=__set_objectCount)) int32_t  objectCount;

/// @brief Field handleCount offset 0x2c
 __declspec(property(get=__get_handleCount, put=__set_handleCount)) int32_t  handleCount;

/// @brief Field transformInputCount offset 0x30
 __declspec(property(get=__get_transformInputCount, put=__set_transformInputCount)) int32_t  transformInputCount;

/// @brief Field geoInputCount offset 0x34
 __declspec(property(get=__get_geoInputCount, put=__set_geoInputCount)) int32_t  geoInputCount;

/// @brief Field geoOutputCount offset 0x38
 __declspec(property(get=__get_geoOutputCount, put=__set_geoOutputCount)) int32_t  geoOutputCount;

/// @brief Field haveObjectsChanged offset 0x3c
 __declspec(property(get=__get_haveObjectsChanged, put=__set_haveObjectsChanged)) bool  haveObjectsChanged;

/// @brief Field haveMaterialsChanged offset 0x3d
 __declspec(property(get=__get_haveMaterialsChanged, put=__set_haveMaterialsChanged)) bool  haveMaterialsChanged;

constexpr void __set_nodeId(int32_t  value) ;

constexpr int32_t& __get_nodeId() ;

constexpr int32_t const& __get_nodeId() const;

constexpr void __set_objectNodeId(int32_t  value) ;

constexpr int32_t& __get_objectNodeId() ;

constexpr int32_t const& __get_objectNodeId() const;

constexpr void __set_hasEverCooked(bool  value) ;

constexpr bool& __get_hasEverCooked() ;

constexpr bool const& __get_hasEverCooked() const;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_labelSH(int32_t  value) ;

constexpr int32_t& __get_labelSH() ;

constexpr int32_t const& __get_labelSH() const;

constexpr void __set_filePathSH(int32_t  value) ;

constexpr int32_t& __get_filePathSH() ;

constexpr int32_t const& __get_filePathSH() const;

constexpr void __set_versionSH(int32_t  value) ;

constexpr int32_t& __get_versionSH() ;

constexpr int32_t const& __get_versionSH() const;

constexpr void __set_fullOpNameSH(int32_t  value) ;

constexpr int32_t& __get_fullOpNameSH() ;

constexpr int32_t const& __get_fullOpNameSH() const;

constexpr void __set_helpTextSH(int32_t  value) ;

constexpr int32_t& __get_helpTextSH() ;

constexpr int32_t const& __get_helpTextSH() const;

constexpr void __set_helpURLSH(int32_t  value) ;

constexpr int32_t& __get_helpURLSH() ;

constexpr int32_t const& __get_helpURLSH() const;

constexpr void __set_objectCount(int32_t  value) ;

constexpr int32_t& __get_objectCount() ;

constexpr int32_t const& __get_objectCount() const;

constexpr void __set_handleCount(int32_t  value) ;

constexpr int32_t& __get_handleCount() ;

constexpr int32_t const& __get_handleCount() const;

constexpr void __set_transformInputCount(int32_t  value) ;

constexpr int32_t& __get_transformInputCount() ;

constexpr int32_t const& __get_transformInputCount() const;

constexpr void __set_geoInputCount(int32_t  value) ;

constexpr int32_t& __get_geoInputCount() ;

constexpr int32_t const& __get_geoInputCount() const;

constexpr void __set_geoOutputCount(int32_t  value) ;

constexpr int32_t& __get_geoOutputCount() ;

constexpr int32_t const& __get_geoOutputCount() const;

constexpr void __set_haveObjectsChanged(bool  value) ;

constexpr bool& __get_haveObjectsChanged() ;

constexpr bool const& __get_haveObjectsChanged() const;

constexpr void __set_haveMaterialsChanged(bool  value) ;

constexpr bool& __get_haveMaterialsChanged() ;

constexpr bool const& __get_haveMaterialsChanged() const;

// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectNodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasEverCooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "filePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "versionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fullOpNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpTextSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpURLSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "handleCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transformInputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "geoInputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "geoOutputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "haveObjectsChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveMaterialsChanged", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_AssetInfo(int32_t  nodeId, int32_t  objectNodeId, bool  hasEverCooked, int32_t  nameSH, int32_t  labelSH, int32_t  filePathSH, int32_t  versionSH, int32_t  fullOpNameSH, int32_t  helpTextSH, int32_t  helpURLSH, int32_t  objectCount, int32_t  handleCount, int32_t  transformInputCount, int32_t  geoInputCount, int32_t  geoOutputCount, bool  haveObjectsChanged, bool  haveMaterialsChanged) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_AssetInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_AssetInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_AssetInfo, 0x40>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AssetInfo, "HoudiniEngineUnity", "HAPI_AssetInfo");
