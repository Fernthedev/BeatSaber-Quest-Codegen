#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerPlayerTableCell)
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class ButtonSpriteSwapToggle;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class __GameServerPlayerTableCell____c__DisplayClass29_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayerTableCell;
}
namespace GlobalNamespace {
class __GameServerPlayerTableCell____c__DisplayClass29_0;
}
namespace GlobalNamespace {
struct __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerPlayerTableCell);
MARK_REF_PTR_T(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0);
MARK_VAL_T(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35);
// Type: ::<>c__DisplayClass29_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5423))
// CS Name: ::GameServerPlayerTableCell::<>c__DisplayClass29_0*
class CORDL_TYPE __GameServerPlayerTableCell____c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field modifiersList offset 0x10
 __declspec(property(get=__get_modifiersList, put=__set_modifiersList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*  modifiersList;

constexpr void __set_modifiersList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* __get_modifiersList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> __get_modifiersList() const;

static inline ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0* New_ctor() ;

/// @brief Method .ctor addr 0x227a260 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SetData>b__0 addr 0x227a514 size 0x78 virtual false final false
inline void _SetData_b__0(int32_t  id, ::GlobalNamespace::GameplayModifierInfoListItem*  listItem) ;

// Ctor Parameters [CppParam { name: "", ty: "__GameServerPlayerTableCell____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameServerPlayerTableCell____c__DisplayClass29_0(__GameServerPlayerTableCell____c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameServerPlayerTableCell____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameServerPlayerTableCell____c__DisplayClass29_0(__GameServerPlayerTableCell____c__DisplayClass29_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GameServerPlayerTableCell____c__DisplayClass29_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<SetBeatmapUseButtonEnabledAsync>d__35
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5424))
// CS Name: ::GameServerPlayerTableCell::<SetBeatmapUseButtonEnabledAsync>d__35
struct CORDL_TYPE __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::GameServerPlayerTableCell*  __4__this;

/// @brief Field getLevelEntitlementTask offset 0x30
 __declspec(property(get=__get_getLevelEntitlementTask, put=__set_getLevelEntitlementTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*  getLevelEntitlementTask;

/// @brief Field <cancellationToken>5__2 offset 0x38
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::GameServerPlayerTableCell*  value) ;

constexpr ::GlobalNamespace::GameServerPlayerTableCell* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerPlayerTableCell*> __get___4__this() const;

constexpr void __set_getLevelEntitlementTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* __get_getLevelEntitlementTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*> __get_getLevelEntitlementTask() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x227a58c size 0x438 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x227a9c4 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameServerPlayerTableCell*", modifiers: "", def_value: None }, CppParam { name: "getLevelEntitlementTask", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::GameServerPlayerTableCell*  __4__this, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*  getLevelEntitlementTask, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameServerPlayerTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13502))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5425))
// CS Name: ::GameServerPlayerTableCell*
class CORDL_TYPE GameServerPlayerTableCell : public ::GlobalNamespace::TableCellWithSeparator {
public:
// Declarations
using _SetBeatmapUseButtonEnabledAsync_d__35 = ::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;

using __c__DisplayClass29_0 = ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::GlobalNamespace::TableCellWithSeparator)]{};

/// @brief Field _playerNameText offset 0x60
 __declspec(property(get=__get__playerNameText, put=__set__playerNameText)) ::HMUI::CurvedTextMeshPro*  _playerNameText;

/// @brief Field _localPlayerBackgroundImage offset 0x68
 __declspec(property(get=__get__localPlayerBackgroundImage, put=__set__localPlayerBackgroundImage)) ::UnityEngine::UI::Image*  _localPlayerBackgroundImage;

/// @brief Field _suggestedLevelText offset 0x70
 __declspec(property(get=__get__suggestedLevelText, put=__set__suggestedLevelText)) ::HMUI::CurvedTextMeshPro*  _suggestedLevelText;

/// @brief Field _suggestedCharacteristicIcon offset 0x78
 __declspec(property(get=__get__suggestedCharacteristicIcon, put=__set__suggestedCharacteristicIcon)) ::HMUI::ImageView*  _suggestedCharacteristicIcon;

/// @brief Field _suggestedDifficultyText offset 0x80
 __declspec(property(get=__get__suggestedDifficultyText, put=__set__suggestedDifficultyText)) ::TMPro::TextMeshProUGUI*  _suggestedDifficultyText;

/// @brief Field _emptySuggestedLevelText offset 0x88
 __declspec(property(get=__get__emptySuggestedLevelText, put=__set__emptySuggestedLevelText)) ::HMUI::CurvedTextMeshPro*  _emptySuggestedLevelText;

