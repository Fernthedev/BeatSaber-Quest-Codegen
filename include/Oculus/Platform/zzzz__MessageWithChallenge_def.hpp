#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithChallenge)
namespace Oculus::Platform::Models {
class Challenge;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallenge;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithChallenge);
// Type: Oculus.Platform::MessageWithChallenge
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13426)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 1171 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13283))
// CS Name: ::Oculus.Platform::MessageWithChallenge*
class CORDL_TYPE MessageWithChallenge : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Challenge*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Challenge*>)]{};

static inline ::Oculus::Platform::MessageWithChallenge* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26eee20 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetChallenge addr 0x26f1530 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::Challenge* GetChallenge() ;

/// @brief Method GetDataFromMessage addr 0x26f156c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::Challenge* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallenge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithChallenge(MessageWithChallenge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallenge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithChallenge(MessageWithChallenge const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithChallenge()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithChallenge, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithChallenge);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallenge*, "Oculus.Platform", "MessageWithChallenge");
