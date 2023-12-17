#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelListTableCell)
namespace UnityEngine {
class GameObject;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __LevelListTableCell___SetDataFromLevelAsync_d__19;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct __LevelListTableCell___RefreshAvailabilityAsync_d__24;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelListTableCell;
}
namespace GlobalNamespace {
struct __LevelListTableCell___RefreshAvailabilityAsync_d__24;
}
namespace GlobalNamespace {
struct __LevelListTableCell___SetDataFromLevelAsync_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelListTableCell);
MARK_VAL_T(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24);
MARK_VAL_T(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19);
// Type: ::<SetDataFromLevelAsync>d__19
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5428))
// CS Name: ::LevelListTableCell::<SetDataFromLevelAsync>d__19
struct CORDL_TYPE __LevelListTableCell___SetDataFromLevelAsync_d__19 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LevelListTableCell*  __4__this;

/// @brief Field level offset 0x30
 __declspec(property(get=__get_level, put=__set_level)) ::GlobalNamespace::IPreviewBeatmapLevel*  level;

/// @brief Field isFavorite offset 0x38
 __declspec(property(get=__get_isFavorite, put=__set_isFavorite)) bool  isFavorite;

/// @brief Field isPromoted offset 0x39
 __declspec(property(get=__get_isPromoted, put=__set_isPromoted)) bool  isPromoted;

/// @brief Field isUpdated offset 0x3a
 __declspec(property(get=__get_isUpdated, put=__set_isUpdated)) bool  isUpdated;

/// @brief Field <cancellationToken>5__2 offset 0x40
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::LevelListTableCell*  value) ;

constexpr ::GlobalNamespace::LevelListTableCell* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelListTableCell*> __get___4__this() const;

constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_level() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_level() const;

constexpr void __set_isFavorite(bool  value) ;

constexpr bool& __get_isFavorite() ;

constexpr bool const& __get_isFavorite() const;

constexpr void __set_isPromoted(bool  value) ;

constexpr bool& __get_isPromoted() ;

constexpr bool const& __get_isPromoted() const;

constexpr void __set_isUpdated(bool  value) ;

constexpr bool& __get_isUpdated() ;

constexpr bool const& __get_isUpdated() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x227aee4 size 0xa50 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x227b934 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell*", modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "isFavorite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPromoted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
constexpr __LevelListTableCell___SetDataFromLevelAsync_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::LevelListTableCell*  __4__this, ::GlobalNamespace::IPreviewBeatmapLevel*  level, bool  isFavorite, bool  isPromoted, bool  isUpdated, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelListTableCell___SetDataFromLevelAsync_d__19(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelListTableCell___SetDataFromLevelAsync_d__19()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__24
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5429))
// CS Name: ::LevelListTableCell::<RefreshAvailabilityAsync>d__24
struct CORDL_TYPE __LevelListTableCell___RefreshAvailabilityAsync_d__24 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LevelListTableCell*  __4__this;

/// @brief Field levelID offset 0x30
 __declspec(property(get=__get_levelID, put=__set_levelID)) ::StringW  levelID;

/// @brief Field contentModel offset 0x38
 __declspec(property(get=__get_contentModel, put=__set_contentModel)) ::GlobalNamespace::IAdditionalContentModel*  contentModel;

/// @brief Field <cancellationToken>5__2 offset 0x40
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::LevelListTableCell*  value) ;

constexpr ::GlobalNamespace::LevelListTableCell* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelListTableCell*> __get___4__this() const;

constexpr void __set_levelID(::StringW  value) ;

constexpr ::StringW& __get_levelID() ;

constexpr ::StringW const& __get_levelID() const;

