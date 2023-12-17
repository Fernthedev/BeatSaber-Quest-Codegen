#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyedHashAlgorithm)
// Forward declare root types
namespace System::Security::Cryptography {
class KeyedHashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::KeyedHashAlgorithm);
// Type: System.Security.Cryptography::KeyedHashAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2942))
// CS Name: ::System.Security.Cryptography::KeyedHashAlgorithm*
class CORDL_TYPE KeyedHashAlgorithm : public ::System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Security::Cryptography::HashAlgorithm)]{};

/// @brief Field KeyValue offset 0x28
 __declspec(property(get=__get_KeyValue, put=__set_KeyValue)) ::ArrayW<uint8_t,::Array<uint8_t>*>  KeyValue;

 __declspec(property(get=get_Key, put=set_Key)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Key;

constexpr void __set_KeyValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_KeyValue() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_KeyValue() const;

static inline ::System::Security::Cryptography::KeyedHashAlgorithm* New_ctor() ;

/// @brief Method .ctor addr 0x245e988 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Dispose addr 0x245e930 size 0x48 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method get_Key addr 0x245f2d0 size 0x78 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Key() ;

/// @brief Method set_Key addr 0x245f348 size 0x10c virtual true final false
inline void set_Key(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "KeyedHashAlgorithm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyedHashAlgorithm(KeyedHashAlgorithm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyedHashAlgorithm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyedHashAlgorithm(KeyedHashAlgorithm const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyedHashAlgorithm()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::KeyedHashAlgorithm, 0x30>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::KeyedHashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::KeyedHashAlgorithm*, "System.Security.Cryptography", "KeyedHashAlgorithm");
