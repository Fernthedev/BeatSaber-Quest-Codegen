#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmpException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CmpException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::CmpException);
// Type: Org.BouncyCastle.Cmp::CmpException
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(604))
// CS Name: ::Org.BouncyCastle.Cmp::CmpException*
class CORDL_TYPE CmpException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::Cmp::CmpException* New_ctor() ;

/// @brief Method .ctor addr 0x11d5f50 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Cmp::CmpException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x11d5bbc size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Cmp::CmpException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x11d5fa8 size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

// Ctor Parameters [CppParam { name: "", ty: "CmpException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmpException(CmpException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmpException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmpException(CmpException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmpException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CmpException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CmpException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CmpException*, "Org.BouncyCastle.Cmp", "CmpException");
