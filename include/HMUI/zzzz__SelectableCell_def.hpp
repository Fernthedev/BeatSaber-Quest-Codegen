#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Interactable_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectableCell)
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace GlobalNamespace {
class Signal;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Forward declare root types
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace HMUI {
class SelectableCell;
}
// Write type traits
MARK_VAL_T(::HMUI::__SelectableCell__TransitionType);
MARK_REF_PTR_T(::HMUI::SelectableCell);
// Type: ::TransitionType
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13652))
// CS Name: ::SelectableCell::TransitionType
struct CORDL_TYPE __SelectableCell__TransitionType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SelectableCell__TransitionType_Unwrapped
enum struct ____SelectableCell__TransitionType_Unwrapped : int32_t {
__E_Instant = static_cast<int32_t>(0x0),
__E_Animated = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Instant value: static_cast<int32_t>(0x0)
static ::HMUI::__SelectableCell__TransitionType const Instant;

/// @brief Field Animated value: static_cast<int32_t>(0x1)
static ::HMUI::__SelectableCell__TransitionType const Animated;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SelectableCell__TransitionType_Unwrapped () const noexcept {
return std::bit_cast<____SelectableCell__TransitionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SelectableCell__TransitionType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SelectableCell__TransitionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SelectableCell__TransitionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__SelectableCell__TransitionType, 0x4>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::SelectableCell
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13653))
// CS Name: ::HMUI::SelectableCell*
class CORDL_TYPE SelectableCell : public ::HMUI::Interactable {
public:
// Declarations
using TransitionType = ::HMUI::__SelectableCell__TransitionType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::HMUI::Interactable)]{};

/// @brief Field _wasPressedSignal offset 0x28
 __declspec(property(get=__get__wasPressedSignal, put=__set__wasPressedSignal)) ::GlobalNamespace::Signal*  _wasPressedSignal;

/// @brief Field selectionDidChangeEvent offset 0x30
 __declspec(property(get=__get_selectionDidChangeEvent, put=__set_selectionDidChangeEvent)) ::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*  selectionDidChangeEvent;

/// @brief Field highlightDidChangeEvent offset 0x38
 __declspec(property(get=__get_highlightDidChangeEvent, put=__set_highlightDidChangeEvent)) ::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*  highlightDidChangeEvent;

/// @brief Field <highlighted>k__BackingField offset 0x40
 __declspec(property(get=__get__highlighted_k__BackingField, put=__set__highlighted_k__BackingField)) bool  _highlighted_k__BackingField;

/// @brief Field <selected>k__BackingField offset 0x41
 __declspec(property(get=__get__selected_k__BackingField, put=__set__selected_k__BackingField)) bool  _selected_k__BackingField;

 __declspec(property(get=get_highlighted, put=set_highlighted)) bool  highlighted;

 __declspec(property(get=get_selected, put=set_selected)) bool  selected;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

constexpr void __set__wasPressedSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__wasPressedSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__wasPressedSignal() const;

constexpr void __set_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*  value) ;

constexpr ::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>* __get_selectionDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*> __get_selectionDidChangeEvent() const;

constexpr void __set_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*  value) ;

constexpr ::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>* __get_highlightDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*> __get_highlightDidChangeEvent() const;

constexpr void __set__highlighted_k__BackingField(bool  value) ;

constexpr bool& __get__highlighted_k__BackingField() ;

constexpr bool const& __get__highlighted_k__BackingField() const;

constexpr void __set__selected_k__BackingField(bool  value) ;

constexpr bool& __get__selected_k__BackingField() ;

constexpr bool const& __get__selected_k__BackingField() const;

/// @brief Method add_selectionDidChangeEvent addr 0x2145880 size 0xb0 virtual false final false
inline void add_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*  value) ;

/// @brief Method remove_selectionDidChangeEvent addr 0x2145930 size 0xb0 virtual false final false
inline void remove_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*  value) ;

/// @brief Method add_highlightDidChangeEvent addr 0x21459e0 size 0xb0 virtual false final false
inline void add_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*  value) ;

/// @brief Method remove_highlightDidChangeEvent addr 0x2145a90 size 0xb0 virtual false final false
inline void remove_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*  value) ;

/// @brief Method get_highlighted addr 0x2145b40 size 0x8 virtual false final false
inline bool get_highlighted() ;

/// @brief Method set_highlighted addr 0x2145b48 size 0xc virtual false final false
inline void set_highlighted(bool  value) ;

/// @brief Method get_selected addr 0x2145b54 size 0x8 virtual false final false
inline bool get_selected() ;

/// @brief Method set_selected addr 0x2145b5c size 0xc virtual false final false
inline void set_selected(bool  value) ;

/// @brief Method Start addr 0x2145b68 size 0x30 virtual true final false
inline void Start() ;

/// @brief Method SetSelected addr 0x2145b98 size 0x80 virtual false final false
inline void SetSelected(bool  value, ::HMUI::__SelectableCell__TransitionType  transitionType, ::System::Object*  changeOwner, bool  ignoreCurrentValue) ;

/// @brief Method ClearHighlight addr 0x2145c18 size 0x10 virtual false final false
inline void ClearHighlight(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method SetHighlight addr 0x2145c28 size 0x78 virtual false final false
inline void SetHighlight(bool  value, ::HMUI::__SelectableCell__TransitionType  transitionType, bool  ignoreCurrentValue) ;

/// @brief Method InternalToggle addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InternalToggle() ;

/// @brief Method SelectionDidChange addr 0x2145ca0 size 0x4 virtual true final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method HighlightDidChange addr 0x2145ca4 size 0x4 virtual true final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method OnPointerClick addr 0x2145ca8 size 0xb0 virtual true final false
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSubmit addr 0x2145d58 size 0xa0 virtual true final false
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnPointerEnter addr 0x2145df8 size 0x10 virtual true final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit addr 0x2145e08 size 0x10 virtual true final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

static inline ::HMUI::SelectableCell* New_ctor() ;

/// @brief Method .ctor addr 0x2145e18 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableCell(SelectableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableCell(SelectableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectableCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SelectableCell, 0x48>, "Size mismatch!");

} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SelectableCell__TransitionType, "HMUI", "SelectableCell/TransitionType");
NEED_NO_BOX(::HMUI::SelectableCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SelectableCell*, "HMUI", "SelectableCell");