constexpr void __set_contentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get_contentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get_contentModel() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x227b940 size 0x46c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x227bdac size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "contentModel", ty: "::GlobalNamespace::IAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __LevelListTableCell___RefreshAvailabilityAsync_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::LevelListTableCell*  __4__this, ::StringW  levelID, ::GlobalNamespace::IAdditionalContentModel*  contentModel, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelListTableCell___RefreshAvailabilityAsync_d__24(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelListTableCell___RefreshAvailabilityAsync_d__24()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelListTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5430))
// CS Name: ::LevelListTableCell*
class CORDL_TYPE LevelListTableCell : public ::HMUI::TableCell {
public:
// Declarations
using _RefreshAvailabilityAsync_d__24 = ::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24;

using _SetDataFromLevelAsync_d__19 = ::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x108};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x108 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _backgroundImage offset 0x58
 __declspec(property(get=__get__backgroundImage, put=__set__backgroundImage)) ::UnityEngine::UI::Image*  _backgroundImage;

/// @brief Field _canvasGroup offset 0x60
 __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup)) ::UnityEngine::CanvasGroup*  _canvasGroup;

/// @brief Field _coverImage offset 0x68
 __declspec(property(get=__get__coverImage, put=__set__coverImage)) ::UnityEngine::UI::Image*  _coverImage;

/// @brief Field _songNameText offset 0x70
 __declspec(property(get=__get__songNameText, put=__set__songNameText)) ::TMPro::TextMeshProUGUI*  _songNameText;

/// @brief Field _songAuthorText offset 0x78
 __declspec(property(get=__get__songAuthorText, put=__set__songAuthorText)) ::TMPro::TextMeshProUGUI*  _songAuthorText;

/// @brief Field _favoritesBadgeImage offset 0x80
 __declspec(property(get=__get__favoritesBadgeImage, put=__set__favoritesBadgeImage)) ::UnityEngine::UI::Image*  _favoritesBadgeImage;

/// @brief Field _songDurationText offset 0x88
 __declspec(property(get=__get__songDurationText, put=__set__songDurationText)) ::TMPro::TextMeshProUGUI*  _songDurationText;

/// @brief Field _songBpmText offset 0x90
 __declspec(property(get=__get__songBpmText, put=__set__songBpmText)) ::TMPro::TextMeshProUGUI*  _songBpmText;

/// @brief Field _highlightBackgroundColor offset 0x98
 __declspec(property(get=__get__highlightBackgroundColor, put=__set__highlightBackgroundColor)) ::UnityEngine::Color  _highlightBackgroundColor;

/// @brief Field _selectedBackgroundColor offset 0xa8
 __declspec(property(get=__get__selectedBackgroundColor, put=__set__selectedBackgroundColor)) ::UnityEngine::Color  _selectedBackgroundColor;

/// @brief Field _selectedAndHighlightedBackgroundColor offset 0xb8
 __declspec(property(get=__get__selectedAndHighlightedBackgroundColor, put=__set__selectedAndHighlightedBackgroundColor)) ::UnityEngine::Color  _selectedAndHighlightedBackgroundColor;

/// @brief Field _notOwnedAlpha offset 0xc8
 __declspec(property(get=__get__notOwnedAlpha, put=__set__notOwnedAlpha)) float_t  _notOwnedAlpha;

/// @brief Field _promoBadgeGo offset 0xd0
 __declspec(property(get=__get__promoBadgeGo, put=__set__promoBadgeGo)) ::UnityEngine::GameObject*  _promoBadgeGo;

/// @brief Field _updatedBadgeGo offset 0xd8
 __declspec(property(get=__get__updatedBadgeGo, put=__set__updatedBadgeGo)) ::UnityEngine::GameObject*  _updatedBadgeGo;

