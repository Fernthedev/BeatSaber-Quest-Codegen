#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SignatureFormatter)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SignatureFormatter);
// Type: System.Security.Cryptography::RSAPKCS1SignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2920))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2984))
// CS Name: ::System.Security.Cryptography::RSAPKCS1SignatureFormatter*
class CORDL_TYPE RSAPKCS1SignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Security::Cryptography::AsymmetricSignatureFormatter)]{};

static inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* New_ctor() ;

/// @brief Method .ctor addr 0x246e4c8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RSAPKCS1SignatureFormatter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureFormatter, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureFormatter*, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
