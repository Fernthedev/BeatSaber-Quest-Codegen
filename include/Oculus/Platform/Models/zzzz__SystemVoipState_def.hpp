#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemVoipState)
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SystemVoipState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SystemVoipState);
// Type: Oculus.Platform.Models::SystemVoipState
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13483))
// CS Name: ::Oculus.Platform.Models::SystemVoipState*
class CORDL_TYPE SystemVoipState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field MicrophoneMuted offset 0x10
 __declspec(property(get=__get_MicrophoneMuted, put=__set_MicrophoneMuted)) ::Oculus::Platform::VoipMuteState  MicrophoneMuted;

/// @brief Field Status offset 0x14
 __declspec(property(get=__get_Status, put=__set_Status)) ::Oculus::Platform::SystemVoipStatus  Status;

constexpr void __set_MicrophoneMuted(::Oculus::Platform::VoipMuteState  value) ;

constexpr ::Oculus::Platform::VoipMuteState& __get_MicrophoneMuted() ;

constexpr ::Oculus::Platform::VoipMuteState const& __get_MicrophoneMuted() const;

constexpr void __set_Status(::Oculus::Platform::SystemVoipStatus  value) ;

constexpr ::Oculus::Platform::SystemVoipStatus& __get_Status() ;

constexpr ::Oculus::Platform::SystemVoipStatus const& __get_Status() const;

static inline ::Oculus::Platform::Models::SystemVoipState* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2708f38 size 0x88 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemVoipState(SystemVoipState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemVoipState(SystemVoipState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SystemVoipState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SystemVoipState, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SystemVoipState*, "Oculus.Platform.Models", "SystemVoipState");
