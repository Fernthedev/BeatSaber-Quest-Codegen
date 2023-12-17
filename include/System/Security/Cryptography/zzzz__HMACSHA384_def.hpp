#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACSHA384)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA384;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMACSHA384);
// Type: System.Security.Cryptography::HMACSHA384
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2939))
// CS Name: ::System.Security.Cryptography::HMACSHA384*
class CORDL_TYPE HMACSHA384 : public ::System::Security::Cryptography::HMAC {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Security::Cryptography::HMAC)]{};

/// @brief Field m_useLegacyBlockSize offset 0x61
 __declspec(property(get=__get_m_useLegacyBlockSize, put=__set_m_useLegacyBlockSize)) bool  m_useLegacyBlockSize;

 __declspec(property(get=get_BlockSize)) int32_t  BlockSize;

constexpr void __set_m_useLegacyBlockSize(bool  value) ;

constexpr bool& __get_m_useLegacyBlockSize() ;

constexpr bool const& __get_m_useLegacyBlockSize() const;

static inline ::System::Security::Cryptography::HMACSHA384* New_ctor() ;

/// @brief Method .ctor addr 0x245f078 size 0x24 virtual false final false
inline void _ctor() ;

static inline ::System::Security::Cryptography::HMACSHA384* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method .ctor addr 0x245f09c size 0xf0 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method get_BlockSize addr 0x245f18c size 0x18 virtual false final false
inline int32_t get_BlockSize() ;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HMACSHA384(HMACSHA384 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HMACSHA384(HMACSHA384 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HMACSHA384()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMACSHA384, 0x68>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMACSHA384);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACSHA384*, "System.Security.Cryptography", "HMACSHA384");
