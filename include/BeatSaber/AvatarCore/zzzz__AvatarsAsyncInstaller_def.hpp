#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_def.hpp"
CORDL_MODULE_EXPORT(AvatarsAsyncInstaller)
namespace BeatSaber::AvatarCore {
class AbstractAdapterInstallerSO;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarsAsyncInstaller;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarsAsyncInstaller);
// Type: BeatSaber.AvatarCore::AvatarsAsyncInstaller
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15420)), TypeDefinitionIndex(TypeDefinitionIndex(15165)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15420), inst: 736 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15176))
// CS Name: ::BeatSaber.AvatarCore::AvatarsAsyncInstaller*
class CORDL_TYPE AvatarsAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>)]{};

/// @brief Field _avatarAdapterLabel offset 0x40
 __declspec(property(get=__get__avatarAdapterLabel, put=__set__avatarAdapterLabel)) ::UnityEngine::AddressableAssets::AssetLabelReference*  _avatarAdapterLabel;

 __declspec(property(get=get_assetLabel)) ::UnityEngine::AddressableAssets::AssetLabelReference*  assetLabel;

constexpr void __set__avatarAdapterLabel(::UnityEngine::AddressableAssets::AssetLabelReference*  value) ;

constexpr ::UnityEngine::AddressableAssets::AssetLabelReference* __get__avatarAdapterLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetLabelReference*> __get__avatarAdapterLabel() const;

/// @brief Method get_assetLabel addr 0xe0bdc8 size 0x8 virtual true final false
inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel() ;

/// @brief Method InstallBindings addr 0xe0bdd0 size 0xbc virtual true final false
inline void InstallBindings() ;

/// @brief Method LoadResourcesBeforeInstall addr 0xe0be8c size 0x3ec virtual true final false
inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>*  adaptersInstallers, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry) ;

static inline ::BeatSaber::AvatarCore::AvatarsAsyncInstaller* New_ctor() ;

/// @brief Method .ctor addr 0xe0c278 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarsAsyncInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarsAsyncInstaller(AvatarsAsyncInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarsAsyncInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarsAsyncInstaller(AvatarsAsyncInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarsAsyncInstaller()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarsAsyncInstaller, 0x48>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarsAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarsAsyncInstaller*, "BeatSaber.AvatarCore", "AvatarsAsyncInstaller");
