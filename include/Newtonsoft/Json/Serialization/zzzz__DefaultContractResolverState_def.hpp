#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultContractResolverState)
namespace Newtonsoft::Json::Utilities {
class PropertyNameTable;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Newtonsoft::Json::Serialization {
struct ResolverContractKey;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultContractResolverState;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DefaultContractResolverState);
// Type: Newtonsoft.Json.Serialization::DefaultContractResolverState
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11920))
// CS Name: ::Newtonsoft.Json.Serialization::DefaultContractResolverState*
class CORDL_TYPE DefaultContractResolverState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field ContractCache offset 0x10
 __declspec(property(get=__get_ContractCache, put=__set_ContractCache)) ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*  ContractCache;

/// @brief Field NameTable offset 0x18
 __declspec(property(get=__get_NameTable, put=__set_NameTable)) ::Newtonsoft::Json::Utilities::PropertyNameTable*  NameTable;

constexpr void __set_ContractCache(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>* __get_ContractCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract*>*> __get_ContractCache() const;

constexpr void __set_NameTable(::Newtonsoft::Json::Utilities::PropertyNameTable*  value) ;

constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable* __get_NameTable() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::PropertyNameTable*> __get_NameTable() const;

static inline ::Newtonsoft::Json::Serialization::DefaultContractResolverState* New_ctor() ;

/// @brief Method .ctor addr 0x266edb8 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultContractResolverState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultContractResolverState(DefaultContractResolverState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultContractResolverState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultContractResolverState(DefaultContractResolverState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultContractResolverState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DefaultContractResolverState, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultContractResolverState);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultContractResolverState*, "Newtonsoft.Json.Serialization", "DefaultContractResolverState");
