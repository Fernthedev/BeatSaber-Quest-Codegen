#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
CORDL_MODULE_EXPORT(RIPEMD160)
// Forward declare root types
namespace System::Security::Cryptography {
class RIPEMD160;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RIPEMD160);
// Type: System.Security.Cryptography::RIPEMD160
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2953))
// CS Name: ::System.Security.Cryptography::RIPEMD160*
class CORDL_TYPE RIPEMD160 : public ::System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Security::Cryptography::HashAlgorithm)]{};

static inline ::System::Security::Cryptography::RIPEMD160* New_ctor() ;

/// @brief Method .ctor addr 0x2463ad4 size 0x20 virtual false final false
inline void _ctor() ;

/// @brief Method Create addr 0x2463af4 size 0x58 virtual false final false
static inline ::System::Security::Cryptography::RIPEMD160* Create() ;

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RIPEMD160(RIPEMD160 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RIPEMD160(RIPEMD160 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RIPEMD160()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RIPEMD160, 0x28>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RIPEMD160);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RIPEMD160*, "System.Security.Cryptography", "RIPEMD160");
