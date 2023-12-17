#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelSelectionNavigationController)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelSelectionNavigationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelSelectionNavigationController);
// Type: ::LevelSelectionNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13588))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5687))
// CS Name: ::LevelSelectionNavigationController*
class CORDL_TYPE LevelSelectionNavigationController : public ::HMUI::NavigationController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf8 - sizeof(::HMUI::NavigationController)]{};

/// @brief Field _levelFilteringNavigationController offset 0x98
 __declspec(property(get=__get__levelFilteringNavigationController, put=__set__levelFilteringNavigationController)) ::GlobalNamespace::LevelFilteringNavigationController*  _levelFilteringNavigationController;

/// @brief Field _levelCollectionNavigationController offset 0xa0
 __declspec(property(get=__get__levelCollectionNavigationController, put=__set__levelCollectionNavigationController)) ::GlobalNamespace::LevelCollectionNavigationController*  _levelCollectionNavigationController;

/// @brief Field _playerDataModel offset 0xa8
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field didChangeLevelDetailContentEvent offset 0xb0
 __declspec(property(get=__get_didChangeLevelDetailContentEvent, put=__set_didChangeLevelDetailContentEvent)) ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  didChangeLevelDetailContentEvent;

/// @brief Field didSelectLevelPackEvent offset 0xb8
 __declspec(property(get=__get_didSelectLevelPackEvent, put=__set_didSelectLevelPackEvent)) ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevelPack*>*  didSelectLevelPackEvent;

/// @brief Field didPressActionButtonEvent offset 0xc0
 __declspec(property(get=__get_didPressActionButtonEvent, put=__set_didPressActionButtonEvent)) ::System::Action_1<::GlobalNamespace::LevelSelectionNavigationController*>*  didPressActionButtonEvent;

/// @brief Field didPressPracticeButtonEvent offset 0xc8
 __declspec(property(get=__get_didPressPracticeButtonEvent, put=__set_didPressPracticeButtonEvent)) ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevel*>*  didPressPracticeButtonEvent;

/// @brief Field didChangeDifficultyBeatmapEvent offset 0xd0
 __declspec(property(get=__get_didChangeDifficultyBeatmapEvent, put=__set_didChangeDifficultyBeatmapEvent)) ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IDifficultyBeatmap*>*  didChangeDifficultyBeatmapEvent;

/// @brief Field _hidePacksIfOneOrNone offset 0xd8
 __declspec(property(get=__get__hidePacksIfOneOrNone, put=__set__hidePacksIfOneOrNone)) bool  _hidePacksIfOneOrNone;

/// @brief Field _hidePracticeButton offset 0xd9
 __declspec(property(get=__get__hidePracticeButton, put=__set__hidePracticeButton)) bool  _hidePracticeButton;

/// @brief Field _actionButtonText offset 0xe0
 __declspec(property(get=__get__actionButtonText, put=__set__actionButtonText)) ::StringW  _actionButtonText;

