#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarAdapterInstallerSO)
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarColorViewController;
}
namespace Zenject {
class DiContainer;
}
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSetSO;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModelSO;
}
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class BeatAvatarEditorViewController;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarAdapterInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO);
// Type: BeatSaber.BeatAvatarAdapter::BeatAvatarAdapterInstallerSO
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15258))
// CS Name: ::BeatSaber.BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*
class CORDL_TYPE BeatAvatarAdapterInstallerSO : public ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::BeatSaber::AvatarCore::AbstractAdapterInstallerSO)]{};

/// @brief Field _avatarPartsModel offset 0x20
 __declspec(property(get=__get__avatarPartsModel, put=__set__avatarPartsModel)) ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*  _avatarPartsModel;

/// @brief Field _skinColorSet offset 0x28
 __declspec(property(get=__get__skinColorSet, put=__set__skinColorSet)) ::BeatSaber::BeatAvatarSDK::SkinColorSetSO*  _skinColorSet;

/// @brief Field _settings offset 0x30
 __declspec(property(get=__get__settings, put=__set__settings)) ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*  _settings;

/// @brief Field _beatAvatarEditorViewController offset 0x38
 __declspec(property(get=__get__beatAvatarEditorViewController, put=__set__beatAvatarEditorViewController)) ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*  _beatAvatarEditorViewController;

/// @brief Field _editAvatarColorView offset 0x40
 __declspec(property(get=__get__editAvatarColorView, put=__set__editAvatarColorView)) ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*  _editAvatarColorView;

constexpr void __set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* __get__avatarPartsModel() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*> __get__avatarPartsModel() const;

constexpr void __set__skinColorSet(::BeatSaber::BeatAvatarSDK::SkinColorSetSO*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* __get__skinColorSet() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*> __get__skinColorSet() const;

constexpr void __set__settings(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*  value) ;

constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* __get__settings() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*> __get__settings() const;

constexpr void __set__beatAvatarEditorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*  value) ;

constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* __get__beatAvatarEditorViewController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> __get__beatAvatarEditorViewController() const;

constexpr void __set__editAvatarColorView(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*  value) ;

constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* __get__editAvatarColorView() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*> __get__editAvatarColorView() const;

/// @brief Method InstallBindings addr 0xe14484 size 0x10 virtual true final false
inline void InstallBindings() ;

/// @brief Method InstallBindings addr 0xe14494 size 0x210 virtual true final false
inline void InstallBindings(::Zenject::DiContainer*  container) ;

static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO* New_ctor() ;

/// @brief Method .ctor addr 0xe146a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarAdapterInstallerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatAvatarAdapterInstallerSO(BeatAvatarAdapterInstallerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarAdapterInstallerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatAvatarAdapterInstallerSO(BeatAvatarAdapterInstallerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatAvatarAdapterInstallerSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO, 0x48>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarAdapterInstallerSO");
