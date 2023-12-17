#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EulaViewController)
namespace GlobalNamespace {
class __EulaViewController___EnableButtonsCoroutine_d__21;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class __EulaViewController__InitData;
}
namespace GlobalNamespace {
struct __EulaViewController__ButtonType;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Coroutine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EulaViewController__ButtonType;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class __EulaViewController__InitData;
}
namespace GlobalNamespace {
class __EulaViewController___EnableButtonsCoroutine_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EulaViewController__ButtonType);
MARK_REF_PTR_T(::GlobalNamespace::EulaViewController);
MARK_REF_PTR_T(::GlobalNamespace::__EulaViewController__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21);
// Type: ::ButtonType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5627))
// CS Name: ::EulaViewController::ButtonType
struct CORDL_TYPE __EulaViewController__ButtonType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____EulaViewController__ButtonType_Unwrapped
enum struct ____EulaViewController__ButtonType_Unwrapped : int32_t {
__E_Agree = static_cast<int32_t>(0x0),
__E_DoNotAgree = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Agree value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__EulaViewController__ButtonType const Agree;

/// @brief Field DoNotAgree value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__EulaViewController__ButtonType const DoNotAgree;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____EulaViewController__ButtonType_Unwrapped () const noexcept {
return std::bit_cast<____EulaViewController__ButtonType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __EulaViewController__ButtonType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EulaViewController__ButtonType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EulaViewController__ButtonType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EulaViewController__ButtonType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5628))
// CS Name: ::EulaViewController::InitData*
class CORDL_TYPE __EulaViewController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field showDoNotAgreeButton offset 0x10
 __declspec(property(get=__get_showDoNotAgreeButton, put=__set_showDoNotAgreeButton)) bool  showDoNotAgreeButton;

constexpr void __set_showDoNotAgreeButton(bool  value) ;

constexpr bool& __get_showDoNotAgreeButton() ;

constexpr bool const& __get_showDoNotAgreeButton() const;

static inline ::GlobalNamespace::__EulaViewController__InitData* New_ctor(bool  showDoNotAgreeButton) ;

/// @brief Method .ctor addr 0x22b059c size 0x28 virtual false final false
inline void _ctor(bool  showDoNotAgreeButton) ;

// Ctor Parameters [CppParam { name: "", ty: "__EulaViewController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EulaViewController__InitData(__EulaViewController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EulaViewController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EulaViewController__InitData(__EulaViewController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EulaViewController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EulaViewController__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<EnableButtonsCoroutine>d__21
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5629))
// CS Name: ::EulaViewController::<EnableButtonsCoroutine>d__21*
class CORDL_TYPE __EulaViewController___EnableButtonsCoroutine_d__21 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::EulaViewController*  __4__this;

/// @brief Field delay offset 0x28
 __declspec(property(get=__get_delay, put=__set_delay)) float_t  delay;

/// @brief Field <startProgressBarWidth>5__2 offset 0x2c
 __declspec(property(get=__get__startProgressBarWidth_5__2, put=__set__startProgressBarWidth_5__2)) float_t  _startProgressBarWidth_5__2;

/// @brief Field <elapsedTime>5__3 offset 0x30
 __declspec(property(get=__get__elapsedTime_5__3, put=__set__elapsedTime_5__3)) float_t  _elapsedTime_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::EulaViewController*  value) ;

constexpr ::GlobalNamespace::EulaViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaViewController*> __get___4__this() const;

constexpr void __set_delay(float_t  value) ;

constexpr float_t& __get_delay() ;

constexpr float_t const& __get_delay() const;

constexpr void __set__startProgressBarWidth_5__2(float_t  value) ;

constexpr float_t& __get__startProgressBarWidth_5__2() ;

constexpr float_t const& __get__startProgressBarWidth_5__2() const;

constexpr void __set__elapsedTime_5__3(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__3() ;

constexpr float_t const& __get__elapsedTime_5__3() const;

static inline ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x22b0504 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x22b05c4 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x22b05c8 size 0x17c virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x22b0744 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x22b074c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x22b078c size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__EulaViewController___EnableButtonsCoroutine_d__21", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EulaViewController___EnableButtonsCoroutine_d__21(__EulaViewController___EnableButtonsCoroutine_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EulaViewController___EnableButtonsCoroutine_d__21", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EulaViewController___EnableButtonsCoroutine_d__21(__EulaViewController___EnableButtonsCoroutine_d__21 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EulaViewController___EnableButtonsCoroutine_d__21()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EulaViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5630))
// CS Name: ::EulaViewController*
class CORDL_TYPE EulaViewController : public ::HMUI::ViewController {
public:
// Declarations
using _EnableButtonsCoroutine_d__21 = ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21;

using InitData = ::GlobalNamespace::__EulaViewController__InitData;

using ButtonType = ::GlobalNamespace::__EulaViewController__ButtonType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd8 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _agreeButton offset 0x70
 __declspec(property(get=__get__agreeButton, put=__set__agreeButton)) ::UnityEngine::UI::Button*  _agreeButton;

/// @brief Field _doNotAgreeButton offset 0x78
 __declspec(property(get=__get__doNotAgreeButton, put=__set__doNotAgreeButton)) ::UnityEngine::UI::Button*  _doNotAgreeButton;

/// @brief Field _continueButton offset 0x80
 __declspec(property(get=__get__continueButton, put=__set__continueButton)) ::UnityEngine::UI::Button*  _continueButton;

/// @brief Field _disableButtonsProgress offset 0x88
 __declspec(property(get=__get__disableButtonsProgress, put=__set__disableButtonsProgress)) ::UnityEngine::UI::Image*  _disableButtonsProgress;

/// @brief Field _disabledButtonDelay offset 0x90
 __declspec(property(get=__get__disabledButtonDelay, put=__set__disabledButtonDelay)) float_t  _disabledButtonDelay;

/// @brief Field _textPageScrollView offset 0x98
 __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView)) ::HMUI::TextPageScrollView*  _textPageScrollView;

