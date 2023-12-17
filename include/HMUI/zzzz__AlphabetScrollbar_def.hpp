#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Interactable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollbar)
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class __AlphabetScrollInfo__Data;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
class __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace HMUI {
class AlphabetScrollbar;
}
namespace HMUI {
class __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::AlphabetScrollbar);
MARK_REF_PTR_T(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18);
// Type: ::<PointerMoveInsideCoroutine>d__18
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13506))
// CS Name: ::AlphabetScrollbar::<PointerMoveInsideCoroutine>d__18*
class CORDL_TYPE __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::AlphabetScrollbar*  __4__this;

/// @brief Field eventData offset 0x28
 __declspec(property(get=__get_eventData, put=__set_eventData)) ::UnityEngine::EventSystems::PointerEventData*  eventData;

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

constexpr void __set___4__this(::HMUI::AlphabetScrollbar*  value) ;

constexpr ::HMUI::AlphabetScrollbar* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::AlphabetScrollbar*> __get___4__this() const;

constexpr void __set_eventData(::UnityEngine::EventSystems::PointerEventData*  value) ;

constexpr ::UnityEngine::EventSystems::PointerEventData* __get_eventData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> __get_eventData() const;

static inline ::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2117aec size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2117b50 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2117b54 size 0x134 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2117c88 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2117c90 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2117cd0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AlphabetScrollbar___PointerMoveInsideCoroutine_d__18()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::AlphabetScrollbar
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13507))
// CS Name: ::HMUI::AlphabetScrollbar*
class CORDL_TYPE AlphabetScrollbar : public ::HMUI::Interactable {
public:
// Declarations
using _PointerMoveInsideCoroutine_d__18 = ::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::HMUI::Interactable)]{};

/// @brief Field _tableView offset 0x28
 __declspec(property(get=__get__tableView, put=__set__tableView)) ::HMUI::TableView*  _tableView;

/// @brief Field _characterHeight offset 0x30
 __declspec(property(get=__get__characterHeight, put=__set__characterHeight)) float_t  _characterHeight;

/// @brief Field _normalColor offset 0x34
 __declspec(property(get=__get__normalColor, put=__set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _textPrefab offset 0x48
 __declspec(property(get=__get__textPrefab, put=__set__textPrefab)) ::TMPro::TextMeshProUGUI*  _textPrefab;

/// @brief Field _prealocatedTexts offset 0x50
 __declspec(property(get=__get__prealocatedTexts, put=__set__prealocatedTexts)) ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  _prealocatedTexts;

/// @brief Field _highlightImage offset 0x58
 __declspec(property(get=__get__highlightImage, put=__set__highlightImage)) ::UnityEngine::UI::Image*  _highlightImage;

/// @brief Field _characterScrollData offset 0x60
 __declspec(property(get=__get__characterScrollData, put=__set__characterScrollData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>*  _characterScrollData;

/// @brief Field _texts offset 0x68
 __declspec(property(get=__get__texts, put=__set__texts)) ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*  _texts;

/// @brief Field _highlightedCharacterIndex offset 0x70
 __declspec(property(get=__get__highlightedCharacterIndex, put=__set__highlightedCharacterIndex)) int32_t  _highlightedCharacterIndex;

/// @brief Field _pointerIsDown offset 0x74
 __declspec(property(get=__get__pointerIsDown, put=__set__pointerIsDown)) bool  _pointerIsDown;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

constexpr void __set__tableView(::HMUI::TableView*  value) ;

constexpr ::HMUI::TableView* __get__tableView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> __get__tableView() const;

constexpr void __set__characterHeight(float_t  value) ;

constexpr float_t& __get__characterHeight() ;

constexpr float_t const& __get__characterHeight() const;

constexpr void __set__normalColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__normalColor() ;

constexpr ::UnityEngine::Color const& __get__normalColor() const;

constexpr void __set__textPrefab(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__textPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__textPrefab() const;

constexpr void __set__prealocatedTexts(::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  value) ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>& __get__prealocatedTexts() ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*> const& __get__prealocatedTexts() const;

constexpr void __set__highlightImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__highlightImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__highlightImage() const;

constexpr void __set__characterScrollData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>* __get__characterScrollData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>*> __get__characterScrollData() const;

constexpr void __set__texts(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* __get__texts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*> __get__texts() const;

constexpr void __set__highlightedCharacterIndex(int32_t  value) ;

constexpr int32_t& __get__highlightedCharacterIndex() ;

constexpr int32_t const& __get__highlightedCharacterIndex() const;

constexpr void __set__pointerIsDown(bool  value) ;

constexpr bool& __get__pointerIsDown() ;

constexpr bool const& __get__pointerIsDown() const;

/// @brief Method Awake addr 0x2116cc8 size 0x20 virtual false final false
inline void Awake() ;

/// @brief Method SetData addr 0x2116ce8 size 0x26c virtual false final false
inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>*  characterScrollData) ;

/// @brief Method OnPointerDown addr 0x2117524 size 0xe4 virtual true final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp addr 0x21178d8 size 0x8 virtual true final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter addr 0x21178e0 size 0x20 virtual true final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit addr 0x2117974 size 0x24 virtual true final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method PrepareTransforms addr 0x2117008 size 0x51c virtual false final false
inline void PrepareTransforms() ;

/// @brief Method RefreshHighlight addr 0x2117998 size 0x154 virtual false final false
inline void RefreshHighlight() ;

/// @brief Method PointerMoveInsideCoroutine addr 0x2117900 size 0x74 virtual false final false
inline ::System::Collections::IEnumerator* PointerMoveInsideCoroutine(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method GetPointerCharacterIndex addr 0x2117608 size 0x2d0 virtual false final false
inline int32_t GetPointerCharacterIndex(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method InitText addr 0x2116f54 size 0xb4 virtual false final false
inline void InitText(::TMPro::TextMeshProUGUI*  text, char16_t  character) ;

static inline ::HMUI::AlphabetScrollbar* New_ctor() ;

/// @brief Method .ctor addr 0x2117b14 size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlphabetScrollbar(AlphabetScrollbar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlphabetScrollbar(AlphabetScrollbar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AlphabetScrollbar()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::AlphabetScrollbar, 0x78>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::AlphabetScrollbar);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AlphabetScrollbar*, "HMUI", "AlphabetScrollbar");
NEED_NO_BOX(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18*, "HMUI", "AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18");
