#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrlException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CrlException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CrlException);
// Type: Org.BouncyCastle.Security.Certificates::CrlException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1738))
// CS Name: ::Org.BouncyCastle.Security.Certificates::CrlException*
class CORDL_TYPE CrlException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Security::GeneralSecurityException)]{};

static inline ::Org::BouncyCastle::Security::Certificates::CrlException* New_ctor() ;

/// @brief Method .ctor addr 0x111da0c size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Security::Certificates::CrlException* New_ctor(::StringW  msg) ;

/// @brief Method .ctor addr 0x111da14 size 0x8 virtual false final false
inline void _ctor(::StringW  msg) ;

static inline ::Org::BouncyCastle::Security::Certificates::CrlException* New_ctor(::StringW  msg, ::System::Exception*  e) ;

/// @brief Method .ctor addr 0x111da1c size 0x8 virtual false final false
inline void _ctor(::StringW  msg, ::System::Exception*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "CrlException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrlException(CrlException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrlException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrlException(CrlException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrlException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CrlException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CrlException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CrlException*, "Org.BouncyCastle.Security.Certificates", "CrlException");