/// @brief Field _allowedBeatmapDifficultyMask offset 0xe8
 __declspec(property(get=__get__allowedBeatmapDifficultyMask, put=__set__allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask  _allowedBeatmapDifficultyMask;

/// @brief Field _notAllowedCharacteristics offset 0xf0
 __declspec(property(get=__get__notAllowedCharacteristics, put=__set__notAllowedCharacteristics)) ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  _notAllowedCharacteristics;

 __declspec(property(get=get_selectedDifficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  selectedDifficultyBeatmap;

 __declspec(property(get=get_selectedBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  selectedBeatmapLevel;

 __declspec(property(get=get_selectedLevelCategory)) ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  selectedLevelCategory;

 __declspec(property(get=get_selectedBeatmapLevelPack)) ::GlobalNamespace::IBeatmapLevelPack*  selectedBeatmapLevelPack;

constexpr void __set__levelFilteringNavigationController(::GlobalNamespace::LevelFilteringNavigationController*  value) ;

constexpr ::GlobalNamespace::LevelFilteringNavigationController* __get__levelFilteringNavigationController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFilteringNavigationController*> __get__levelFilteringNavigationController() const;

constexpr void __set__levelCollectionNavigationController(::GlobalNamespace::LevelCollectionNavigationController*  value) ;

constexpr ::GlobalNamespace::LevelCollectionNavigationController* __get__levelCollectionNavigationController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCollectionNavigationController*> __get__levelCollectionNavigationController() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* __get_didChangeLevelDetailContentEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*> __get_didChangeLevelDetailContentEvent() const;

constexpr void __set_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevelPack*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevelPack*>* __get_didSelectLevelPackEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevelPack*>*> __get_didSelectLevelPackEvent() const;

constexpr void __set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelSelectionNavigationController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelSelectionNavigationController*>* __get_didPressActionButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelSelectionNavigationController*>*> __get_didPressActionButtonEvent() const;

constexpr void __set_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevel*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevel*>* __get_didPressPracticeButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevel*>*> __get_didPressPracticeButtonEvent() const;

constexpr void __set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IDifficultyBeatmap*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IDifficultyBeatmap*>* __get_didChangeDifficultyBeatmapEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IDifficultyBeatmap*>*> __get_didChangeDifficultyBeatmapEvent() const;

constexpr void __set__hidePacksIfOneOrNone(bool  value) ;

constexpr bool& __get__hidePacksIfOneOrNone() ;

constexpr bool const& __get__hidePacksIfOneOrNone() const;

constexpr void __set__hidePracticeButton(bool  value) ;

constexpr bool& __get__hidePracticeButton() ;

constexpr bool const& __get__hidePracticeButton() const;

constexpr void __set__actionButtonText(::StringW  value) ;

constexpr ::StringW& __get__actionButtonText() ;

constexpr ::StringW const& __get__actionButtonText() const;

constexpr void __set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask  value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get__allowedBeatmapDifficultyMask() ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get__allowedBeatmapDifficultyMask() const;

constexpr void __set__notAllowedCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>& __get__notAllowedCharacteristics() ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get__notAllowedCharacteristics() const;

/// @brief Method add_didChangeLevelDetailContentEvent addr 0x22c6d0c size 0xb0 virtual false final false
inline void add_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  value) ;

/// @brief Method remove_didChangeLevelDetailContentEvent addr 0x22c6dbc size 0xb0 virtual false final false
inline void remove_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  value) ;

/// @brief Method add_didSelectLevelPackEvent addr 0x22c6e6c size 0xb0 virtual false final false
inline void add_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevelPack*>*  value) ;

/// @brief Method remove_didSelectLevelPackEvent addr 0x22c6f1c size 0xb0 virtual false final false
inline void remove_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevelPack*>*  value) ;

/// @brief Method add_didPressActionButtonEvent addr 0x22c6fcc size 0xb0 virtual false final false
inline void add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelSelectionNavigationController*>*  value) ;

/// @brief Method remove_didPressActionButtonEvent addr 0x22c707c size 0xb0 virtual false final false
inline void remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelSelectionNavigationController*>*  value) ;

/// @brief Method add_didPressPracticeButtonEvent addr 0x22c712c size 0xb0 virtual false final false
inline void add_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevel*>*  value) ;

/// @brief Method remove_didPressPracticeButtonEvent addr 0x22c71dc size 0xb0 virtual false final false
inline void remove_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IBeatmapLevel*>*  value) ;

/// @brief Method add_didChangeDifficultyBeatmapEvent addr 0x22c728c size 0xb0 virtual false final false
inline void add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IDifficultyBeatmap*>*  value) ;

/// @brief Method remove_didChangeDifficultyBeatmapEvent addr 0x22c733c size 0xb0 virtual false final false
inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelSelectionNavigationController*,::GlobalNamespace::IDifficultyBeatmap*>*  value) ;

/// @brief Method get_selectedDifficultyBeatmap addr 0x22c73ec size 0x18 virtual false final false
inline ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap() ;

/// @brief Method get_selectedBeatmapLevel addr 0x22c7404 size 0x24 virtual false final false
inline ::GlobalNamespace::IPreviewBeatmapLevel* get_selectedBeatmapLevel() ;

