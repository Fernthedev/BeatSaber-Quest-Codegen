#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__ControlTrack_def.hpp"
CORDL_MODULE_EXPORT(CustomControlTrack)
// Forward declare root types
namespace GlobalNamespace {
class CustomControlTrack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomControlTrack);
// Type: ::CustomControlTrack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6009))
// CS Name: ::CustomControlTrack*
class CORDL_TYPE CustomControlTrack : public ::UnityEngine::Timeline::ControlTrack {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::Timeline::ControlTrack)]{};

static inline ::GlobalNamespace::CustomControlTrack* New_ctor() ;

/// @brief Method .ctor addr 0x23158b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControlTrack(CustomControlTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControlTrack(CustomControlTrack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomControlTrack()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomControlTrack, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomControlTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomControlTrack*, "", "CustomControlTrack");
