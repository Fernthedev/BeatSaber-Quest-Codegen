#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarSelectionView)
namespace UnityEngine {
class GameObject;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarTweenController;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class BeatAvatarSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::BeatAvatarSelectionView);
// Type: BeatSaber.AvatarCore::BeatAvatarSelectionView
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15177))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15255))
// CS Name: ::BeatSaber.AvatarCore::BeatAvatarSelectionView*
class CORDL_TYPE BeatAvatarSelectionView : public ::BeatSaber::AvatarCore::AvatarSelectionView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::BeatSaber::AvatarCore::AvatarSelectionView)]{};

/// @brief Field _avatarContainer offset 0x88
 __declspec(property(get=__get__avatarContainer, put=__set__avatarContainer)) ::UnityEngine::GameObject*  _avatarContainer;

/// @brief Field _beatAvatarVisualController offset 0x90
 __declspec(property(get=__get__beatAvatarVisualController, put=__set__beatAvatarVisualController)) ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*  _beatAvatarVisualController;

/// @brief Field _avatarTweenController offset 0x98
 __declspec(property(get=__get__avatarTweenController, put=__set__avatarTweenController)) ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*  _avatarTweenController;

/// @brief Field _avatarDataModel offset 0xa0
 __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel)) ::BeatSaber::BeatAvatarSDK::AvatarDataModel*  _avatarDataModel;

constexpr void __set__avatarContainer(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__avatarContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__avatarContainer() const;

constexpr void __set__beatAvatarVisualController(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* __get__beatAvatarVisualController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*> __get__beatAvatarVisualController() const;

constexpr void __set__avatarTweenController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*  value) ;

constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* __get__avatarTweenController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> __get__avatarTweenController() const;

constexpr void __set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __get__avatarDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> __get__avatarDataModel() const;

/// @brief Method Init addr 0xe13518 size 0x94 virtual false final false
inline void Init() ;

/// @brief Method OnDestroy addr 0xe135d4 size 0x98 virtual false final false
inline void OnDestroy() ;

/// @brief Method SetCreated addr 0xe1366c size 0x48 virtual true final false
inline void SetCreated(bool  isCreated) ;

/// @brief Method Activate addr 0xe136b4 size 0x48 virtual true final false
inline void Activate() ;

/// @brief Method Deactivate addr 0xe136fc size 0x24 virtual true final false
inline void Deactivate() ;

/// @brief Method HandleAvatarDataModelDidChangeAvatarData addr 0xe13720 size 0x4 virtual false final false
inline void HandleAvatarDataModelDidChangeAvatarData(::BeatSaber::BeatAvatarSDK::AvatarData*  data) ;

/// @brief Method UpdateAvatarVisuals addr 0xe135ac size 0x28 virtual false final false
inline void UpdateAvatarVisuals() ;

static inline ::BeatSaber::AvatarCore::BeatAvatarSelectionView* New_ctor() ;

/// @brief Method .ctor addr 0xe13724 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSelectionView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatAvatarSelectionView(BeatAvatarSelectionView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSelectionView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatAvatarSelectionView(BeatAvatarSelectionView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatAvatarSelectionView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::BeatAvatarSelectionView, 0xa8>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::BeatAvatarSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::BeatAvatarSelectionView*, "BeatSaber.AvatarCore", "BeatAvatarSelectionView");
