#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PgpKeyValidationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyValidationException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyValidationException
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1635))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1649))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyValidationException*
class CORDL_TYPE PgpKeyValidationException : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpException)]{};

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException* New_ctor() ;

/// @brief Method .ctor addr 0x10aff1c size 0x4 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x10aff20 size 0x4 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x10aff24 size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyValidationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpKeyValidationException(PgpKeyValidationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyValidationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpKeyValidationException(PgpKeyValidationException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PgpKeyValidationException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyValidationException");
