#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_AttributeInfo)
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeTypeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_AttributeInfo);
// Type: HoudiniEngineUnity::HAPI_AttributeInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9741))
// CS Name: ::HoudiniEngineUnity::HAPI_AttributeInfo
struct CORDL_TYPE HAPI_AttributeInfo : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field exists offset 0x0
 __declspec(property(get=__get_exists, put=__set_exists)) bool  exists;

/// @brief Field owner offset 0x4
 __declspec(property(get=__get_owner, put=__set_owner)) ::HoudiniEngineUnity::HAPI_AttributeOwner  owner;

/// @brief Field storage offset 0x8
 __declspec(property(get=__get_storage, put=__set_storage)) ::HoudiniEngineUnity::HAPI_StorageType  storage;

/// @brief Field originalOwner offset 0xc
 __declspec(property(get=__get_originalOwner, put=__set_originalOwner)) ::HoudiniEngineUnity::HAPI_AttributeOwner  originalOwner;

/// @brief Field count offset 0x10
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field tupleSize offset 0x14
 __declspec(property(get=__get_tupleSize, put=__set_tupleSize)) int32_t  tupleSize;

/// @brief Field totalArrayElements offset 0x18
 __declspec(property(get=__get_totalArrayElements, put=__set_totalArrayElements)) int64_t  totalArrayElements;

/// @brief Field typeInfo offset 0x20
 __declspec(property(get=__get_typeInfo, put=__set_typeInfo)) ::HoudiniEngineUnity::HAPI_AttributeTypeInfo  typeInfo;

constexpr void __set_exists(bool  value) ;

constexpr bool& __get_exists() ;

constexpr bool const& __get_exists() const;

constexpr void __set_owner(::HoudiniEngineUnity::HAPI_AttributeOwner  value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner& __get_owner() ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner const& __get_owner() const;

constexpr void __set_storage(::HoudiniEngineUnity::HAPI_StorageType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType& __get_storage() ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType const& __get_storage() const;

constexpr void __set_originalOwner(::HoudiniEngineUnity::HAPI_AttributeOwner  value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner& __get_originalOwner() ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner const& __get_originalOwner() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_tupleSize(int32_t  value) ;

constexpr int32_t& __get_tupleSize() ;

constexpr int32_t const& __get_tupleSize() const;

constexpr void __set_totalArrayElements(int64_t  value) ;

constexpr int64_t& __get_totalArrayElements() ;

constexpr int64_t const& __get_totalArrayElements() const;

constexpr void __set_typeInfo(::HoudiniEngineUnity::HAPI_AttributeTypeInfo  value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo& __get_typeInfo() ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const& __get_typeInfo() const;

/// @brief Method .ctor addr 0x2191e84 size 0x20 virtual false final false
inline void _ctor(::StringW  ignored) ;

// Ctor Parameters [CppParam { name: "exists", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: None }, CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: None }, CppParam { name: "originalOwner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalArrayElements", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "typeInfo", ty: "::HoudiniEngineUnity::HAPI_AttributeTypeInfo", modifiers: "", def_value: None }]
constexpr HAPI_AttributeInfo(bool  exists, ::HoudiniEngineUnity::HAPI_AttributeOwner  owner, ::HoudiniEngineUnity::HAPI_StorageType  storage, ::HoudiniEngineUnity::HAPI_AttributeOwner  originalOwner, int32_t  count, int32_t  tupleSize, int64_t  totalArrayElements, ::HoudiniEngineUnity::HAPI_AttributeTypeInfo  typeInfo) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_AttributeInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_AttributeInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeInfo, "HoudiniEngineUnity", "HAPI_AttributeInfo");
