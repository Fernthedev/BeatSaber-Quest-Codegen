#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OcspException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspException);
// Type: Org.BouncyCastle.Ocsp::OcspException
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1612))
// CS Name: ::Org.BouncyCastle.Ocsp::OcspException*
class CORDL_TYPE OcspException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::Ocsp::OcspException* New_ctor() ;

/// @brief Method .ctor addr 0x109f584 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Ocsp::OcspException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x109f5dc size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Ocsp::OcspException* New_ctor(::StringW  message, ::System::Exception*  e) ;

/// @brief Method .ctor addr 0x109bde0 size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "OcspException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcspException(OcspException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcspException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcspException(OcspException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OcspException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspException*, "Org.BouncyCastle.Ocsp", "OcspException");
