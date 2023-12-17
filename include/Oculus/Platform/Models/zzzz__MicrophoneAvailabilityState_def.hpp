#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MicrophoneAvailabilityState)
// Forward declare root types
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MicrophoneAvailabilityState);
// Type: Oculus.Platform.Models::MicrophoneAvailabilityState
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13457))
// CS Name: ::Oculus.Platform.Models::MicrophoneAvailabilityState*
class CORDL_TYPE MicrophoneAvailabilityState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field MicrophoneAvailable offset 0x10
 __declspec(property(get=__get_MicrophoneAvailable, put=__set_MicrophoneAvailable)) bool  MicrophoneAvailable;

constexpr void __set_MicrophoneAvailable(bool  value) ;

constexpr bool& __get_MicrophoneAvailable() ;

constexpr bool const& __get_MicrophoneAvailable() const;

static inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2707464 size 0x7c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneAvailabilityState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneAvailabilityState(MicrophoneAvailabilityState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneAvailabilityState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneAvailabilityState(MicrophoneAvailabilityState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MicrophoneAvailabilityState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MicrophoneAvailabilityState, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MicrophoneAvailabilityState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MicrophoneAvailabilityState*, "Oculus.Platform.Models", "MicrophoneAvailabilityState");
