#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PartInfo)
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PartInfo);
// Type: HoudiniEngineUnity::HAPI_PartInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9740))
// CS Name: ::HoudiniEngineUnity::HAPI_PartInfo
struct CORDL_TYPE HAPI_PartInfo : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) int32_t  id;

/// @brief Field nameSH offset 0x4
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field type offset 0x8
 __declspec(property(get=__get_type, put=__set_type)) ::HoudiniEngineUnity::HAPI_PartType  type;

/// @brief Field faceCount offset 0xc
 __declspec(property(get=__get_faceCount, put=__set_faceCount)) int32_t  faceCount;

/// @brief Field vertexCount offset 0x10
 __declspec(property(get=__get_vertexCount, put=__set_vertexCount)) int32_t  vertexCount;

/// @brief Field pointCount offset 0x14
 __declspec(property(get=__get_pointCount, put=__set_pointCount)) int32_t  pointCount;

/// @brief Field attributeCounts offset 0x18
 __declspec(property(get=__get_attributeCounts, put=__set_attributeCounts)) ::ArrayW<int32_t,::Array<int32_t>*>  attributeCounts;

/// @brief Field isInstanced offset 0x20
 __declspec(property(get=__get_isInstanced, put=__set_isInstanced)) bool  isInstanced;

/// @brief Field instancedPartCount offset 0x24
 __declspec(property(get=__get_instancedPartCount, put=__set_instancedPartCount)) int32_t  instancedPartCount;

/// @brief Field instanceCount offset 0x28
 __declspec(property(get=__get_instanceCount, put=__set_instanceCount)) int32_t  instanceCount;

/// @brief Field hasChanged offset 0x2c
 __declspec(property(get=__get_hasChanged, put=__set_hasChanged)) bool  hasChanged;

 __declspec(property(get=get_pointAttributeCount, put=set_pointAttributeCount)) int32_t  pointAttributeCount;

 __declspec(property(get=get_primitiveAttributeCount, put=set_primitiveAttributeCount)) int32_t  primitiveAttributeCount;

 __declspec(property(get=get_vertexAttributeCount, put=set_vertexAttributeCount)) int32_t  vertexAttributeCount;

 __declspec(property(get=get_detailAttributeCount, put=set_detailAttributeCount)) int32_t  detailAttributeCount;

constexpr void __set_id(int32_t  value) ;

constexpr int32_t& __get_id() ;

constexpr int32_t const& __get_id() const;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_PartType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_PartType& __get_type() ;

constexpr ::HoudiniEngineUnity::HAPI_PartType const& __get_type() const;

constexpr void __set_faceCount(int32_t  value) ;

constexpr int32_t& __get_faceCount() ;

constexpr int32_t const& __get_faceCount() const;

constexpr void __set_vertexCount(int32_t  value) ;

constexpr int32_t& __get_vertexCount() ;

constexpr int32_t const& __get_vertexCount() const;

constexpr void __set_pointCount(int32_t  value) ;

constexpr int32_t& __get_pointCount() ;

constexpr int32_t const& __get_pointCount() const;

constexpr void __set_attributeCounts(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_attributeCounts() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_attributeCounts() const;

constexpr void __set_isInstanced(bool  value) ;

constexpr bool& __get_isInstanced() ;

constexpr bool const& __get_isInstanced() const;

constexpr void __set_instancedPartCount(int32_t  value) ;

constexpr int32_t& __get_instancedPartCount() ;

constexpr int32_t const& __get_instancedPartCount() const;

constexpr void __set_instanceCount(int32_t  value) ;

constexpr int32_t& __get_instanceCount() ;

constexpr int32_t const& __get_instanceCount() const;

constexpr void __set_hasChanged(bool  value) ;

constexpr bool& __get_hasChanged() ;

constexpr bool const& __get_hasChanged() const;

/// @brief Method getElementCountByAttributeOwner addr 0x2191c48 size 0x4c virtual false final false
inline int32_t getElementCountByAttributeOwner(::HoudiniEngineUnity::HAPI_AttributeOwner  owner) ;

/// @brief Method getElementCountByGroupType addr 0x2191c94 size 0x28 virtual false final false
inline int32_t getElementCountByGroupType(::HoudiniEngineUnity::HAPI_GroupType  type) ;

/// @brief Method init addr 0x2186e68 size 0x58 virtual false final false
inline void init() ;

/// @brief Method get_pointAttributeCount addr 0x2191cbc size 0x34 virtual false final false
inline int32_t get_pointAttributeCount() ;

/// @brief Method set_pointAttributeCount addr 0x2191cf0 size 0x40 virtual false final false
inline void set_pointAttributeCount(int32_t  value) ;

/// @brief Method get_primitiveAttributeCount addr 0x2191d30 size 0x34 virtual false final false
inline int32_t get_primitiveAttributeCount() ;

/// @brief Method set_primitiveAttributeCount addr 0x2191d64 size 0x40 virtual false final false
inline void set_primitiveAttributeCount(int32_t  value) ;

/// @brief Method get_vertexAttributeCount addr 0x2191da4 size 0x30 virtual false final false
inline int32_t get_vertexAttributeCount() ;

/// @brief Method set_vertexAttributeCount addr 0x2191dd4 size 0x3c virtual false final false
inline void set_vertexAttributeCount(int32_t  value) ;

/// @brief Method get_detailAttributeCount addr 0x2191e10 size 0x34 virtual false final false
inline int32_t get_detailAttributeCount() ;

/// @brief Method set_detailAttributeCount addr 0x2191e44 size 0x40 virtual false final false
inline void set_detailAttributeCount(int32_t  value) ;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_PartType", modifiers: "", def_value: None }, CppParam { name: "faceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "attributeCounts", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "isInstanced", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instancedPartCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasChanged", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_PartInfo(int32_t  id, int32_t  nameSH, ::HoudiniEngineUnity::HAPI_PartType  type, int32_t  faceCount, int32_t  vertexCount, int32_t  pointCount, ::ArrayW<int32_t,::Array<int32_t>*>  attributeCounts, bool  isInstanced, int32_t  instancedPartCount, int32_t  instanceCount, bool  hasChanged) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_PartInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_PartInfo()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PartInfo, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PartInfo, "HoudiniEngineUnity", "HAPI_PartInfo");
