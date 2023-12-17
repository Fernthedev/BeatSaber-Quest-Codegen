#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectableStateController)
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct __SelectableStateController__ViewState;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SelectableStateController__ViewState;
}
namespace GlobalNamespace {
class SelectableStateController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SelectableStateController__ViewState);
MARK_REF_PTR_T(::GlobalNamespace::SelectableStateController);
// Type: ::ViewState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5455))
// CS Name: ::SelectableStateController::ViewState
struct CORDL_TYPE __SelectableStateController__ViewState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SelectableStateController__ViewState_Unwrapped
enum struct ____SelectableStateController__ViewState_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Highlighted = static_cast<int32_t>(0x1),
__E_Pressed = static_cast<int32_t>(0x2),
__E_Disabled = static_cast<int32_t>(0x3),
__E_Selected = static_cast<int32_t>(0x4),
__E_SelectedAndHighlighted = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__SelectableStateController__ViewState const Normal;

/// @brief Field Highlighted value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__SelectableStateController__ViewState const Highlighted;

/// @brief Field Pressed value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__SelectableStateController__ViewState const Pressed;

/// @brief Field Disabled value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__SelectableStateController__ViewState const Disabled;

/// @brief Field Selected value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__SelectableStateController__ViewState const Selected;

/// @brief Field SelectedAndHighlighted value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__SelectableStateController__ViewState const SelectedAndHighlighted;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SelectableStateController__ViewState_Unwrapped () const noexcept {
return std::bit_cast<____SelectableStateController__ViewState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SelectableStateController__ViewState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SelectableStateController__ViewState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SelectableStateController__ViewState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectableStateController__ViewState, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SelectableStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5456))
// CS Name: ::SelectableStateController*
class CORDL_TYPE SelectableStateController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ViewState = ::GlobalNamespace::__SelectableStateController__ViewState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _tweeningManager offset 0x18
 __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager)) ::Tweening::TimeTweeningManager*  _tweeningManager;

/// @brief Field stateDidChangeEvent offset 0x20
 __declspec(property(get=__get_stateDidChangeEvent, put=__set_stateDidChangeEvent)) ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*  stateDidChangeEvent;

/// @brief Field <currentViewState>k__BackingField offset 0x28
 __declspec(property(get=__get__currentViewState_k__BackingField, put=__set__currentViewState_k__BackingField)) ::GlobalNamespace::__SelectableStateController__ViewState  _currentViewState_k__BackingField;

 __declspec(property(get=get_tweeningManager)) ::Tweening::TimeTweeningManager*  tweeningManager;

 __declspec(property(get=get_viewState)) ::GlobalNamespace::__SelectableStateController__ViewState  viewState;

 __declspec(property(get=get_currentViewState, put=set_currentViewState)) ::GlobalNamespace::__SelectableStateController__ViewState  currentViewState;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager*  value) ;

constexpr ::Tweening::TimeTweeningManager* __get__tweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> __get__tweeningManager() const;

constexpr void __set_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>* __get_stateDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*> __get_stateDidChangeEvent() const;

constexpr void __set__currentViewState_k__BackingField(::GlobalNamespace::__SelectableStateController__ViewState  value) ;

constexpr ::GlobalNamespace::__SelectableStateController__ViewState& __get__currentViewState_k__BackingField() ;

constexpr ::GlobalNamespace::__SelectableStateController__ViewState const& __get__currentViewState_k__BackingField() const;

/// @brief Method add_stateDidChangeEvent addr 0x227cab0 size 0xb0 virtual false final false
inline void add_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*  value) ;

/// @brief Method remove_stateDidChangeEvent addr 0x227cbf0 size 0xb0 virtual false final false
inline void remove_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*  value) ;

/// @brief Method get_tweeningManager addr 0x227f5c8 size 0x8 virtual false final false
inline ::Tweening::TimeTweeningManager* get_tweeningManager() ;

/// @brief Method get_viewState addr 0x227cb60 size 0x8 virtual false final false
inline ::GlobalNamespace::__SelectableStateController__ViewState get_viewState() ;

/// @brief Method get_currentViewState addr 0x227f5d0 size 0x8 virtual false final false
inline ::GlobalNamespace::__SelectableStateController__ViewState get_currentViewState() ;

/// @brief Method set_currentViewState addr 0x227f5d8 size 0x8 virtual false final false
inline void set_currentViewState(::GlobalNamespace::__SelectableStateController__ViewState  value) ;

/// @brief Method SetState addr 0x227f5e0 size 0x24 virtual false final false
inline void SetState(::GlobalNamespace::__SelectableStateController__ViewState  state, bool  animated) ;

static inline ::GlobalNamespace::SelectableStateController* New_ctor() ;

/// @brief Method .ctor addr 0x227f604 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableStateController(SelectableStateController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableStateController(SelectableStateController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectableStateController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectableStateController, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectableStateController__ViewState, "", "SelectableStateController/ViewState");
NEED_NO_BOX(::GlobalNamespace::SelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableStateController*, "", "SelectableStateController");