/// @brief Field _refreshingAvailabilityCancellationTokenSource offset 0xe0
 __declspec(property(get=__get__refreshingAvailabilityCancellationTokenSource, put=__set__refreshingAvailabilityCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _refreshingAvailabilityCancellationTokenSource;

/// @brief Field _settingDataCancellationTokenSource offset 0xe8
 __declspec(property(get=__get__settingDataCancellationTokenSource, put=__set__settingDataCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _settingDataCancellationTokenSource;

/// @brief Field _notOwned offset 0xf0
 __declspec(property(get=__get__notOwned, put=__set__notOwned)) bool  _notOwned;

/// @brief Field _refreshingAvailabilityLevelID offset 0xf8
 __declspec(property(get=__get__refreshingAvailabilityLevelID, put=__set__refreshingAvailabilityLevelID)) ::StringW  _refreshingAvailabilityLevelID;

/// @brief Field _settingDataFromLevelId offset 0x100
 __declspec(property(get=__get__settingDataFromLevelId, put=__set__settingDataFromLevelId)) ::StringW  _settingDataFromLevelId;

constexpr void __set__backgroundImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__backgroundImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__backgroundImage() const;

constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__canvasGroup() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__canvasGroup() const;

constexpr void __set__coverImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__coverImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__coverImage() const;

constexpr void __set__songNameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__songNameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__songNameText() const;

constexpr void __set__songAuthorText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__songAuthorText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__songAuthorText() const;

constexpr void __set__favoritesBadgeImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__favoritesBadgeImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__favoritesBadgeImage() const;

constexpr void __set__songDurationText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__songDurationText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__songDurationText() const;

constexpr void __set__songBpmText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__songBpmText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__songBpmText() const;

constexpr void __set__highlightBackgroundColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__highlightBackgroundColor() ;

constexpr ::UnityEngine::Color const& __get__highlightBackgroundColor() const;

constexpr void __set__selectedBackgroundColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__selectedBackgroundColor() ;

constexpr ::UnityEngine::Color const& __get__selectedBackgroundColor() const;

constexpr void __set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__selectedAndHighlightedBackgroundColor() ;

constexpr ::UnityEngine::Color const& __get__selectedAndHighlightedBackgroundColor() const;

constexpr void __set__notOwnedAlpha(float_t  value) ;

constexpr float_t& __get__notOwnedAlpha() ;

constexpr float_t const& __get__notOwnedAlpha() const;

constexpr void __set__promoBadgeGo(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__promoBadgeGo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__promoBadgeGo() const;

constexpr void __set__updatedBadgeGo(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__updatedBadgeGo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__updatedBadgeGo() const;

constexpr void __set__refreshingAvailabilityCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__refreshingAvailabilityCancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__refreshingAvailabilityCancellationTokenSource() const;

constexpr void __set__settingDataCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__settingDataCancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__settingDataCancellationTokenSource() const;

constexpr void __set__notOwned(bool  value) ;

constexpr bool& __get__notOwned() ;

constexpr bool const& __get__notOwned() const;

constexpr void __set__refreshingAvailabilityLevelID(::StringW  value) ;

constexpr ::StringW& __get__refreshingAvailabilityLevelID() ;

constexpr ::StringW const& __get__refreshingAvailabilityLevelID() const;

constexpr void __set__settingDataFromLevelId(::StringW  value) ;

constexpr ::StringW& __get__settingDataFromLevelId() ;

constexpr ::StringW const& __get__settingDataFromLevelId() const;

/// @brief Method SetDataFromLevelAsync addr 0x227ac64 size 0xc0 virtual false final false
inline void SetDataFromLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  level, bool  isFavorite, bool  isPromoted, bool  isUpdated) ;

/// @brief Method SelectionDidChange addr 0x227ad24 size 0x4 virtual true final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method HighlightDidChange addr 0x227adec size 0x4 virtual true final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method RefreshVisuals addr 0x227ad28 size 0xc4 virtual false final false
inline void RefreshVisuals() ;

/// @brief Method WasPreparedForReuse addr 0x227adf0 size 0x4 virtual true final false
inline void WasPreparedForReuse() ;

/// @brief Method RefreshAvailabilityAsync addr 0x227ae2c size 0xa8 virtual false final false
inline void RefreshAvailabilityAsync(::GlobalNamespace::IAdditionalContentModel*  contentModel, ::StringW  levelID) ;

/// @brief Method CancelAsyncOperations addr 0x227adf4 size 0x38 virtual false final false
inline void CancelAsyncOperations() ;

static inline ::GlobalNamespace::LevelListTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x227aed4 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelListTableCell(LevelListTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelListTableCell(LevelListTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelListTableCell()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelListTableCell, 0x108>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelListTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelListTableCell*, "", "LevelListTableCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24, "", "LevelListTableCell/<RefreshAvailabilityAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19, "", "LevelListTableCell/<SetDataFromLevelAsync>d__19");
