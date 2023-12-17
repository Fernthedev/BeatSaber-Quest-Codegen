#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerOtherPlayersScoreDiffTextManager)
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class __MultiplayerOtherPlayersScoreDiffTextManager____c;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOtherPlayersScoreDiffTextManager;
}
namespace GlobalNamespace {
class __MultiplayerOtherPlayersScoreDiffTextManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5230))
// CS Name: ::MultiplayerOtherPlayersScoreDiffTextManager::<>c*
class CORDL_TYPE __MultiplayerOtherPlayersScoreDiffTextManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*  value) ;

static inline ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* getStaticF___9() ;

static inline void setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*,bool>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*,bool>* getStaticF___9__10_0() ;

static inline ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x2253dd8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Update>b__10_0 addr 0x2253de0 size 0x14 virtual false final false
inline bool _Update_b__10_0(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*  p) ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerOtherPlayersScoreDiffTextManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerOtherPlayersScoreDiffTextManager____c(__MultiplayerOtherPlayersScoreDiffTextManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerOtherPlayersScoreDiffTextManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerOtherPlayersScoreDiffTextManager____c(__MultiplayerOtherPlayersScoreDiffTextManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerOtherPlayersScoreDiffTextManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__10_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerOtherPlayersScoreDiffTextManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5231))
// CS Name: ::MultiplayerOtherPlayersScoreDiffTextManager*
class CORDL_TYPE MultiplayerOtherPlayersScoreDiffTextManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kUpdateInterval offset 0x0
static constexpr float_t  kUpdateInterval{0.5};

/// @brief Field _multiplayerController offset 0x18
 __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController)) ::GlobalNamespace::MultiplayerController*  _multiplayerController;

/// @brief Field _playersManager offset 0x20
 __declspec(property(get=__get__playersManager, put=__set__playersManager)) ::GlobalNamespace::MultiplayerPlayersManager*  _playersManager;

/// @brief Field _scoreProvider offset 0x28
 __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider)) ::GlobalNamespace::MultiplayerScoreProvider*  _scoreProvider;

/// @brief Field _multiplayerSessionManager offset 0x30
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _layoutProvider offset 0x38
 __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider*  _layoutProvider;

/// @brief Field _initData offset 0x40
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__CoreGameHUDController__InitData*  _initData;

/// @brief Field _timeToNextUpdate offset 0x48
 __declspec(property(get=__get__timeToNextUpdate, put=__set__timeToNextUpdate)) float_t  _timeToNextUpdate;

constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController*  value) ;

constexpr ::GlobalNamespace::MultiplayerController* __get__multiplayerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> __get__multiplayerController() const;

constexpr void __set__playersManager(::GlobalNamespace::MultiplayerPlayersManager*  value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager* __get__playersManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> __get__playersManager() const;

constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider*  value) ;

constexpr ::GlobalNamespace::MultiplayerScoreProvider* __get__scoreProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> __get__scoreProvider() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider*  value) ;

constexpr ::GlobalNamespace::MultiplayerLayoutProvider* __get__layoutProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> __get__layoutProvider() const;

constexpr void __set__initData(::GlobalNamespace::__CoreGameHUDController__InitData*  value) ;

constexpr ::GlobalNamespace::__CoreGameHUDController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> __get__initData() const;

constexpr void __set__timeToNextUpdate(float_t  value) ;

constexpr float_t& __get__timeToNextUpdate() ;

constexpr float_t const& __get__timeToNextUpdate() const;

/// @brief Method Start addr 0x2252e2c size 0xb8 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2252ee4 size 0xd0 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x2252fb4 size 0x3d4 virtual false final false
inline void Update() ;

/// @brief Method InitLeftRightPositions addr 0x2253748 size 0x4bc virtual false final false
inline void InitLeftRightPositions() ;

/// @brief Method HideAll addr 0x2253388 size 0x3c0 virtual false final false
inline void HideAll() ;

/// @brief Method HandleStateChanged addr 0x2253c04 size 0x168 virtual false final false
inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State  newState) ;

static inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager* New_ctor() ;

/// @brief Method .ctor addr 0x2253d6c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerOtherPlayersScoreDiffTextManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*, "", "MultiplayerOtherPlayersScoreDiffTextManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*, "", "MultiplayerOtherPlayersScoreDiffTextManager/<>c");
