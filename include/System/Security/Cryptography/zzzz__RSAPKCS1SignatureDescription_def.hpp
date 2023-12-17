#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SignatureDescription);
// Type: System.Security.Cryptography::RSAPKCS1SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2967))
// CS Name: ::System.Security.Cryptography::RSAPKCS1SignatureDescription*
class CORDL_TYPE RSAPKCS1SignatureDescription : public ::System::Security::Cryptography::SignatureDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Security::Cryptography::SignatureDescription)]{};

/// @brief Field _hashAlgorithm offset 0x30
 __declspec(property(get=__get__hashAlgorithm, put=__set__hashAlgorithm)) ::StringW  _hashAlgorithm;

constexpr void __set__hashAlgorithm(::StringW  value) ;

constexpr ::StringW& __get__hashAlgorithm() ;

constexpr ::StringW const& __get__hashAlgorithm() const;

static inline ::System::Security::Cryptography::RSAPKCS1SignatureDescription* New_ctor(::StringW  hashAlgorithm, ::StringW  digestAlgorithm) ;

/// @brief Method .ctor addr 0x246a060 size 0xa4 virtual false final false
inline void _ctor(::StringW  hashAlgorithm, ::StringW  digestAlgorithm) ;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RSAPKCS1SignatureDescription()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureDescription, 0x38>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
