#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarSystem)
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
namespace Zenject {
class DiContainer;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystem;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem);
// Type: BeatSaber.BeatAvatarAdapter::BeatAvatarSystem
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15259))
// CS Name: ::BeatSaber.BeatAvatarAdapter::BeatAvatarSystem*
class CORDL_TYPE BeatAvatarSystem : public ::BeatSaber::AvatarCore::AvatarSystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::BeatSaber::AvatarCore::AvatarSystem)]{};

/// @brief Field _avatarDataModel offset 0x38
 __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel)) ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  _avatarDataModel;

/// @brief Field _container offset 0x40
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _settings offset 0x48
 __declspec(property(get=__get__settings, put=__set__settings)) ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*  _settings;

 __declspec(property(get=get_avatarCreated)) ::System::Threading::Tasks::Task_1<bool>*  avatarCreated;

static inline void setStaticF_kAvatarSystemTypeIdentifier(::BeatSaber::AvatarCore::AvatarSystemIdentifier  value) ;

static inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier getStaticF_kAvatarSystemTypeIdentifier() ;

constexpr void __set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __get__avatarDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> __get__avatarDataModel() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__settings(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*  value) ;

constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* __get__settings() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*> __get__settings() const;

static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* New_ctor(::Zenject::DiContainer*  container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  model, ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*  settings) ;

/// @brief Method .ctor addr 0xe146ac size 0xe8 virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  model, ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*  settings) ;

/// @brief Method get_avatarCreated addr 0xe14794 size 0x80 virtual true final false
inline ::System::Threading::Tasks::Task_1<bool>* get_avatarCreated() ;

/// @brief Method InstantiateAvatar addr 0xe14814 size 0xac virtual true final false
inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::Avatar*>* InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext  avatarDisplayContext, int32_t  levelOfDetail, ::Zenject::DiContainer*  container) ;

/// @brief Method InstantiateAvatarEditorUI addr 0xe148c0 size 0x64 virtual true final false
inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>* InstantiateAvatarEditorUI(::Zenject::DiContainer*  container) ;

/// @brief Method InstantiateAvatarSelectionView addr 0xe14924 size 0x64 virtual true final false
inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarSelectionView*>* InstantiateAvatarSelectionView(::Zenject::DiContainer*  container) ;

/// @brief Method GetMultiplayerAvatarsData addr 0xe14988 size 0x8c virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* GetMultiplayerAvatarsData() ;

/// @brief Method GetMultiplayerAvatarOptionalDataProvider addr 0xe14a14 size 0x8 virtual true final false
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider() ;

/// @brief Method CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist addr 0xe14a1c size 0x34 virtual true final false
inline bool CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist() ;

/// @brief Method __GetRandomizedMultiplayerAvatarsData addr 0xe14a50 size 0x90 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __GetRandomizedMultiplayerAvatarsData() ;

/// @brief Method DeleteUserCreatedAvatar addr 0xe14ae0 size 0x1c virtual true final false
inline void DeleteUserCreatedAvatar() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatAvatarSystem(BeatAvatarSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatAvatarSystem(BeatAvatarSystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatAvatarSystem()  = default;
public:


// Fields

// Static field kAvatarSystemTypeIdentifier


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, 0x50>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarSystem");
