#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerNoteController)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerNoteController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerNoteController);
// Type: ::MultiplayerConnectedPlayerNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4761))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5138))
// CS Name: ::MultiplayerConnectedPlayerNoteController*
class CORDL_TYPE MultiplayerConnectedPlayerNoteController : public ::GlobalNamespace::NoteController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::GlobalNamespace::NoteController)]{};

/// @brief Field _visualsWrapperGo offset 0x80
 __declspec(property(get=__get__visualsWrapperGo, put=__set__visualsWrapperGo)) ::UnityEngine::GameObject*  _visualsWrapperGo;

constexpr void __set__visualsWrapperGo(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__visualsWrapperGo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__visualsWrapperGo() const;

/// @brief Method HiddenStateDidChange addr 0x23d7a28 size 0x24 virtual true final false
inline void HiddenStateDidChange(bool  hide) ;

/// @brief Method Pause addr 0x23d7a4c size 0x10 virtual true final false
inline void Pause(bool  pause) ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerNoteController* New_ctor() ;

/// @brief Method .ctor addr 0x23d779c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerNoteController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerNoteController, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerNoteController*, "", "MultiplayerConnectedPlayerNoteController");