/// @brief Method get_selectedLevelCategory addr 0x22c7428 size 0x20 virtual false final false
inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory() ;

/// @brief Method get_selectedBeatmapLevelPack addr 0x22c7448 size 0x18 virtual false final false
inline ::GlobalNamespace::IBeatmapLevelPack* get_selectedBeatmapLevelPack() ;

/// @brief Method Setup addr 0x22c7460 size 0x84 virtual false final false
inline void Setup(::GlobalNamespace::SongPackMask  songPackMask, ::GlobalNamespace::BeatmapDifficultyMask  allowedBeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  notAllowedCharacteristics, bool  hidePacksIfOneOrNone, bool  hidePracticeButton, ::StringW  actionButtonText, ::GlobalNamespace::IBeatmapLevelPack*  levelPackToBeSelectedAfterPresent, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  startLevelCategory, ::GlobalNamespace::IPreviewBeatmapLevel*  beatmapLevelToBeSelectedAfterPresent, bool  enableCustomLevels) ;

/// @brief Method DidActivate addr 0x22c74e4 size 0x4c0 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22c79a4 size 0x428 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent addr 0x22c7dcc size 0x20 virtual false final false
inline void HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelCollectionNavigationController*  viewController, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType  contentType) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidPressPracticeButton addr 0x22c7dec size 0x20 virtual false final false
inline void HandleLevelCollectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelCollectionNavigationController*  arg1, ::GlobalNamespace::IBeatmapLevel*  beatmapLevel) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidPressActionButton addr 0x22c7e0c size 0x20 virtual false final false
inline void HandleLevelCollectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelCollectionNavigationController*  viewController) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidSelectPack addr 0x22c7e2c size 0x20 virtual false final false
inline void HandleLevelCollectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelCollectionNavigationController*  viewController, ::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap addr 0x22c7e4c size 0x20 virtual false final false
inline void HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelCollectionNavigationController*  viewController, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidPressOpenPackButton addr 0x22c7e6c size 0x1c virtual false final false
inline void HandleLevelCollectionNavigationControllerDidPressOpenPackButton(::GlobalNamespace::LevelCollectionNavigationController*  viewController, ::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack) ;

/// @brief Method RefreshDetail addr 0x22c7e88 size 0x18 virtual false final false
inline void RefreshDetail() ;

/// @brief Method ClearSelected addr 0x22c7ea0 size 0x18 virtual false final false
inline void ClearSelected() ;

/// @brief Method HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections addr 0x22c7eb8 size 0x1c virtual false final false
inline void HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections() ;

/// @brief Method HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections addr 0x22c7ed4 size 0x1c virtual false final false
inline void HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections() ;

/// @brief Method LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection addr 0x22c7ef0 size 0xe4 virtual false final false
inline void LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::LevelFilteringNavigationController*  controller, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  annotatedBeatmapLevelCollection, ::UnityEngine::GameObject*  noDataInfoPrefab, bool  sortAlphabetically, ::GlobalNamespace::BeatmapCharacteristicSO*  preferredBeatmapCharacteristic) ;

/// @brief Method LevelFilteringNavigationControllerDidStartLoading addr 0x22c7fd4 size 0x18 virtual false final false
inline void LevelFilteringNavigationControllerDidStartLoading(::GlobalNamespace::LevelFilteringNavigationController*  controller) ;

/// @brief Method LevelFilteringNavigationControllerDidPressAllSongs addr 0x22c7fec size 0x18 virtual false final false
inline void LevelFilteringNavigationControllerDidPressAllSongs(::GlobalNamespace::LevelFilteringNavigationController*  controller) ;

static inline ::GlobalNamespace::LevelSelectionNavigationController* New_ctor() ;

/// @brief Method .ctor addr 0x22c8004 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelSelectionNavigationController(LevelSelectionNavigationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelSelectionNavigationController(LevelSelectionNavigationController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelSelectionNavigationController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSelectionNavigationController, 0xf8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSelectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSelectionNavigationController*, "", "LevelSelectionNavigationController");
