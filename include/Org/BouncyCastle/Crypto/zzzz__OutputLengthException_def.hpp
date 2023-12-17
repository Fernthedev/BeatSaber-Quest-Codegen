#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__DataLengthException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OutputLengthException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class OutputLengthException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::OutputLengthException);
// Type: Org.BouncyCastle.Crypto::OutputLengthException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1348))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1352))
// CS Name: ::Org.BouncyCastle.Crypto::OutputLengthException*
class CORDL_TYPE OutputLengthException : public ::Org::BouncyCastle::Crypto::DataLengthException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::Crypto::DataLengthException)]{};

static inline ::Org::BouncyCastle::Crypto::OutputLengthException* New_ctor() ;

/// @brief Method .ctor addr 0xfc59a8 size 0x4 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::OutputLengthException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0xfc584c size 0x4 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Crypto::OutputLengthException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0xfc59ac size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "OutputLengthException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OutputLengthException(OutputLengthException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutputLengthException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutputLengthException(OutputLengthException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OutputLengthException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::OutputLengthException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::OutputLengthException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::OutputLengthException*, "Org.BouncyCastle.Crypto", "OutputLengthException");
