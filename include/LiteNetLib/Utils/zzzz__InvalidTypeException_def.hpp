#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidTypeException)
// Forward declare root types
namespace LiteNetLib::Utils {
class InvalidTypeException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::InvalidTypeException);
// Type: LiteNetLib.Utils::InvalidTypeException
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14207))
// CS Name: ::LiteNetLib.Utils::InvalidTypeException*
class CORDL_TYPE InvalidTypeException : public ::System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::ArgumentException)]{};

static inline ::LiteNetLib::Utils::InvalidTypeException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x220bcc4 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTypeException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidTypeException(InvalidTypeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTypeException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidTypeException(InvalidTypeException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvalidTypeException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::InvalidTypeException, 0x98>, "Size mismatch!");

} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::InvalidTypeException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::InvalidTypeException*, "LiteNetLib.Utils", "InvalidTypeException");
