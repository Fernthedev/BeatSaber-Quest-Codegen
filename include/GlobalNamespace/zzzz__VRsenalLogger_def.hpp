#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VRsenalLogger)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class VRsenalScoreLogger;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StringSignal;
}
// Forward declare root types
namespace GlobalNamespace {
class VRsenalLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRsenalLogger);
// Type: ::VRsenalLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4014))
// CS Name: ::VRsenalLogger*
class CORDL_TYPE VRsenalLogger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _standardLevelScenesTransitionSetupData offset 0x18
 __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::ScenesTransitionSetupDataSO*  _standardLevelScenesTransitionSetupData;

/// @brief Field _tutorialScenesTransitionSetupData offset 0x20
 __declspec(property(get=__get__tutorialScenesTransitionSetupData, put=__set__tutorialScenesTransitionSetupData)) ::GlobalNamespace::ScenesTransitionSetupDataSO*  _tutorialScenesTransitionSetupData;

/// @brief Field _playerNameWasEnteredSignal offset 0x28
 __declspec(property(get=__get__playerNameWasEnteredSignal, put=__set__playerNameWasEnteredSignal)) ::GlobalNamespace::StringSignal*  _playerNameWasEnteredSignal;

/// @brief Field _vRsenalScoreLoggerPrefab offset 0x30
 __declspec(property(get=__get__vRsenalScoreLoggerPrefab, put=__set__vRsenalScoreLoggerPrefab)) ::GlobalNamespace::VRsenalScoreLogger*  _vRsenalScoreLoggerPrefab;

/// @brief Field _gameScenesManager offset 0x38
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* __get__standardLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> __get__standardLevelScenesTransitionSetupData() const;

constexpr void __set__tutorialScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* __get__tutorialScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> __get__tutorialScenesTransitionSetupData() const;

constexpr void __set__playerNameWasEnteredSignal(::GlobalNamespace::StringSignal*  value) ;

constexpr ::GlobalNamespace::StringSignal* __get__playerNameWasEnteredSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSignal*> __get__playerNameWasEnteredSignal() const;

constexpr void __set__vRsenalScoreLoggerPrefab(::GlobalNamespace::VRsenalScoreLogger*  value) ;

constexpr ::GlobalNamespace::VRsenalScoreLogger* __get__vRsenalScoreLoggerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRsenalScoreLogger*> __get__vRsenalScoreLoggerPrefab() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

/// @brief Method Awake addr 0x2222b84 size 0x108 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x2222c8c size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleGameScenesManagerInstallEarlyBindings addr 0x2222d94 size 0x14c virtual false final false
inline void HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::Zenject::DiContainer*  container) ;

/// @brief Method HandlePlayerNameWasEntered addr 0x2222ee0 size 0x8c virtual false final false
inline void HandlePlayerNameWasEntered(::StringW  playerName) ;

static inline ::GlobalNamespace::VRsenalLogger* New_ctor() ;

/// @brief Method .ctor addr 0x2222f6c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VRsenalLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRsenalLogger(VRsenalLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRsenalLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRsenalLogger(VRsenalLogger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VRsenalLogger()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRsenalLogger, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRsenalLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRsenalLogger*, "", "VRsenalLogger");
