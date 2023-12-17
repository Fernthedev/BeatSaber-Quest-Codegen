#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerInstaller)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller);
// Type: ::MultiplayerLocalActivePlayerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5155))
// CS Name: ::MultiplayerLocalActivePlayerInstaller*
class CORDL_TYPE MultiplayerLocalActivePlayerInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _sceneSetupData offset 0x20
 __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData*  _sceneSetupData;

/// @brief Field _playerDataModel offset 0x28
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _optionalAvatarDataSender offset 0x30
 __declspec(property(get=__get__optionalAvatarDataSender, put=__set__optionalAvatarDataSender)) ::BeatSaber::AvatarCore::OptionalAvatarDataSender*  _optionalAvatarDataSender;

constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* __get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> __get__sceneSetupData() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender*  value) ;

constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender* __get__optionalAvatarDataSender() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> __get__optionalAvatarDataSender() const;

/// @brief Method InstallBindings addr 0x23dc3c0 size 0x140 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MultiplayerLocalActivePlayerInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x23dc500 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalActivePlayerInstaller(MultiplayerLocalActivePlayerInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalActivePlayerInstaller(MultiplayerLocalActivePlayerInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalActivePlayerInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerInstaller, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller*, "", "MultiplayerLocalActivePlayerInstaller");
