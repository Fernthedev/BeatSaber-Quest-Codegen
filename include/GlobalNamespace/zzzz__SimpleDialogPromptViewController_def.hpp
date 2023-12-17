#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleDialogPromptViewController)
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class __SimpleDialogPromptViewController____c__DisplayClass5_0;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class __SimpleDialogPromptViewController____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleDialogPromptViewController);
MARK_REF_PTR_T(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5762))
// CS Name: ::SimpleDialogPromptViewController::<>c__DisplayClass5_0*
class CORDL_TYPE __SimpleDialogPromptViewController____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field buttonNum offset 0x10
 __declspec(property(get=__get_buttonNum, put=__set_buttonNum)) int32_t  buttonNum;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::SimpleDialogPromptViewController*  __4__this;

constexpr void __set_buttonNum(int32_t  value) ;

constexpr int32_t& __get_buttonNum() ;

constexpr int32_t const& __get_buttonNum() const;

constexpr void __set___4__this(::GlobalNamespace::SimpleDialogPromptViewController*  value) ;

constexpr ::GlobalNamespace::SimpleDialogPromptViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> __get___4__this() const;

static inline ::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x22db9fc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__0 addr 0x22dbc00 size 0x38 virtual false final false
inline void _DidActivate_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SimpleDialogPromptViewController____c__DisplayClass5_0(__SimpleDialogPromptViewController____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SimpleDialogPromptViewController____c__DisplayClass5_0(__SimpleDialogPromptViewController____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SimpleDialogPromptViewController____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SimpleDialogPromptViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5763))
// CS Name: ::SimpleDialogPromptViewController*
class CORDL_TYPE SimpleDialogPromptViewController : public ::HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass5_0 = ::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _titleText offset 0x70
 __declspec(property(get=__get__titleText, put=__set__titleText)) ::TMPro::TextMeshProUGUI*  _titleText;

/// @brief Field _messageText offset 0x78
 __declspec(property(get=__get__messageText, put=__set__messageText)) ::TMPro::TextMeshProUGUI*  _messageText;

/// @brief Field _buttons offset 0x80
 __declspec(property(get=__get__buttons, put=__set__buttons)) ::ArrayW<::UnityEngine::UI::Button*,::Array<::UnityEngine::UI::Button*>*>  _buttons;

/// @brief Field _buttonTexts offset 0x88
 __declspec(property(get=__get__buttonTexts, put=__set__buttonTexts)) ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  _buttonTexts;

/// @brief Field _didFinishAction offset 0x90
 __declspec(property(get=__get__didFinishAction, put=__set__didFinishAction)) ::System::Action_1<int32_t>*  _didFinishAction;

constexpr void __set__titleText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__titleText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__titleText() const;

constexpr void __set__messageText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__messageText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__messageText() const;

constexpr void __set__buttons(::ArrayW<::UnityEngine::UI::Button*,::Array<::UnityEngine::UI::Button*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UI::Button*,::Array<::UnityEngine::UI::Button*>*>& __get__buttons() ;

constexpr ::ArrayW<::UnityEngine::UI::Button*,::Array<::UnityEngine::UI::Button*>*> const& __get__buttons() const;

constexpr void __set__buttonTexts(::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  value) ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>& __get__buttonTexts() ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*> const& __get__buttonTexts() const;

constexpr void __set__didFinishAction(::System::Action_1<int32_t>*  value) ;

constexpr ::System::Action_1<int32_t>* __get__didFinishAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> __get__didFinishAction() const;

/// @brief Method DidActivate addr 0x22db8d0 size 0x12c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22dba04 size 0xc virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method Init addr 0x22dba10 size 0x10 virtual false final false
inline void Init(::StringW  title, ::StringW  message, ::StringW  buttonText, ::System::Action_1<int32_t>*  didFinishAction) ;

/// @brief Method Init addr 0x22dbbf4 size 0xc virtual false final false
inline void Init(::StringW  title, ::StringW  message, ::StringW  firstButtonText, ::StringW  secondButtonText, ::System::Action_1<int32_t>*  didFinishAction) ;

/// @brief Method Init addr 0x22dba20 size 0x1d4 virtual false final false
inline void Init(::StringW  title, ::StringW  message, ::StringW  firstButtonText, ::StringW  secondButtonText, ::StringW  thirdButtonText, ::System::Action_1<int32_t>*  didFinishAction) ;

static inline ::GlobalNamespace::SimpleDialogPromptViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d7ef8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleDialogPromptViewController(SimpleDialogPromptViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleDialogPromptViewController(SimpleDialogPromptViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleDialogPromptViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleDialogPromptViewController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleDialogPromptViewController*, "", "SimpleDialogPromptViewController");
NEED_NO_BOX(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SimpleDialogPromptViewController____c__DisplayClass5_0*, "", "SimpleDialogPromptViewController/<>c__DisplayClass5_0");
