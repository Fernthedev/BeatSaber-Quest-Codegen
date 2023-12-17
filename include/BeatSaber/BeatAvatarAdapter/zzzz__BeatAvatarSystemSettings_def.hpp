#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarSystemSettings)
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings);
// Type: BeatSaber.BeatAvatarAdapter::BeatAvatarSystemSettings
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15260))
// CS Name: ::BeatSaber.BeatAvatarAdapter::BeatAvatarSystemSettings*
class CORDL_TYPE BeatAvatarSystemSettings : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _avatarGameplayPrefab offset 0x18
 __declspec(property(get=__get__avatarGameplayPrefab, put=__set__avatarGameplayPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  _avatarGameplayPrefab;

/// @brief Field _avatarResultsPrefab offset 0x20
 __declspec(property(get=__get__avatarResultsPrefab, put=__set__avatarResultsPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  _avatarResultsPrefab;

/// @brief Field _avatarHologramPrefab offset 0x28
 __declspec(property(get=__get__avatarHologramPrefab, put=__set__avatarHologramPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  _avatarHologramPrefab;

/// @brief Field _avatarEditorPrefab offset 0x30
 __declspec(property(get=__get__avatarEditorPrefab, put=__set__avatarEditorPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  _avatarEditorPrefab;

/// @brief Field _avatarSelectionViewPrefab offset 0x38
 __declspec(property(get=__get__avatarSelectionViewPrefab, put=__set__avatarSelectionViewPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  _avatarSelectionViewPrefab;

/// @brief Field _avatarForUnityEditorPrefab offset 0x40
 __declspec(property(get=__get__avatarForUnityEditorPrefab, put=__set__avatarForUnityEditorPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  _avatarForUnityEditorPrefab;

 __declspec(property(get=get_avatarGameplayPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  avatarGameplayPrefab;

 __declspec(property(get=get_avatarResultsPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  avatarResultsPrefab;

 __declspec(property(get=get_avatarHologramPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  avatarHologramPrefab;

 __declspec(property(get=get_avatarEditorPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  avatarEditorPrefab;

 __declspec(property(get=get_avatarSelectionViewPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  avatarSelectionViewPrefab;

 __declspec(property(get=get_avatarForUnityEditorPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject*  avatarForUnityEditorPrefab;

constexpr void __set__avatarGameplayPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* __get__avatarGameplayPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> __get__avatarGameplayPrefab() const;

constexpr void __set__avatarResultsPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* __get__avatarResultsPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> __get__avatarResultsPrefab() const;

constexpr void __set__avatarHologramPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* __get__avatarHologramPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> __get__avatarHologramPrefab() const;

constexpr void __set__avatarEditorPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* __get__avatarEditorPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> __get__avatarEditorPrefab() const;

constexpr void __set__avatarSelectionViewPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* __get__avatarSelectionViewPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> __get__avatarSelectionViewPrefab() const;

constexpr void __set__avatarForUnityEditorPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* __get__avatarForUnityEditorPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> __get__avatarForUnityEditorPrefab() const;

/// @brief Method get_avatarGameplayPrefab addr 0xe14b78 size 0x8 virtual false final false
inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarGameplayPrefab() ;

/// @brief Method get_avatarResultsPrefab addr 0xe14b80 size 0x8 virtual false final false
inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarResultsPrefab() ;

/// @brief Method get_avatarHologramPrefab addr 0xe14b88 size 0x8 virtual false final false
inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarHologramPrefab() ;

/// @brief Method get_avatarEditorPrefab addr 0xe14b90 size 0x8 virtual false final false
inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarEditorPrefab() ;

/// @brief Method get_avatarSelectionViewPrefab addr 0xe14b98 size 0x8 virtual false final false
inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarSelectionViewPrefab() ;

/// @brief Method get_avatarForUnityEditorPrefab addr 0xe14ba0 size 0x8 virtual false final false
inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarForUnityEditorPrefab() ;

static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* New_ctor() ;

/// @brief Method .ctor addr 0xe14ba8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystemSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatAvatarSystemSettings(BeatAvatarSystemSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystemSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatAvatarSystemSettings(BeatAvatarSystemSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatAvatarSystemSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, 0x48>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarSystemSettings");
