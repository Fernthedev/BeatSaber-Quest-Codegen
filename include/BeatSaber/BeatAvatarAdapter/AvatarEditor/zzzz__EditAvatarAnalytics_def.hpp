#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EditAvatarAnalytics)
namespace GlobalNamespace {
class BeatAvatarEditorFlowCoordinator;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__EditMode;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__FinishAction;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics);
// Type: BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarAnalytics
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15269))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarAnalytics*
class CORDL_TYPE EditAvatarAnalytics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _avatarEditorFlowCoordinator offset 0x18
 __declspec(property(get=__get__avatarEditorFlowCoordinator, put=__set__avatarEditorFlowCoordinator)) ::GlobalNamespace::BeatAvatarEditorFlowCoordinator*  _avatarEditorFlowCoordinator;

/// @brief Field _analyticsModel offset 0x20
 __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _avatarDataModel offset 0x28
 __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel)) ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  _avatarDataModel;

/// @brief Field _lastEditMode offset 0x30
 __declspec(property(get=__get__lastEditMode, put=__set__lastEditMode)) ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  _lastEditMode;

constexpr void __set__avatarEditorFlowCoordinator(::GlobalNamespace::BeatAvatarEditorFlowCoordinator*  value) ;

constexpr ::GlobalNamespace::BeatAvatarEditorFlowCoordinator* __get__avatarEditorFlowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*> __get__avatarEditorFlowCoordinator() const;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr ::GlobalNamespace::IAnalyticsModel* __get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> __get__analyticsModel() const;

constexpr void __set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __get__avatarDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> __get__avatarDataModel() const;

constexpr void __set__lastEditMode(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  value) ;

constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode& __get__lastEditMode() ;

constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode const& __get__lastEditMode() const;

/// @brief Method Awake addr 0xe17a38 size 0x154 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0xe17b8c size 0x1a0 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleAvatarEditorFlowCoordinatorDidSetup addr 0xe17d2c size 0xd8 virtual false final false
inline void HandleAvatarEditorFlowCoordinatorDidSetup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  editMode) ;

/// @brief Method HandleAvatarEditorFlowCoordinatorDidFinish addr 0xe1807c size 0xf8 virtual false final false
inline void HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*  flowCoordinator, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystemMetadata, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction  finishAction) ;

/// @brief Method HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed addr 0xe18174 size 0xd0 virtual false final false
inline void HandleAvatarEditorFlowCoordinatorRandomizeAllButtonWasPressed() ;

/// @brief Method CreateEditAvatarEventData addr 0xe17e04 size 0x278 virtual false final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* CreateEditAvatarEventData() ;

static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics* New_ctor() ;

/// @brief Method .ctor addr 0xe18244 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EditAvatarAnalytics(EditAvatarAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditAvatarAnalytics(EditAvatarAnalytics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EditAvatarAnalytics()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics, 0x38>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarAnalytics*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "EditAvatarAnalytics");
