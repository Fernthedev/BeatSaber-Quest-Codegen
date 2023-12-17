#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalPlayerInstaller)
namespace GlobalNamespace {
class MultiplayerLevelSceneSetupData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalPlayerInstaller);
// Type: ::MultiplayerLocalPlayerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5400))
// CS Name: ::MultiplayerLocalPlayerInstaller*
class CORDL_TYPE MultiplayerLocalPlayerInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _levelSceneSetupData offset 0x20
 __declspec(property(get=__get__levelSceneSetupData, put=__set__levelSceneSetupData)) ::GlobalNamespace::MultiplayerLevelSceneSetupData*  _levelSceneSetupData;

/// @brief Field _multiplayerSessionManager offset 0x28
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _startState offset 0x30
 __declspec(property(get=__get__startState, put=__set__startState)) ::GlobalNamespace::MultiplayerPlayerStartState  _startState;

constexpr void __set__levelSceneSetupData(::GlobalNamespace::MultiplayerLevelSceneSetupData*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData* __get__levelSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelSceneSetupData*> __get__levelSceneSetupData() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__startState(::GlobalNamespace::MultiplayerPlayerStartState  value) ;

constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __get__startState() ;

constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __get__startState() const;

/// @brief Method InstallBindings addr 0x2272ce4 size 0x238 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MultiplayerLocalPlayerInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x2272f1c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalPlayerInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalPlayerInstaller, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerInstaller*, "", "MultiplayerLocalPlayerInstaller");
