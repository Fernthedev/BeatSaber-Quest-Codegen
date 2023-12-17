#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalPlayerScoreDiffTextManager)
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerScoreDiffTextManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager);
// Type: ::MultiplayerLocalPlayerScoreDiffTextManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5227))
// CS Name: ::MultiplayerLocalPlayerScoreDiffTextManager*
class CORDL_TYPE MultiplayerLocalPlayerScoreDiffTextManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kUpdateInterval offset 0x0
static constexpr float_t  kUpdateInterval{0.5};

/// @brief Field _scoreDiffText offset 0x18
 __declspec(property(get=__get__scoreDiffText, put=__set__scoreDiffText)) ::GlobalNamespace::MultiplayerScoreDiffText*  _scoreDiffText;

/// @brief Field _multiplayerController offset 0x20
 __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController)) ::GlobalNamespace::MultiplayerController*  _multiplayerController;

/// @brief Field _scoreProvider offset 0x28
 __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider)) ::GlobalNamespace::MultiplayerScoreProvider*  _scoreProvider;

/// @brief Field _hudInitData offset 0x30
 __declspec(property(get=__get__hudInitData, put=__set__hudInitData)) ::GlobalNamespace::__CoreGameHUDController__InitData*  _hudInitData;

/// @brief Field _multiplayerSessionManager offset 0x38
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _timeToNextUpdate offset 0x40
 __declspec(property(get=__get__timeToNextUpdate, put=__set__timeToNextUpdate)) float_t  _timeToNextUpdate;

/// @brief Field _wasLocalPlayerLeader offset 0x44
 __declspec(property(get=__get__wasLocalPlayerLeader, put=__set__wasLocalPlayerLeader)) ::System::Nullable_1<bool>  _wasLocalPlayerLeader;

constexpr void __set__scoreDiffText(::GlobalNamespace::MultiplayerScoreDiffText*  value) ;

constexpr ::GlobalNamespace::MultiplayerScoreDiffText* __get__scoreDiffText() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreDiffText*> __get__scoreDiffText() const;

constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController*  value) ;

constexpr ::GlobalNamespace::MultiplayerController* __get__multiplayerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> __get__multiplayerController() const;

constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider*  value) ;

constexpr ::GlobalNamespace::MultiplayerScoreProvider* __get__scoreProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> __get__scoreProvider() const;

constexpr void __set__hudInitData(::GlobalNamespace::__CoreGameHUDController__InitData*  value) ;

constexpr ::GlobalNamespace::__CoreGameHUDController__InitData* __get__hudInitData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> __get__hudInitData() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__timeToNextUpdate(float_t  value) ;

constexpr float_t& __get__timeToNextUpdate() ;

constexpr float_t const& __get__timeToNextUpdate() const;

constexpr void __set__wasLocalPlayerLeader(::System::Nullable_1<bool>  value) ;

constexpr ::System::Nullable_1<bool>& __get__wasLocalPlayerLeader() ;

constexpr ::System::Nullable_1<bool> const& __get__wasLocalPlayerLeader() const;

/// @brief Method Start addr 0x2252438 size 0xb0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x22524e8 size 0xd0 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x22525b8 size 0x33c virtual false final false
inline void Update() ;

/// @brief Method HandleStateChanged addr 0x22529a8 size 0x4c virtual false final false
inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State  newState) ;

static inline ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager* New_ctor() ;

/// @brief Method .ctor addr 0x22529f4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerScoreDiffTextManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalPlayerScoreDiffTextManager(MultiplayerLocalPlayerScoreDiffTextManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerScoreDiffTextManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalPlayerScoreDiffTextManager(MultiplayerLocalPlayerScoreDiffTextManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalPlayerScoreDiffTextManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*, "", "MultiplayerLocalPlayerScoreDiffTextManager");
