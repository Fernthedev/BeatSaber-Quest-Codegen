#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBombNoteController)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBombNoteController__Pool;
}
namespace GlobalNamespace {
class NoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBombNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool);
// Type: ::MultiplayerConnectedPlayerBombNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5134))
// CS Name: ::MultiplayerConnectedPlayerBombNoteController*
class CORDL_TYPE MultiplayerConnectedPlayerBombNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
// Declarations
using Pool = ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::GlobalNamespace::MultiplayerConnectedPlayerNoteController)]{};

/// @brief Method Init addr 0x23d37f4 size 0x58 virtual false final false
inline void Init(::GlobalNamespace::NoteData*  noteData, float_t  worldRotation, ::UnityEngine::Vector3  moveStartPos, ::UnityEngine::Vector3  moveEndPos, ::UnityEngine::Vector3  jumpEndPos, float_t  moveDuration, float_t  jumpDuration, float_t  jumpGravity) ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* New_ctor() ;

/// @brief Method .ctor addr 0x23d7794 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerBombNoteController(MultiplayerConnectedPlayerBombNoteController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerBombNoteController(MultiplayerConnectedPlayerBombNoteController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerBombNoteController()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2819 }), TypeDefinitionIndex(TypeDefinitionIndex(5134))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5133))
// CS Name: ::MultiplayerConnectedPlayerBombNoteController::Pool*
class CORDL_TYPE __MultiplayerConnectedPlayerBombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>)]{};

static inline ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x23d77a4 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBombNoteController__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerConnectedPlayerBombNoteController__Pool(__MultiplayerConnectedPlayerBombNoteController__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBombNoteController__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerConnectedPlayerBombNoteController__Pool(__MultiplayerConnectedPlayerBombNoteController__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerConnectedPlayerBombNoteController__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*, "", "MultiplayerConnectedPlayerBombNoteController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool*, "", "MultiplayerConnectedPlayerBombNoteController/Pool");
