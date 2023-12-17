#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnterPlayerGuestNameViewController)
namespace HMUI {
class InputFieldView;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_1;
}
namespace GlobalNamespace {
class StringSignal;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class GuestNameButtonsListItemsList;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController__FinishDelegate;
}
namespace HMUI {
class UIKeyboard;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace GlobalNamespace {
class GuestNameButtonsListItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnterPlayerGuestNameViewController;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController__FinishDelegate;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __EnterPlayerGuestNameViewController____c__DisplayClass10_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnterPlayerGuestNameViewController);
MARK_REF_PTR_T(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1);
// Type: ::FinishDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5621))
// CS Name: ::EnterPlayerGuestNameViewController::FinishDelegate*
class CORDL_TYPE __EnterPlayerGuestNameViewController__FinishDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x22af904 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x22afa34 size 0x14 virtual true final false
inline void Invoke(::GlobalNamespace::EnterPlayerGuestNameViewController*  viewController, ::StringW  playerName) ;

/// @brief Method BeginInvoke addr 0x22afa48 size 0x28 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::EnterPlayerGuestNameViewController*  viewController, ::StringW  playerName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x22afa70 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnterPlayerGuestNameViewController__FinishDelegate(__EnterPlayerGuestNameViewController__FinishDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnterPlayerGuestNameViewController__FinishDelegate(__EnterPlayerGuestNameViewController__FinishDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnterPlayerGuestNameViewController__FinishDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5622))
// CS Name: ::EnterPlayerGuestNameViewController::<>c__DisplayClass10_0*
class CORDL_TYPE __EnterPlayerGuestNameViewController____c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::EnterPlayerGuestNameViewController*  __4__this;

/// @brief Field guestPlayerNames offset 0x18
 __declspec(property(get=__get_guestPlayerNames, put=__set_guestPlayerNames)) ::System::Collections::Generic::List_1<::StringW>*  guestPlayerNames;

constexpr void __set___4__this(::GlobalNamespace::EnterPlayerGuestNameViewController*  value) ;

constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnterPlayerGuestNameViewController*> __get___4__this() const;

constexpr void __set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_guestPlayerNames() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_guestPlayerNames() const;

static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* New_ctor() ;

/// @brief Method .ctor addr 0x22af764 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__0 addr 0x22afa7c size 0x118 virtual false final false
inline void _DidActivate_b__0(int32_t  idx, ::GlobalNamespace::GuestNameButtonsListItem*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnterPlayerGuestNameViewController____c__DisplayClass10_0(__EnterPlayerGuestNameViewController____c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnterPlayerGuestNameViewController____c__DisplayClass10_0(__EnterPlayerGuestNameViewController____c__DisplayClass10_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnterPlayerGuestNameViewController____c__DisplayClass10_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5623))
// CS Name: ::EnterPlayerGuestNameViewController::<>c__DisplayClass10_1*
class CORDL_TYPE __EnterPlayerGuestNameViewController____c__DisplayClass10_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field guestPlayerName offset 0x10
 __declspec(property(get=__get_guestPlayerName, put=__set_guestPlayerName)) ::StringW  guestPlayerName;

/// @brief Field CS$<>8__locals1 offset 0x18
 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1)) ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*  CS$__8__locals1;

constexpr void __set_guestPlayerName(::StringW  value) ;

constexpr ::StringW& __get_guestPlayerName() ;

constexpr ::StringW const& __get_guestPlayerName() const;

constexpr void __set_CS$__8__locals1(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*  value) ;

constexpr ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0* __get_CS$__8__locals1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*> __get_CS$__8__locals1() const;

static inline ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1* New_ctor() ;

/// @brief Method .ctor addr 0x22afb94 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__1 addr 0x22afb9c size 0x34 virtual false final false
inline void _DidActivate_b__1() ;

// Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnterPlayerGuestNameViewController____c__DisplayClass10_1(__EnterPlayerGuestNameViewController____c__DisplayClass10_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnterPlayerGuestNameViewController____c__DisplayClass10_1(__EnterPlayerGuestNameViewController____c__DisplayClass10_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnterPlayerGuestNameViewController____c__DisplayClass10_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EnterPlayerGuestNameViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5624))
// CS Name: ::EnterPlayerGuestNameViewController*
class CORDL_TYPE EnterPlayerGuestNameViewController : public ::HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass10_1 = ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1;

using __c__DisplayClass10_0 = ::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0;

using FinishDelegate = ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::HMUI::ViewController)]{};

/// @brief Field kMaxPlayerNameCompoundLength offset 0x0
static constexpr int32_t  kMaxPlayerNameCompoundLength{static_cast<int32_t>(0x28)};

/// @brief Field kMaxShowPlayer offset 0x0
static constexpr int32_t  kMaxShowPlayer{static_cast<int32_t>(0x5)};

/// @brief Field _playerNameWasEnteredSignal offset 0x70
 __declspec(property(get=__get__playerNameWasEnteredSignal, put=__set__playerNameWasEnteredSignal)) ::GlobalNamespace::StringSignal*  _playerNameWasEnteredSignal;

/// @brief Field _uiKeyboard offset 0x78
 __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard)) ::HMUI::UIKeyboard*  _uiKeyboard;

/// @brief Field _nameInputFieldView offset 0x80
 __declspec(property(get=__get__nameInputFieldView, put=__set__nameInputFieldView)) ::HMUI::InputFieldView*  _nameInputFieldView;

/// @brief Field _guestNameButtonsListItemsList offset 0x88
 __declspec(property(get=__get__guestNameButtonsListItemsList, put=__set__guestNameButtonsListItemsList)) ::GlobalNamespace::GuestNameButtonsListItemsList*  _guestNameButtonsListItemsList;

/// @brief Field _playerDataModel offset 0x90
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _didFinishCallback offset 0x98
 __declspec(property(get=__get__didFinishCallback, put=__set__didFinishCallback)) ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*  _didFinishCallback;

constexpr void __set__playerNameWasEnteredSignal(::GlobalNamespace::StringSignal*  value) ;

constexpr ::GlobalNamespace::StringSignal* __get__playerNameWasEnteredSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSignal*> __get__playerNameWasEnteredSignal() const;

constexpr void __set__uiKeyboard(::HMUI::UIKeyboard*  value) ;

constexpr ::HMUI::UIKeyboard* __get__uiKeyboard() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> __get__uiKeyboard() const;

constexpr void __set__nameInputFieldView(::HMUI::InputFieldView*  value) ;

constexpr ::HMUI::InputFieldView* __get__nameInputFieldView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> __get__nameInputFieldView() const;

constexpr void __set__guestNameButtonsListItemsList(::GlobalNamespace::GuestNameButtonsListItemsList*  value) ;

constexpr ::GlobalNamespace::GuestNameButtonsListItemsList* __get__guestNameButtonsListItemsList() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GuestNameButtonsListItemsList*> __get__guestNameButtonsListItemsList() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__didFinishCallback(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*  value) ;

constexpr ::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate* __get__didFinishCallback() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*> __get__didFinishCallback() const;

/// @brief Method Init addr 0x22af528 size 0x8 virtual false final false
inline void Init(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*  didFinishCallback) ;

/// @brief Method DidActivate addr 0x22af530 size 0x234 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22af76c size 0xb0 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method OkButtonPressed addr 0x22af81c size 0xe0 virtual false final false
inline void OkButtonPressed() ;

static inline ::GlobalNamespace::EnterPlayerGuestNameViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22af8fc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnterPlayerGuestNameViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnterPlayerGuestNameViewController, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnterPlayerGuestNameViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterPlayerGuestNameViewController*, "", "EnterPlayerGuestNameViewController");
NEED_NO_BOX(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnterPlayerGuestNameViewController__FinishDelegate*, "", "EnterPlayerGuestNameViewController/FinishDelegate");
NEED_NO_BOX(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_0*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnterPlayerGuestNameViewController____c__DisplayClass10_1*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_1");
