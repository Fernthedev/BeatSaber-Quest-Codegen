#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StreamOverflowException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class StreamOverflowException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::StreamOverflowException);
// Type: Org.BouncyCastle.Utilities.IO::StreamOverflowException
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1812))
// CS Name: ::Org.BouncyCastle.Utilities.IO::StreamOverflowException*
class CORDL_TYPE StreamOverflowException : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::IO::IOException)]{};

static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor() ;

/// @brief Method .ctor addr 0x115fcb0 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x115fcb8 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Utilities::IO::StreamOverflowException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x115fcc0 size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "StreamOverflowException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamOverflowException(StreamOverflowException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamOverflowException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamOverflowException(StreamOverflowException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StreamOverflowException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::StreamOverflowException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::StreamOverflowException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::StreamOverflowException*, "Org.BouncyCastle.Utilities.IO", "StreamOverflowException");