/// @brief Field _suggestedModifiersList offset 0x90
 __declspec(property(get=__get__suggestedModifiersList, put=__set__suggestedModifiersList)) ::GlobalNamespace::GameplayModifierInfoListItemsList*  _suggestedModifiersList;

/// @brief Field _emptySuggestedModifiersText offset 0x98
 __declspec(property(get=__get__emptySuggestedModifiersText, put=__set__emptySuggestedModifiersText)) ::HMUI::CurvedTextMeshPro*  _emptySuggestedModifiersText;

/// @brief Field _mutePlayerButton offset 0xa0
 __declspec(property(get=__get__mutePlayerButton, put=__set__mutePlayerButton)) ::UnityEngine::UI::Button*  _mutePlayerButton;

/// @brief Field _kickPlayerButton offset 0xa8
 __declspec(property(get=__get__kickPlayerButton, put=__set__kickPlayerButton)) ::UnityEngine::UI::Button*  _kickPlayerButton;

/// @brief Field _useBeatmapButton offset 0xb0
 __declspec(property(get=__get__useBeatmapButton, put=__set__useBeatmapButton)) ::UnityEngine::UI::Button*  _useBeatmapButton;

/// @brief Field _useModifiersButton offset 0xb8
 __declspec(property(get=__get__useModifiersButton, put=__set__useModifiersButton)) ::UnityEngine::UI::Button*  _useModifiersButton;

/// @brief Field _useBeatmapButtonHoverHint offset 0xc0
 __declspec(property(get=__get__useBeatmapButtonHoverHint, put=__set__useBeatmapButtonHoverHint)) ::HMUI::HoverHint*  _useBeatmapButtonHoverHint;

/// @brief Field _muteToggle offset 0xc8
 __declspec(property(get=__get__muteToggle, put=__set__muteToggle)) ::HMUI::ButtonSpriteSwapToggle*  _muteToggle;

/// @brief Field _statusImageView offset 0xd0
 __declspec(property(get=__get__statusImageView, put=__set__statusImageView)) ::HMUI::ImageView*  _statusImageView;

/// @brief Field _readyIcon offset 0xd8
 __declspec(property(get=__get__readyIcon, put=__set__readyIcon)) ::UnityEngine::Sprite*  _readyIcon;

/// @brief Field _spectatingIcon offset 0xe0
 __declspec(property(get=__get__spectatingIcon, put=__set__spectatingIcon)) ::UnityEngine::Sprite*  _spectatingIcon;

/// @brief Field _hostIcon offset 0xe8
 __declspec(property(get=__get__hostIcon, put=__set__hostIcon)) ::UnityEngine::Sprite*  _hostIcon;

/// @brief Field _gameplayModifiers offset 0xf0
 __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiersModelSO*  _gameplayModifiers;

/// @brief Field kickPlayerEvent offset 0xf8
 __declspec(property(get=__get_kickPlayerEvent, put=__set_kickPlayerEvent)) ::System::Action_1<int32_t>*  kickPlayerEvent;

/// @brief Field useBeatmapEvent offset 0x100
 __declspec(property(get=__get_useBeatmapEvent, put=__set_useBeatmapEvent)) ::System::Action_1<int32_t>*  useBeatmapEvent;

/// @brief Field useModifiersEvent offset 0x108
 __declspec(property(get=__get_useModifiersEvent, put=__set_useModifiersEvent)) ::System::Action_1<int32_t>*  useModifiersEvent;

/// @brief Field _buttonBinder offset 0x110
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

