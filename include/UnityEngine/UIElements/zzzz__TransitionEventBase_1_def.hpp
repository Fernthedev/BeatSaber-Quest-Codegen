#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransitionEventBase_1)
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class TransitionEventBase_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class TransitionEventBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TransitionEventBase_1);
// Type: UnityEngine.UIElements::TransitionEventBase`1
// Type: UnityEngine.UIElements::TransitionEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7188)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1719 }), TypeDefinitionIndex(TypeDefinitionIndex(7180))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7188), inst: 2 })
// CS Name: ::UnityEngine.UIElements::TransitionEventBase`1<T>*
class CORDL_TYPE TransitionEventBase_1<T> : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::EventBase_1<T>)]{};

/// @brief Field <stylePropertyNames>k__BackingField offset 0x80
 __declspec(property(get=__get__stylePropertyNames_k__BackingField, put=__set__stylePropertyNames_k__BackingField)) ::UnityEngine::UIElements::StylePropertyNameCollection  _stylePropertyNames_k__BackingField;

/// @brief Field <elapsedTime>k__BackingField offset 0x88
 __declspec(property(get=__get__elapsedTime_k__BackingField, put=__set__elapsedTime_k__BackingField)) double_t  _elapsedTime_k__BackingField;

 __declspec(property(get=get_stylePropertyNames)) ::UnityEngine::UIElements::StylePropertyNameCollection  stylePropertyNames;

 __declspec(property(put=set_elapsedTime)) double_t  elapsedTime;

constexpr void __set__stylePropertyNames_k__BackingField(::UnityEngine::UIElements::StylePropertyNameCollection  value) ;

constexpr ::UnityEngine::UIElements::StylePropertyNameCollection& __get__stylePropertyNames_k__BackingField() ;

constexpr ::UnityEngine::UIElements::StylePropertyNameCollection const& __get__stylePropertyNames_k__BackingField() const;

constexpr void __set__elapsedTime_k__BackingField(double_t  value) ;

constexpr double_t& __get__elapsedTime_k__BackingField() ;

constexpr double_t const& __get__elapsedTime_k__BackingField() const;

/// @brief Method get_stylePropertyNames addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::StylePropertyNameCollection get_stylePropertyNames() ;

/// @brief Method set_elapsedTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_elapsedTime(double_t  value) ;

static inline ::UnityEngine::UIElements::TransitionEventBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::UIElements::StylePropertyName  stylePropertyName, double_t  elapsedTime) ;

// Ctor Parameters [CppParam { name: "", ty: "TransitionEventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransitionEventBase_1(TransitionEventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransitionEventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransitionEventBase_1(TransitionEventBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TransitionEventBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TransitionEventBase_1, "UnityEngine.UIElements", "TransitionEventBase`1");
