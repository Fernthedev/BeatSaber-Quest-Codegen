#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkcsIOException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PkcsIOException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::PkcsIOException);
// Type: Org.BouncyCastle.Pkcs::PkcsIOException
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1706))
// CS Name: ::Org.BouncyCastle.Pkcs::PkcsIOException*
class CORDL_TYPE PkcsIOException : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::IO::IOException)]{};

static inline ::Org::BouncyCastle::Pkcs::PkcsIOException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x10e7298 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Pkcs::PkcsIOException* New_ctor(::StringW  message, ::System::Exception*  underlying) ;

/// @brief Method .ctor addr 0x10e68f8 size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  underlying) ;

// Ctor Parameters [CppParam { name: "", ty: "PkcsIOException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkcsIOException(PkcsIOException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkcsIOException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkcsIOException(PkcsIOException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkcsIOException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::PkcsIOException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PkcsIOException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PkcsIOException*, "Org.BouncyCastle.Pkcs", "PkcsIOException");
