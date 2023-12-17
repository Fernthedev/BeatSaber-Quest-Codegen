#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificateParsingException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateParsingException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CertificateParsingException);
// Type: Org.BouncyCastle.Security.Certificates::CertificateParsingException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1737))
// CS Name: ::Org.BouncyCastle.Security.Certificates::CertificateParsingException*
class CORDL_TYPE CertificateParsingException : public ::Org::BouncyCastle::Security::Certificates::CertificateException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Security::Certificates::CertificateException)]{};

static inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* New_ctor() ;

/// @brief Method .ctor addr 0x111d9f4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x111d9fc size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x111da04 size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "CertificateParsingException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateParsingException(CertificateParsingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateParsingException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateParsingException(CertificateParsingException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertificateParsingException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CertificateParsingException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateParsingException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateParsingException*, "Org.BouncyCastle.Security.Certificates", "CertificateParsingException");
