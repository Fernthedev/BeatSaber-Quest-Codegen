#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACSHA256)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA256;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMACSHA256);
// Type: System.Security.Cryptography::HMACSHA256
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2938))
// CS Name: ::System.Security.Cryptography::HMACSHA256*
class CORDL_TYPE HMACSHA256 : public ::System::Security::Cryptography::HMAC {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Security::Cryptography::HMAC)]{};

static inline ::System::Security::Cryptography::HMACSHA256* New_ctor() ;

/// @brief Method .ctor addr 0x245ee70 size 0x24 virtual false final false
inline void _ctor() ;

static inline ::System::Security::Cryptography::HMACSHA256* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method .ctor addr 0x245ee94 size 0xc0 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA256", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HMACSHA256(HMACSHA256 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA256", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HMACSHA256(HMACSHA256 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HMACSHA256()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMACSHA256, 0x68>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMACSHA256);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACSHA256*, "System.Security.Cryptography", "HMACSHA256");
