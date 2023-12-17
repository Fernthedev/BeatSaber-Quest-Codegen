#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithString)
// Forward declare root types
namespace Oculus::Platform {
class MessageWithString;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithString);
// Type: Oculus.Platform::MessageWithString
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 397 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13324))
// CS Name: ::Oculus.Platform::MessageWithString*
class CORDL_TYPE MessageWithString : public ::Oculus::Platform::Message_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::StringW>)]{};

static inline ::Oculus::Platform::MessageWithString* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef8c8 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetString addr 0x26f3b10 size 0x3c virtual true final false
inline ::StringW GetString() ;

/// @brief Method GetDataFromMessage addr 0x26f3b4c size 0x54 virtual true final false
inline ::StringW GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithString(MessageWithString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithString(MessageWithString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithString()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithString, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithString);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithString*, "Oculus.Platform", "MessageWithString");
