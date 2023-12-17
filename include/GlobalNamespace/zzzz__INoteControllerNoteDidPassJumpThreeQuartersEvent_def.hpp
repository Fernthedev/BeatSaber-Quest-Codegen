#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteControllerNoteDidPassJumpThreeQuartersEvent)
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent);
// Type: ::INoteControllerNoteDidPassJumpThreeQuartersEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4765))
// CS Name: ::INoteControllerNoteDidPassJumpThreeQuartersEvent*
class CORDL_TYPE INoteControllerNoteDidPassJumpThreeQuartersEvent {
public:
// Declarations
/// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters addr 0x0 size 0xffffffffffffffff virtual true final false
inline void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase*  noteController) ;

// Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidPassJumpThreeQuartersEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
INoteControllerNoteDidPassJumpThreeQuartersEvent(INoteControllerNoteDidPassJumpThreeQuartersEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidPassJumpThreeQuartersEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INoteControllerNoteDidPassJumpThreeQuartersEvent(INoteControllerNoteDidPassJumpThreeQuartersEvent const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*, "", "INoteControllerNoteDidPassJumpThreeQuartersEvent");