/// @brief Field _getLevelEntitlementCancellationTokenSource offset 0x118
 __declspec(property(get=__get__getLevelEntitlementCancellationTokenSource, put=__set__getLevelEntitlementCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _getLevelEntitlementCancellationTokenSource;

constexpr void __set__playerNameText(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__playerNameText() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__playerNameText() const;

constexpr void __set__localPlayerBackgroundImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__localPlayerBackgroundImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__localPlayerBackgroundImage() const;

constexpr void __set__suggestedLevelText(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__suggestedLevelText() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__suggestedLevelText() const;

constexpr void __set__suggestedCharacteristicIcon(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__suggestedCharacteristicIcon() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__suggestedCharacteristicIcon() const;

constexpr void __set__suggestedDifficultyText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__suggestedDifficultyText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__suggestedDifficultyText() const;

constexpr void __set__emptySuggestedLevelText(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__emptySuggestedLevelText() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__emptySuggestedLevelText() const;

constexpr void __set__suggestedModifiersList(::GlobalNamespace::GameplayModifierInfoListItemsList*  value) ;

constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList* __get__suggestedModifiersList() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> __get__suggestedModifiersList() const;

constexpr void __set__emptySuggestedModifiersText(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__emptySuggestedModifiersText() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__emptySuggestedModifiersText() const;

constexpr void __set__mutePlayerButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__mutePlayerButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__mutePlayerButton() const;

constexpr void __set__kickPlayerButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__kickPlayerButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__kickPlayerButton() const;

constexpr void __set__useBeatmapButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__useBeatmapButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__useBeatmapButton() const;

constexpr void __set__useModifiersButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__useModifiersButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__useModifiersButton() const;

constexpr void __set__useBeatmapButtonHoverHint(::HMUI::HoverHint*  value) ;

constexpr ::HMUI::HoverHint* __get__useBeatmapButtonHoverHint() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> __get__useBeatmapButtonHoverHint() const;

constexpr void __set__muteToggle(::HMUI::ButtonSpriteSwapToggle*  value) ;

constexpr ::HMUI::ButtonSpriteSwapToggle* __get__muteToggle() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonSpriteSwapToggle*> __get__muteToggle() const;

constexpr void __set__statusImageView(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__statusImageView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__statusImageView() const;

constexpr void __set__readyIcon(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__readyIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__readyIcon() const;

constexpr void __set__spectatingIcon(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__spectatingIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__spectatingIcon() const;

constexpr void __set__hostIcon(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__hostIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__hostIcon() const;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiersModelSO*  value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO* __get__gameplayModifiers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> __get__gameplayModifiers() const;

constexpr void __set_kickPlayerEvent(::System::Action_1<int32_t>*  value) ;

constexpr ::System::Action_1<int32_t>* __get_kickPlayerEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> __get_kickPlayerEvent() const;

constexpr void __set_useBeatmapEvent(::System::Action_1<int32_t>*  value) ;

constexpr ::System::Action_1<int32_t>* __get_useBeatmapEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> __get_useBeatmapEvent() const;

constexpr void __set_useModifiersEvent(::System::Action_1<int32_t>*  value) ;

constexpr ::System::Action_1<int32_t>* __get_useModifiersEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> __get_useModifiersEvent() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

constexpr void __set__getLevelEntitlementCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__getLevelEntitlementCancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__getLevelEntitlementCancellationTokenSource() const;

/// @brief Method add_kickPlayerEvent addr 0x227930c size 0xb0 virtual false final false
inline void add_kickPlayerEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_kickPlayerEvent addr 0x22793bc size 0xb0 virtual false final false
inline void remove_kickPlayerEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_useBeatmapEvent addr 0x227946c size 0xb4 virtual false final false
inline void add_useBeatmapEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_useBeatmapEvent addr 0x2279520 size 0xb4 virtual false final false
inline void remove_useBeatmapEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_useModifiersEvent addr 0x22795d4 size 0xb4 virtual false final false
inline void add_useModifiersEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_useModifiersEvent addr 0x2279688 size 0xb4 virtual false final false
inline void remove_useModifiersEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method SetData addr 0x227973c size 0xb24 virtual false final false
inline void SetData(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::GlobalNamespace::ILobbyPlayerData*  playerData, bool  hasKickPermissions, bool  allowSelection, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*  getLevelEntitlementTask) ;

/// @brief Method Awake addr 0x227a308 size 0x144 virtual false final false
inline void Awake() ;

/// @brief Method HandleKickPlayerButtonPressed addr 0x227a44c size 0x20 virtual false final false
inline void HandleKickPlayerButtonPressed() ;

/// @brief Method HandleUseBeatmapButtonPressed addr 0x227a46c size 0x20 virtual false final false
inline void HandleUseBeatmapButtonPressed() ;

/// @brief Method HandleUseModifiersButtonPressed addr 0x227a48c size 0x20 virtual false final false
inline void HandleUseModifiersButtonPressed() ;

/// @brief Method SetBeatmapUseButtonEnabledAsync addr 0x227a268 size 0xa0 virtual false final false
inline void SetBeatmapUseButtonEnabledAsync(::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*  getLevelEntitlementTask) ;

static inline ::GlobalNamespace::GameServerPlayerTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x227a4ac size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerPlayerTableCell(GameServerPlayerTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerPlayerTableCell(GameServerPlayerTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameServerPlayerTableCell()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerPlayerTableCell, 0x120>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayerTableCell*, "", "GameServerPlayerTableCell");
NEED_NO_BOX(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0*, "", "GameServerPlayerTableCell/<>c__DisplayClass29_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, "", "GameServerPlayerTableCell/<SetBeatmapUseButtonEnabledAsync>d__35");
