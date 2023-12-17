#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixCertPathValidatorResult)
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult);
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidatorResult
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1719))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathValidatorResult*
class CORDL_TYPE PkixCertPathValidatorResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field trustAnchor offset 0x10
 __declspec(property(get=__get_trustAnchor, put=__set_trustAnchor)) ::Org::BouncyCastle::Pkix::TrustAnchor*  trustAnchor;

/// @brief Field policyTree offset 0x18
 __declspec(property(get=__get_policyTree, put=__set_policyTree)) ::Org::BouncyCastle::Pkix::PkixPolicyNode*  policyTree;

/// @brief Field subjectPublicKey offset 0x20
 __declspec(property(get=__get_subjectPublicKey, put=__set_subjectPublicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  subjectPublicKey;

 __declspec(property(get=get_PolicyTree)) ::Org::BouncyCastle::Pkix::PkixPolicyNode*  PolicyTree;

 __declspec(property(get=get_TrustAnchor)) ::Org::BouncyCastle::Pkix::TrustAnchor*  TrustAnchor;

 __declspec(property(get=get_SubjectPublicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  SubjectPublicKey;

constexpr void __set_trustAnchor(::Org::BouncyCastle::Pkix::TrustAnchor*  value) ;

constexpr ::Org::BouncyCastle::Pkix::TrustAnchor* __get_trustAnchor() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::TrustAnchor*> __get_trustAnchor() const;

constexpr void __set_policyTree(::Org::BouncyCastle::Pkix::PkixPolicyNode*  value) ;

constexpr ::Org::BouncyCastle::Pkix::PkixPolicyNode* __get_policyTree() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixPolicyNode*> __get_policyTree() const;

constexpr void __set_subjectPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* __get_subjectPublicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> __get_subjectPublicKey() const;

/// @brief Method get_PolicyTree addr 0x10f3fa8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* get_PolicyTree() ;

/// @brief Method get_TrustAnchor addr 0x10f3fb0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Pkix::TrustAnchor* get_TrustAnchor() ;

/// @brief Method get_SubjectPublicKey addr 0x10f3fb8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_SubjectPublicKey() ;

static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* New_ctor(::Org::BouncyCastle::Pkix::TrustAnchor*  trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  subjectPublicKey) ;

/// @brief Method .ctor addr 0x10f3fc0 size 0xb4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Pkix::TrustAnchor*  trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  subjectPublicKey) ;

/// @brief Method Clone addr 0x10f4074 size 0x78 virtual false final false
inline ::System::Object* Clone() ;

/// @brief Method ToString addr 0x10f40ec size 0x170 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixCertPathValidatorResult(PkixCertPathValidatorResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixCertPathValidatorResult(PkixCertPathValidatorResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixCertPathValidatorResult()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*, "Org.BouncyCastle.Pkix", "PkixCertPathValidatorResult");
