#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixAttrCertChecker)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixAttrCertChecker;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixAttrCertChecker);
// Type: Org.BouncyCastle.Pkix::PkixAttrCertChecker
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1710))
// CS Name: ::Org.BouncyCastle.Pkix::PkixAttrCertChecker*
class CORDL_TYPE PkixAttrCertChecker : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetSupportedExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetSupportedExtensions() ;

/// @brief Method Check addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Check(::Org::BouncyCastle::X509::IX509AttributeCertificate*  attrCert, ::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::PkixCertPath*  holderCertPath, ::System::Collections::ICollection*  unresolvedCritExts) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Pkix::PkixAttrCertChecker* Clone() ;

static inline ::Org::BouncyCastle::Pkix::PkixAttrCertChecker* New_ctor() ;

/// @brief Method .ctor addr 0x10e8764 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixAttrCertChecker(PkixAttrCertChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixAttrCertChecker(PkixAttrCertChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixAttrCertChecker()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixAttrCertChecker, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixAttrCertChecker);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixAttrCertChecker*, "Org.BouncyCastle.Pkix", "PkixAttrCertChecker");
