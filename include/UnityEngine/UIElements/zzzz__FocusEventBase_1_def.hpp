#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusEventBase_1)
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class Focusable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class FocusEventBase_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class FocusEventBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::FocusEventBase_1);
// Type: UnityEngine.UIElements::FocusEventBase`1
// Type: UnityEngine.UIElements::FocusEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7180)), TypeDefinitionIndex(TypeDefinitionIndex(7232)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1712 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7232), inst: 2 })
// CS Name: ::UnityEngine.UIElements::FocusEventBase`1<T>*
class CORDL_TYPE FocusEventBase_1<T> : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::UIElements::EventBase_1<T>)]{};

/// @brief Field <relatedTarget>k__BackingField offset 0x80
 __declspec(property(get=__get__relatedTarget_k__BackingField, put=__set__relatedTarget_k__BackingField)) ::UnityEngine::UIElements::Focusable*  _relatedTarget_k__BackingField;

/// @brief Field <direction>k__BackingField offset 0x88
 __declspec(property(get=__get__direction_k__BackingField, put=__set__direction_k__BackingField)) ::UnityEngine::UIElements::FocusChangeDirection*  _direction_k__BackingField;

/// @brief Field <focusController>k__BackingField offset 0x90
 __declspec(property(get=__get__focusController_k__BackingField, put=__set__focusController_k__BackingField)) ::UnityEngine::UIElements::FocusController*  _focusController_k__BackingField;

/// @brief Field <IsFocusDelegated>k__BackingField offset 0x98
 __declspec(property(get=__get__IsFocusDelegated_k__BackingField, put=__set__IsFocusDelegated_k__BackingField)) bool  _IsFocusDelegated_k__BackingField;

 __declspec(property(get=get_relatedTarget, put=set_relatedTarget)) ::UnityEngine::UIElements::Focusable*  relatedTarget;

 __declspec(property(get=get_direction, put=set_direction)) ::UnityEngine::UIElements::FocusChangeDirection*  direction;

 __declspec(property(get=get_focusController, put=set_focusController)) ::UnityEngine::UIElements::FocusController*  focusController;

 __declspec(property(get=get_IsFocusDelegated, put=set_IsFocusDelegated)) bool  IsFocusDelegated;

constexpr void __set__relatedTarget_k__BackingField(::UnityEngine::UIElements::Focusable*  value) ;

constexpr ::UnityEngine::UIElements::Focusable* __get__relatedTarget_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> __get__relatedTarget_k__BackingField() const;

constexpr void __set__direction_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection*  value) ;

constexpr ::UnityEngine::UIElements::FocusChangeDirection* __get__direction_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusChangeDirection*> __get__direction_k__BackingField() const;

constexpr void __set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController*  value) ;

constexpr ::UnityEngine::UIElements::FocusController* __get__focusController_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusController*> __get__focusController_k__BackingField() const;

constexpr void __set__IsFocusDelegated_k__BackingField(bool  value) ;

constexpr bool& __get__IsFocusDelegated_k__BackingField() ;

constexpr bool const& __get__IsFocusDelegated_k__BackingField() const;

/// @brief Method get_relatedTarget addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::Focusable* get_relatedTarget() ;

/// @brief Method set_relatedTarget addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_relatedTarget(::UnityEngine::UIElements::Focusable*  value) ;

/// @brief Method get_direction addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::FocusChangeDirection* get_direction() ;

/// @brief Method set_direction addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_direction(::UnityEngine::UIElements::FocusChangeDirection*  value) ;

/// @brief Method get_focusController addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::FocusController* get_focusController() ;

/// @brief Method set_focusController addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_focusController(::UnityEngine::UIElements::FocusController*  value) ;

/// @brief Method get_IsFocusDelegated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsFocusDelegated() ;

/// @brief Method set_IsFocusDelegated addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_IsFocusDelegated(bool  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::UIElements::IEventHandler*  target, ::UnityEngine::UIElements::Focusable*  relatedTarget, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::FocusController*  focusController, bool  bIsFocusDelegated) ;

static inline ::UnityEngine::UIElements::FocusEventBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FocusEventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusEventBase_1(FocusEventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusEventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusEventBase_1(FocusEventBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FocusEventBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::FocusEventBase_1, "UnityEngine.UIElements", "FocusEventBase`1");
