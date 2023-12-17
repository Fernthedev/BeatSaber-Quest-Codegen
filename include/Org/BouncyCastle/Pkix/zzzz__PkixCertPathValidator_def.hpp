#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixCertPathValidator)
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathValidator);
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidator
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1722))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathValidator*
class CORDL_TYPE PkixCertPathValidator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Validate addr 0x10f441c size 0x1eec virtual true final false
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Validate(::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::PkixParameters*  paramsPkix) ;

/// @brief Method CheckCertificate addr 0x10f6a28 size 0x108 virtual false final false
static inline void CheckCertificate(::Org::BouncyCastle::X509::X509Certificate*  cert) ;

static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidator* New_ctor() ;

/// @brief Method .ctor addr 0x10f3e64 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixCertPathValidator(PkixCertPathValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixCertPathValidator(PkixCertPathValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixCertPathValidator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathValidator, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathValidator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathValidator*, "Org.BouncyCastle.Pkix", "PkixCertPathValidator");
