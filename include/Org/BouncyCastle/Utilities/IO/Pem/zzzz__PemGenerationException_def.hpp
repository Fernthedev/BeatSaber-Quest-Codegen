#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemGenerationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemGenerationException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemGenerationException
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1804))
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemGenerationException*
class CORDL_TYPE PemGenerationException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* New_ctor() ;

/// @brief Method .ctor addr 0x115f7cc size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x115f824 size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x115f88c size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "PemGenerationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PemGenerationException(PemGenerationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PemGenerationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PemGenerationException(PemGenerationException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PemGenerationException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemGenerationException*, "Org.BouncyCastle.Utilities.IO.Pem", "PemGenerationException");
