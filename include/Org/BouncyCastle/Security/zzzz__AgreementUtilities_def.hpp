#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AgreementUtilities)
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IRawAgreement;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class AgreementUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::AgreementUtilities);
// Type: Org.BouncyCastle.Security::AgreementUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1739))
// CS Name: ::Org.BouncyCastle.Security::AgreementUtilities*
class CORDL_TYPE AgreementUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_algorithms(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_algorithms() ;

static inline ::Org::BouncyCastle::Security::AgreementUtilities* New_ctor() ;

/// @brief Method .ctor addr 0x111da24 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method GetBasicAgreement addr 0x111de2c size 0x60 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetBasicAgreement addr 0x111de8c size 0x280 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreement(::StringW  algorithm) ;

/// @brief Method GetBasicAgreementWithKdf addr 0x111e24c size 0x68 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreementWithKdf(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::StringW  wrapAlgorithm) ;

/// @brief Method GetBasicAgreementWithKdf addr 0x111e2b4 size 0x254 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreementWithKdf(::StringW  agreeAlgorithm, ::StringW  wrapAlgorithm) ;

/// @brief Method GetRawAgreement addr 0x111e508 size 0x60 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IRawAgreement* GetRawAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetRawAgreement addr 0x111e568 size 0x180 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IRawAgreement* GetRawAgreement(::StringW  algorithm) ;

/// @brief Method GetAlgorithmName addr 0x111e6e8 size 0x108 virtual false final false
static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetMechanism addr 0x111e10c size 0x140 virtual false final false
static inline ::StringW GetMechanism(::StringW  algorithm) ;

// Ctor Parameters [CppParam { name: "", ty: "AgreementUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AgreementUtilities(AgreementUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgreementUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgreementUtilities(AgreementUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AgreementUtilities()  = default;
public:


// Fields

// Static field algorithms


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::AgreementUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::AgreementUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::AgreementUtilities*, "Org.BouncyCastle.Security", "AgreementUtilities");
