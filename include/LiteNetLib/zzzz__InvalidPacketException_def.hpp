#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidPacketException)
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class InvalidPacketException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::InvalidPacketException);
// Type: LiteNetLib::InvalidPacketException
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14160))
// CS Name: ::LiteNetLib::InvalidPacketException*
class CORDL_TYPE InvalidPacketException : public ::System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::ArgumentException)]{};

static inline ::LiteNetLib::InvalidPacketException* New_ctor() ;

/// @brief Method .ctor addr 0x21fc330 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::LiteNetLib::InvalidPacketException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x21fc338 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::LiteNetLib::InvalidPacketException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x21fc340 size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

// Ctor Parameters [CppParam { name: "", ty: "InvalidPacketException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidPacketException(InvalidPacketException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidPacketException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidPacketException(InvalidPacketException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvalidPacketException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::InvalidPacketException, 0x98>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::InvalidPacketException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::InvalidPacketException*, "LiteNetLib", "InvalidPacketException");
