#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool;
}
// Type: ::MultiplayerConnectedPlayerBombNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5234))
// CS Name: MultiplayerConnectedPlayerBombNoteController
class CORDL_TYPE MultiplayerConnectedPlayerBombNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~MultiplayerConnectedPlayerBombNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerBombNoteController(MultiplayerConnectedPlayerBombNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerBombNoteController(MultiplayerConnectedPlayerBombNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerBombNoteController(void* ptr) noexcept : ::GlobalNamespace::MultiplayerConnectedPlayerNoteController(ptr) {
}


  constexpr MultiplayerConnectedPlayerBombNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerBombNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerBombNoteController& operator=(MultiplayerConnectedPlayerBombNoteController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerBombNoteController& operator=(MultiplayerConnectedPlayerBombNoteController const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x20de1cc size 0x58 virtual false final false
 void Init(::GlobalNamespace::NoteData noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerBombNoteController() ;

/// @brief Method .ctor addr 0x20e2104 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2715 }), TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(5234))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5233))
// CS Name: MultiplayerConnectedPlayerBombNoteController::Pool
class CORDL_TYPE ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool(____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool(____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool& operator=(____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool& operator=(____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool() ;

/// @brief Method .ctor addr 0x20e2114 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController, "", "MultiplayerConnectedPlayerBombNoteController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool, "", "MultiplayerConnectedPlayerBombNoteController/Pool");
