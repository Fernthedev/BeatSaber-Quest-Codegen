#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixCertPathBuilderException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException);
// Type: Org.BouncyCastle.Pkix::PkixCertPathBuilderException
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1718))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathBuilderException*
class CORDL_TYPE PkixCertPathBuilderException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Security::GeneralSecurityException)]{};

static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor() ;

/// @brief Method .ctor addr 0x10f3fa4 size 0x4 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x10e964c size 0x4 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x10e9e58 size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixCertPathBuilderException(PkixCertPathBuilderException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixCertPathBuilderException(PkixCertPathBuilderException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixCertPathBuilderException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathBuilderException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathBuilderException*, "Org.BouncyCastle.Pkix", "PkixCertPathBuilderException");
