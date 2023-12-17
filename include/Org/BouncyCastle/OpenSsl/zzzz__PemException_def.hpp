#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemException);
// Type: Org.BouncyCastle.OpenSsl::PemException
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1684))
// CS Name: ::Org.BouncyCastle.OpenSsl::PemException*
class CORDL_TYPE PemException : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::IO::IOException)]{};

static inline ::Org::BouncyCastle::OpenSsl::PemException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x10d1594 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::OpenSsl::PemException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x10d159c size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "PemException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PemException(PemException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PemException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PemException(PemException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PemException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemException*, "Org.BouncyCastle.OpenSsl", "PemException");
