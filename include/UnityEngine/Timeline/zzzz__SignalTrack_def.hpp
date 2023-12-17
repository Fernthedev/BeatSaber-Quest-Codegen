#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__MarkerTrack_def.hpp"
CORDL_MODULE_EXPORT(SignalTrack)
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalTrack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalTrack);
// Type: UnityEngine.Timeline::SignalTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13890))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13896))
// CS Name: ::UnityEngine.Timeline::SignalTrack*
class CORDL_TYPE SignalTrack : public ::UnityEngine::Timeline::MarkerTrack {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::Timeline::MarkerTrack)]{};

static inline ::UnityEngine::Timeline::SignalTrack* New_ctor() ;

/// @brief Method .ctor addr 0x2c69e70 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalTrack(SignalTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalTrack(SignalTrack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalTrack()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalTrack, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalTrack*, "UnityEngine.Timeline", "SignalTrack");
