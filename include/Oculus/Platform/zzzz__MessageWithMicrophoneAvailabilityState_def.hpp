#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithMicrophoneAvailabilityState)
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMicrophoneAvailabilityState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithMicrophoneAvailabilityState);
// Type: Oculus.Platform::MessageWithMicrophoneAvailabilityState
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4597 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13457))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13305))
// CS Name: ::Oculus.Platform::MessageWithMicrophoneAvailabilityState*
class CORDL_TYPE MessageWithMicrophoneAvailabilityState : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*>)]{};

static inline ::Oculus::Platform::MessageWithMicrophoneAvailabilityState* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef3f8 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetMicrophoneAvailabilityState addr 0x26f2950 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState() ;

/// @brief Method GetDataFromMessage addr 0x26f298c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithMicrophoneAvailabilityState()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithMicrophoneAvailabilityState, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithMicrophoneAvailabilityState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMicrophoneAvailabilityState*, "Oculus.Platform", "MessageWithMicrophoneAvailabilityState");
