#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixCertPathBuilderResult)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult);
// Type: Org.BouncyCastle.Pkix::PkixCertPathBuilderResult
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1719))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1720))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathBuilderResult*
class CORDL_TYPE PkixCertPathBuilderResult : public ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult)]{};

/// @brief Field certPath offset 0x28
 __declspec(property(get=__get_certPath, put=__set_certPath)) ::Org::BouncyCastle::Pkix::PkixCertPath*  certPath;

 __declspec(property(get=get_CertPath)) ::Org::BouncyCastle::Pkix::PkixCertPath*  CertPath;

constexpr void __set_certPath(::Org::BouncyCastle::Pkix::PkixCertPath*  value) ;

constexpr ::Org::BouncyCastle::Pkix::PkixCertPath* __get_certPath() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixCertPath*> __get_certPath() const;

static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* New_ctor(::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::TrustAnchor*  trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  subjectPublicKey) ;

/// @brief Method .ctor addr 0x10eb440 size 0x80 virtual false final false
inline void _ctor(::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::TrustAnchor*  trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode*  policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  subjectPublicKey) ;

/// @brief Method get_CertPath addr 0x10f425c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Pkix::PkixCertPath* get_CertPath() ;

/// @brief Method ToString addr 0x10f4264 size 0x1a8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixCertPathBuilderResult(PkixCertPathBuilderResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixCertPathBuilderResult(PkixCertPathBuilderResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixCertPathBuilderResult()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*, "Org.BouncyCastle.Pkix", "PkixCertPathBuilderResult");
