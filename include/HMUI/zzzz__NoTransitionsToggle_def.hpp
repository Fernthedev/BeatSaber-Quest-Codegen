#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionsToggle)
namespace HMUI {
struct UISelectionState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
// Forward declare root types
namespace HMUI {
class NoTransitionsToggle;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::NoTransitionsToggle);
// Type: HMUI::NoTransitionsToggle
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13131))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13637))
// CS Name: ::HMUI::NoTransitionsToggle*
class CORDL_TYPE NoTransitionsToggle : public ::UnityEngine::UI::Toggle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x130};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x130 - sizeof(::UnityEngine::UI::Toggle)]{};

/// @brief Field selectionStateDidChangeEvent offset 0x120
 __declspec(property(get=__get_selectionStateDidChangeEvent, put=__set_selectionStateDidChangeEvent)) ::System::Action_1<::HMUI::UISelectionState>*  selectionStateDidChangeEvent;

/// @brief Field _selectionState offset 0x128
 __declspec(property(get=__get__selectionState, put=__set__selectionState)) ::HMUI::UISelectionState  _selectionState;

 __declspec(property(get=get_selectionState)) ::HMUI::UISelectionState  selectionState;

constexpr void __set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>*  value) ;

constexpr ::System::Action_1<::HMUI::UISelectionState>* __get_selectionStateDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::UISelectionState>*> __get_selectionStateDidChangeEvent() const;

constexpr void __set__selectionState(::HMUI::UISelectionState  value) ;

constexpr ::HMUI::UISelectionState& __get__selectionState() ;

constexpr ::HMUI::UISelectionState const& __get__selectionState() const;

/// @brief Method get_selectionState addr 0x2142b40 size 0x8 virtual false final false
inline ::HMUI::UISelectionState get_selectionState() ;

/// @brief Method add_selectionStateDidChangeEvent addr 0x2142b48 size 0xb4 virtual false final false
inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>*  value) ;

/// @brief Method remove_selectionStateDidChangeEvent addr 0x2142bfc size 0xb4 virtual false final false
inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>*  value) ;

/// @brief Method Start addr 0x2142cb0 size 0xac virtual true final false
inline void Start() ;

/// @brief Method DoStateTransition addr 0x2142d5c size 0x54 virtual true final false
inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant) ;

static inline ::HMUI::NoTransitionsToggle* New_ctor() ;

/// @brief Method .ctor addr 0x2142db0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__6_0 addr 0x2142db8 size 0x30 virtual false final false
inline void _Start_b__6_0(bool  isOn) ;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoTransitionsToggle(NoTransitionsToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoTransitionsToggle(NoTransitionsToggle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoTransitionsToggle()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::NoTransitionsToggle, 0x130>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::NoTransitionsToggle);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsToggle*, "HMUI", "NoTransitionsToggle");
