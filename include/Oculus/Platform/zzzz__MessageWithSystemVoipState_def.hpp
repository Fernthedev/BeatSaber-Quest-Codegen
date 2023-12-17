#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithSystemVoipState)
namespace Oculus::Platform::Models {
class SystemVoipState;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSystemVoipState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithSystemVoipState);
// Type: Oculus.Platform::MessageWithSystemVoipState
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13483)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 983 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13325))
// CS Name: ::Oculus.Platform::MessageWithSystemVoipState*
class CORDL_TYPE MessageWithSystemVoipState : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SystemVoipState*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::SystemVoipState*>)]{};

static inline ::Oculus::Platform::MessageWithSystemVoipState* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef920 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetSystemVoipState addr 0x26f3ba0 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::SystemVoipState* GetSystemVoipState() ;

/// @brief Method GetDataFromMessage addr 0x26f3bdc size 0x9c virtual true final false
inline ::Oculus::Platform::Models::SystemVoipState* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSystemVoipState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithSystemVoipState(MessageWithSystemVoipState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSystemVoipState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithSystemVoipState(MessageWithSystemVoipState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithSystemVoipState()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithSystemVoipState, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithSystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSystemVoipState*, "Oculus.Platform", "MessageWithSystemVoipState");
