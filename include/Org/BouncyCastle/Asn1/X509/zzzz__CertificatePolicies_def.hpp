#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificatePolicies)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePolicies;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CertificatePolicies);
// Type: Org.BouncyCastle.Asn1.X509::CertificatePolicies
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(349))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CertificatePolicies*
class CORDL_TYPE CertificatePolicies : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field policyInformation offset 0x10
 __declspec(property(get=__get_policyInformation, put=__set_policyInformation)) ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>  policyInformation;

constexpr void __set_policyInformation(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>  value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>& __get_policyInformation() ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> const& __get_policyInformation() const;

/// @brief Method Copy addr 0x10877b4 size 0x78 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>  policyInfo) ;

/// @brief Method GetInstance addr 0x108782c size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0x10879fc size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method FromExtensions addr 0x1087a14 size 0x68 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* New_ctor(::Org::BouncyCastle::Asn1::X509::PolicyInformation*  name) ;

/// @brief Method .ctor addr 0x1087a7c size 0xa8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::PolicyInformation*  name) ;

static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>  policyInformation) ;

/// @brief Method .ctor addr 0x1087b24 size 0x30 virtual false final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>  policyInformation) ;

static inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x10878d0 size 0x12c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetPolicyInformation addr 0x1087b54 size 0x8 virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*,::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicyInformation() ;

/// @brief Method GetPolicyInformation addr 0x1087b5c size 0xa4 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::PolicyInformation* GetPolicyInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  policyIdentifier) ;

/// @brief Method ToAsn1Object addr 0x1087c00 size 0x68 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method ToString addr 0x1087c68 size 0x13c virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "CertificatePolicies", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificatePolicies(CertificatePolicies && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificatePolicies", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificatePolicies(CertificatePolicies const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertificatePolicies()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CertificatePolicies, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificatePolicies);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificatePolicies*, "Org.BouncyCastle.Asn1.X509", "CertificatePolicies");