/// @brief Field _eulaLocalizedTextAsset offset 0xa0
 __declspec(property(get=__get__eulaLocalizedTextAsset, put=__set__eulaLocalizedTextAsset)) ::GlobalNamespace::LocalizedTextAsset*  _eulaLocalizedTextAsset;

/// @brief Field _updateNoticeLocalizationKey offset 0xa8
 __declspec(property(get=__get__updateNoticeLocalizationKey, put=__set__updateNoticeLocalizationKey)) ::StringW  _updateNoticeLocalizationKey;

/// @brief Field _initData offset 0xb0
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__EulaViewController__InitData*  _initData;

/// @brief Field _coroutineStarter offset 0xb8
 __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter*  _coroutineStarter;

/// @brief Field didFinishEvent offset 0xc0
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*  didFinishEvent;

/// @brief Field _showUpdate offset 0xc8
 __declspec(property(get=__get__showUpdate, put=__set__showUpdate)) bool  _showUpdate;

/// @brief Field _showOnlyContinueButton offset 0xc9
 __declspec(property(get=__get__showOnlyContinueButton, put=__set__showOnlyContinueButton)) bool  _showOnlyContinueButton;

/// @brief Field _buttonsCoroutine offset 0xd0
 __declspec(property(get=__get__buttonsCoroutine, put=__set__buttonsCoroutine)) ::UnityEngine::Coroutine*  _buttonsCoroutine;

constexpr void __set__agreeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__agreeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__agreeButton() const;

constexpr void __set__doNotAgreeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__doNotAgreeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__doNotAgreeButton() const;

constexpr void __set__continueButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__continueButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__continueButton() const;

constexpr void __set__disableButtonsProgress(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__disableButtonsProgress() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__disableButtonsProgress() const;

constexpr void __set__disabledButtonDelay(float_t  value) ;

constexpr float_t& __get__disabledButtonDelay() ;

constexpr float_t const& __get__disabledButtonDelay() const;

constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView*  value) ;

constexpr ::HMUI::TextPageScrollView* __get__textPageScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> __get__textPageScrollView() const;

constexpr void __set__eulaLocalizedTextAsset(::GlobalNamespace::LocalizedTextAsset*  value) ;

constexpr ::GlobalNamespace::LocalizedTextAsset* __get__eulaLocalizedTextAsset() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> __get__eulaLocalizedTextAsset() const;

constexpr void __set__updateNoticeLocalizationKey(::StringW  value) ;

constexpr ::StringW& __get__updateNoticeLocalizationKey() ;

constexpr ::StringW const& __get__updateNoticeLocalizationKey() const;

constexpr void __set__initData(::GlobalNamespace::__EulaViewController__InitData*  value) ;

constexpr ::GlobalNamespace::__EulaViewController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EulaViewController__InitData*> __get__initData() const;

constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter*  value) ;

constexpr ::GlobalNamespace::ICoroutineStarter* __get__coroutineStarter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> __get__coroutineStarter() const;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*> __get_didFinishEvent() const;

constexpr void __set__showUpdate(bool  value) ;

constexpr bool& __get__showUpdate() ;

constexpr bool const& __get__showUpdate() const;

constexpr void __set__showOnlyContinueButton(bool  value) ;

constexpr bool& __get__showOnlyContinueButton() ;

constexpr bool const& __get__showOnlyContinueButton() const;

constexpr void __set__buttonsCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr ::UnityEngine::Coroutine* __get__buttonsCoroutine() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> __get__buttonsCoroutine() const;

/// @brief Method add_didFinishEvent addr 0x22aff24 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22affd4 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*  value) ;

/// @brief Method DidActivate addr 0x22b0084 size 0x334 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22b0430 size 0xc0 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method Init addr 0x22b04f0 size 0x14 virtual false final false
inline void Init(bool  showUpdate, bool  showOnlyContinueButton) ;

/// @brief Method EnableButtonsCoroutine addr 0x22b03b8 size 0x78 virtual false final false
inline ::System::Collections::IEnumerator* EnableButtonsCoroutine(float_t  delay) ;

static inline ::GlobalNamespace::EulaViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22b052c size 0x10 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__18_0 addr 0x22b053c size 0x20 virtual false final false
inline void _DidActivate_b__18_0() ;

/// @brief Method <DidActivate>b__18_1 addr 0x22b055c size 0x20 virtual false final false
inline void _DidActivate_b__18_1() ;

/// @brief Method <DidActivate>b__18_2 addr 0x22b057c size 0x20 virtual false final false
inline void _DidActivate_b__18_2() ;

// Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EulaViewController(EulaViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EulaViewController(EulaViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EulaViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulaViewController, 0xd8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EulaViewController__ButtonType, "", "EulaViewController/ButtonType");
NEED_NO_BOX(::GlobalNamespace::EulaViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaViewController*, "", "EulaViewController");
NEED_NO_BOX(::GlobalNamespace::__EulaViewController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EulaViewController__InitData*, "", "EulaViewController/InitData");
NEED_NO_BOX(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*, "", "EulaViewController/<EnableButtonsCoroutine>d__21");
