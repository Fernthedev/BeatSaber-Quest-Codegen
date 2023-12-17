#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
CORDL_MODULE_EXPORT(DSASignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSASignatureDescription);
// Type: System.Security.Cryptography::DSASignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2972))
// CS Name: ::System.Security.Cryptography::DSASignatureDescription*
class CORDL_TYPE DSASignatureDescription : public ::System::Security::Cryptography::SignatureDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Security::Cryptography::SignatureDescription)]{};

static inline ::System::Security::Cryptography::DSASignatureDescription* New_ctor() ;

/// @brief Method .ctor addr 0x246a2a4 size 0xb8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DSASignatureDescription(DSASignatureDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DSASignatureDescription(DSASignatureDescription const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DSASignatureDescription()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSASignatureDescription, 0x30>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureDescription*, "System.Security.Cryptography", "DSASignatureDescription");
