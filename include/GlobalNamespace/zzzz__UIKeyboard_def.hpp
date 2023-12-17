#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIKeyboard)
namespace GlobalNamespace {
class TextMeshProButton;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class __UIKeyboard____c__DisplayClass21_0;
}
// Forward declare root types
namespace GlobalNamespace {
class UIKeyboard;
}
namespace GlobalNamespace {
class __UIKeyboard____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass21_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5465))
// CS Name: ::UIKeyboard::<>c__DisplayClass21_0*
class CORDL_TYPE __UIKeyboard____c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field key offset 0x10
 __declspec(property(get=__get_key, put=__set_key)) ::StringW  key;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::UIKeyboard*  __4__this;

constexpr void __set_key(::StringW  value) ;

constexpr ::StringW& __get_key() ;

constexpr ::StringW const& __get_key() const;

constexpr void __set___4__this(::GlobalNamespace::UIKeyboard*  value) ;

constexpr ::GlobalNamespace::UIKeyboard* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UIKeyboard*> __get___4__this() const;

static inline ::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0* New_ctor() ;

/// @brief Method .ctor addr 0x228148c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Awake>b__4 addr 0x2281520 size 0x50 virtual false final false
inline void _Awake_b__4() ;

// Ctor Parameters [CppParam { name: "", ty: "__UIKeyboard____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UIKeyboard____c__DisplayClass21_0(__UIKeyboard____c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UIKeyboard____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UIKeyboard____c__DisplayClass21_0(__UIKeyboard____c__DisplayClass21_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UIKeyboard____c__DisplayClass21_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::UIKeyboard
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5466))
// CS Name: ::UIKeyboard*
class CORDL_TYPE UIKeyboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass21_0 = ::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _keyButtonPrefab offset 0x18
 __declspec(property(get=__get__keyButtonPrefab, put=__set__keyButtonPrefab)) ::GlobalNamespace::TextMeshProButton*  _keyButtonPrefab;

/// @brief Field textKeyWasPressedEvent offset 0x20
 __declspec(property(get=__get_textKeyWasPressedEvent, put=__set_textKeyWasPressedEvent)) ::System::Action_1<char16_t>*  textKeyWasPressedEvent;

/// @brief Field deleteButtonWasPressedEvent offset 0x28
 __declspec(property(get=__get_deleteButtonWasPressedEvent, put=__set_deleteButtonWasPressedEvent)) ::System::Action*  deleteButtonWasPressedEvent;

/// @brief Field okButtonWasPressedEvent offset 0x30
 __declspec(property(get=__get_okButtonWasPressedEvent, put=__set_okButtonWasPressedEvent)) ::System::Action*  okButtonWasPressedEvent;

/// @brief Field cancelButtonWasPressedEvent offset 0x38
 __declspec(property(get=__get_cancelButtonWasPressedEvent, put=__set_cancelButtonWasPressedEvent)) ::System::Action*  cancelButtonWasPressedEvent;

/// @brief Field _okButton offset 0x40
 __declspec(property(get=__get__okButton, put=__set__okButton)) ::UnityEngine::UI::Button*  _okButton;

/// @brief Field _cancelButton offset 0x48
 __declspec(property(get=__get__cancelButton, put=__set__cancelButton)) ::UnityEngine::UI::Button*  _cancelButton;

/// @brief Field _okButtonInteractivity offset 0x50
 __declspec(property(get=__get__okButtonInteractivity, put=__set__okButtonInteractivity)) bool  _okButtonInteractivity;

/// @brief Field _hideCancelButton offset 0x51
 __declspec(property(get=__get__hideCancelButton, put=__set__hideCancelButton)) bool  _hideCancelButton;

 __declspec(property(put=set_enableOkButtonInteractivity)) bool  enableOkButtonInteractivity;

 __declspec(property(put=set_hideCancelButton)) bool  hideCancelButton;

constexpr void __set__keyButtonPrefab(::GlobalNamespace::TextMeshProButton*  value) ;

constexpr ::GlobalNamespace::TextMeshProButton* __get__keyButtonPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextMeshProButton*> __get__keyButtonPrefab() const;

constexpr void __set_textKeyWasPressedEvent(::System::Action_1<char16_t>*  value) ;

constexpr ::System::Action_1<char16_t>* __get_textKeyWasPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<char16_t>*> __get_textKeyWasPressedEvent() const;

constexpr void __set_deleteButtonWasPressedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_deleteButtonWasPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_deleteButtonWasPressedEvent() const;

constexpr void __set_okButtonWasPressedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_okButtonWasPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_okButtonWasPressedEvent() const;

constexpr void __set_cancelButtonWasPressedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_cancelButtonWasPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_cancelButtonWasPressedEvent() const;

constexpr void __set__okButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__okButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__okButton() const;

constexpr void __set__cancelButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__cancelButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__cancelButton() const;

constexpr void __set__okButtonInteractivity(bool  value) ;

constexpr bool& __get__okButtonInteractivity() ;

constexpr bool const& __get__okButtonInteractivity() const;

constexpr void __set__hideCancelButton(bool  value) ;

constexpr bool& __get__hideCancelButton() ;

constexpr bool const& __get__hideCancelButton() const;

/// @brief Method add_textKeyWasPressedEvent addr 0x22800e4 size 0xb0 virtual false final false
inline void add_textKeyWasPressedEvent(::System::Action_1<char16_t>*  value) ;

/// @brief Method remove_textKeyWasPressedEvent addr 0x2280194 size 0xb0 virtual false final false
inline void remove_textKeyWasPressedEvent(::System::Action_1<char16_t>*  value) ;

/// @brief Method add_deleteButtonWasPressedEvent addr 0x2280244 size 0x9c virtual false final false
inline void add_deleteButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method remove_deleteButtonWasPressedEvent addr 0x22802e0 size 0x9c virtual false final false
inline void remove_deleteButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method add_okButtonWasPressedEvent addr 0x228037c size 0x9c virtual false final false
inline void add_okButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method remove_okButtonWasPressedEvent addr 0x2280418 size 0x9c virtual false final false
inline void remove_okButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method add_cancelButtonWasPressedEvent addr 0x22804b4 size 0x9c virtual false final false
inline void add_cancelButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method remove_cancelButtonWasPressedEvent addr 0x2280550 size 0x9c virtual false final false
inline void remove_cancelButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method set_enableOkButtonInteractivity addr 0x22805ec size 0xa0 virtual false final false
inline void set_enableOkButtonInteractivity(bool  value) ;

/// @brief Method set_hideCancelButton addr 0x228068c size 0xb0 virtual false final false
inline void set_hideCancelButton(bool  value) ;

/// @brief Method Awake addr 0x228073c size 0xd50 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::UIKeyboard* New_ctor() ;

/// @brief Method .ctor addr 0x2281494 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Awake>b__21_0 addr 0x228149c size 0x1c virtual false final false
inline void _Awake_b__21_0() ;

/// @brief Method <Awake>b__21_1 addr 0x22814b8 size 0x24 virtual false final false
inline void _Awake_b__21_1() ;

/// @brief Method <Awake>b__21_2 addr 0x22814dc size 0x24 virtual false final false
inline void _Awake_b__21_2() ;

/// @brief Method <Awake>b__21_3 addr 0x2281500 size 0x20 virtual false final false
inline void _Awake_b__21_3() ;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIKeyboard(UIKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIKeyboard(UIKeyboard const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UIKeyboard()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIKeyboard, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboard*, "", "UIKeyboard");
NEED_NO_BOX(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0*, "", "UIKeyboard/<>c__DisplayClass21_0");
