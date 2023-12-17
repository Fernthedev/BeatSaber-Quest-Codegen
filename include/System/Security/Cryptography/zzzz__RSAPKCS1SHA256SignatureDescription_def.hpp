#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SHA256SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SHA256SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription);
// Type: System.Security.Cryptography::RSAPKCS1SHA256SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2969))
// CS Name: ::System.Security.Cryptography::RSAPKCS1SHA256SignatureDescription*
class CORDL_TYPE RSAPKCS1SHA256SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Security::Cryptography::RSAPKCS1SignatureDescription)]{};

static inline ::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription* New_ctor() ;

/// @brief Method .ctor addr 0x246a16c size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA256SignatureDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAPKCS1SHA256SignatureDescription(RSAPKCS1SHA256SignatureDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA256SignatureDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAPKCS1SHA256SignatureDescription(RSAPKCS1SHA256SignatureDescription const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RSAPKCS1SHA256SignatureDescription()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription, 0x38>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SHA256SignatureDescription");
