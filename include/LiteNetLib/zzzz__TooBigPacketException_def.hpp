#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__InvalidPacketException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooBigPacketException)
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class TooBigPacketException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::TooBigPacketException);
// Type: LiteNetLib::TooBigPacketException
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14160))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14161))
// CS Name: ::LiteNetLib::TooBigPacketException*
class CORDL_TYPE TooBigPacketException : public ::LiteNetLib::InvalidPacketException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::LiteNetLib::InvalidPacketException)]{};

static inline ::LiteNetLib::TooBigPacketException* New_ctor() ;

/// @brief Method .ctor addr 0x21fc348 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::LiteNetLib::TooBigPacketException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x21fc350 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::LiteNetLib::TooBigPacketException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x21fc358 size 0x8 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

// Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TooBigPacketException(TooBigPacketException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TooBigPacketException(TooBigPacketException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TooBigPacketException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::TooBigPacketException, 0x98>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::TooBigPacketException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::TooBigPacketException*, "LiteNetLib", "TooBigPacketException");
