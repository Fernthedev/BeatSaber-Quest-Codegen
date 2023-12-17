#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixAttrCertPathValidator)
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixAttrCertPathValidator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator);
// Type: Org.BouncyCastle.Pkix::PkixAttrCertPathValidator
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1712))
// CS Name: ::Org.BouncyCastle.Pkix::PkixAttrCertPathValidator*
class CORDL_TYPE PkixAttrCertPathValidator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Validate addr 0x10ebc04 size 0x3cc virtual true final false
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Validate(::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::PkixParameters*  pkixParams) ;

static inline ::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator* New_ctor() ;

/// @brief Method .ctor addr 0x10eb2a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixAttrCertPathValidator(PkixAttrCertPathValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixAttrCertPathValidator(PkixAttrCertPathValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixAttrCertPathValidator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*, "Org.BouncyCastle.Pkix", "PkixAttrCertPathValidator");
