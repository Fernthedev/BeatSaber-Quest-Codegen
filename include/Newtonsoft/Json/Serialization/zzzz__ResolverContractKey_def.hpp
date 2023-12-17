#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResolverContractKey)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
struct ResolverContractKey;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Serialization::ResolverContractKey);
// Type: Newtonsoft.Json.Serialization::ResolverContractKey
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11919))
// CS Name: ::Newtonsoft.Json.Serialization::ResolverContractKey
struct CORDL_TYPE ResolverContractKey : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _resolverType offset 0x0
 __declspec(property(get=__get__resolverType, put=__set__resolverType)) ::System::Type*  _resolverType;

/// @brief Field _contractType offset 0x8
 __declspec(property(get=__get__contractType, put=__set__contractType)) ::System::Type*  _contractType;

constexpr void __set__resolverType(::System::Type*  value) ;

constexpr ::System::Type* __get__resolverType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__resolverType() const;

constexpr void __set__contractType(::System::Type*  value) ;

constexpr ::System::Type* __get__contractType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__contractType() const;

/// @brief Method .ctor addr 0x266ecbc size 0x8 virtual false final false
inline void _ctor(::System::Type*  resolverType, ::System::Type*  contractType) ;

/// @brief Method GetHashCode addr 0x266ecc4 size 0x48 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x266ed0c size 0x88 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x266ed94 size 0x24 virtual false final false
inline bool Equals(::Newtonsoft::Json::Serialization::ResolverContractKey  other) ;

// Ctor Parameters [CppParam { name: "_resolverType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_contractType", ty: "::System::Type*", modifiers: "", def_value: None }]
constexpr ResolverContractKey(::System::Type*  _resolverType, ::System::Type*  _contractType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ResolverContractKey(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ResolverContractKey()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ResolverContractKey, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ResolverContractKey, "Newtonsoft.Json.Serialization", "ResolverContractKey");
