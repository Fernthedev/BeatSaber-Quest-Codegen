#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueAnimation_1)
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
template<typename T>
class ValueAnimation_1;
}
namespace UnityEngine::UIElements::Experimental {
template<>
class ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>;
}
namespace UnityEngine::UIElements::Experimental {
template<::il2cpp_utils::il2cpp_reference_type T>
class ValueAnimation_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::Experimental::ValueAnimation_1);
// Type: UnityEngine.UIElements.Experimental::ValueAnimation`1
// Type: UnityEngine.UIElements.Experimental::ValueAnimation`1
namespace UnityEngine::UIElements::Experimental {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7458)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7458), inst: 5291 })
// CS Name: ::UnityEngine.UIElements.Experimental::ValueAnimation`1<T>*
class CORDL_TYPE ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field m_StartTimeMs offset 0x10
 __declspec(property(get=__get_m_StartTimeMs, put=__set_m_StartTimeMs)) int64_t  m_StartTimeMs;

/// @brief Field m_DurationMs offset 0x18
 __declspec(property(get=__get_m_DurationMs, put=__set_m_DurationMs)) int32_t  m_DurationMs;

/// @brief Field <easingCurve>k__BackingField offset 0x20
 __declspec(property(get=__get__easingCurve_k__BackingField, put=__set__easingCurve_k__BackingField)) ::System::Func_2<float_t,float_t>*  _easingCurve_k__BackingField;

/// @brief Field <isRunning>k__BackingField offset 0x28
 __declspec(property(get=__get__isRunning_k__BackingField, put=__set__isRunning_k__BackingField)) bool  _isRunning_k__BackingField;

/// @brief Field <onAnimationCompleted>k__BackingField offset 0x30
 __declspec(property(get=__get__onAnimationCompleted_k__BackingField, put=__set__onAnimationCompleted_k__BackingField)) ::System::Action*  _onAnimationCompleted_k__BackingField;

/// @brief Field <autoRecycle>k__BackingField offset 0x38
 __declspec(property(get=__get__autoRecycle_k__BackingField, put=__set__autoRecycle_k__BackingField)) bool  _autoRecycle_k__BackingField;

/// @brief Field <recycled>k__BackingField offset 0x39
 __declspec(property(get=__get__recycled_k__BackingField, put=__set__recycled_k__BackingField)) bool  _recycled_k__BackingField;

/// @brief Field <owner>k__BackingField offset 0x40
 __declspec(property(get=__get__owner_k__BackingField, put=__set__owner_k__BackingField)) ::UnityEngine::UIElements::VisualElement*  _owner_k__BackingField;

/// @brief Field <valueUpdated>k__BackingField offset 0x48
 __declspec(property(get=__get__valueUpdated_k__BackingField, put=__set__valueUpdated_k__BackingField)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  _valueUpdated_k__BackingField;

/// @brief Field <initialValue>k__BackingField offset 0x50
 __declspec(property(get=__get__initialValue_k__BackingField, put=__set__initialValue_k__BackingField)) ::System::Func_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  _initialValue_k__BackingField;

/// @brief Field <interpolator>k__BackingField offset 0x58
 __declspec(property(get=__get__interpolator_k__BackingField, put=__set__interpolator_k__BackingField)) ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>*  _interpolator_k__BackingField;

/// @brief Field _from offset 0x60
 __declspec(property(get=__get__from, put=__set__from)) ::UnityEngine::UIElements::Experimental::StyleValues  _from;

/// @brief Field fromValueSet offset 0x68
 __declspec(property(get=__get_fromValueSet, put=__set_fromValueSet)) bool  fromValueSet;

/// @brief Field <to>k__BackingField offset 0x70
 __declspec(property(get=__get__to_k__BackingField, put=__set__to_k__BackingField)) ::UnityEngine::UIElements::Experimental::StyleValues  _to_k__BackingField;

 __declspec(property(get=get_durationMs, put=set_durationMs)) int32_t  durationMs;

 __declspec(property(get=get_easingCurve, put=set_easingCurve)) ::System::Func_2<float_t,float_t>*  easingCurve;

 __declspec(property(get=get_isRunning, put=set_isRunning)) bool  isRunning;

 __declspec(property(get=get_onAnimationCompleted, put=set_onAnimationCompleted)) ::System::Action*  onAnimationCompleted;

 __declspec(property(get=get_autoRecycle, put=set_autoRecycle)) bool  autoRecycle;

 __declspec(property(get=get_recycled, put=set_recycled)) bool  recycled;

 __declspec(property(get=get_owner, put=set_owner)) ::UnityEngine::UIElements::VisualElement*  owner;

 __declspec(property(get=get_valueUpdated, put=set_valueUpdated)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  valueUpdated;

 __declspec(property(get=get_initialValue, put=set_initialValue)) ::System::Func_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  initialValue;

 __declspec(property(get=get_interpolator, put=set_interpolator)) ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>*  interpolator;

 __declspec(property(get=get_from, put=set_from)) ::UnityEngine::UIElements::Experimental::StyleValues  from;

 __declspec(property(get=get_to, put=set_to)) ::UnityEngine::UIElements::Experimental::StyleValues  to;

/// @brief Convert operator to "::UnityEngine::UIElements::Experimental::IValueAnimationUpdate"
constexpr operator  ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*() noexcept;

constexpr void __set_m_StartTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_StartTimeMs() ;

constexpr int64_t const& __get_m_StartTimeMs() const;

constexpr void __set_m_DurationMs(int32_t  value) ;

constexpr int32_t& __get_m_DurationMs() ;

constexpr int32_t const& __get_m_DurationMs() const;

constexpr void __set__easingCurve_k__BackingField(::System::Func_2<float_t,float_t>*  value) ;

constexpr ::System::Func_2<float_t,float_t>* __get__easingCurve_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,float_t>*> __get__easingCurve_k__BackingField() const;

constexpr void __set__isRunning_k__BackingField(bool  value) ;

constexpr bool& __get__isRunning_k__BackingField() ;

constexpr bool const& __get__isRunning_k__BackingField() const;

constexpr void __set__onAnimationCompleted_k__BackingField(::System::Action*  value) ;

constexpr ::System::Action* __get__onAnimationCompleted_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get__onAnimationCompleted_k__BackingField() const;

constexpr void __set__autoRecycle_k__BackingField(bool  value) ;

constexpr bool& __get__autoRecycle_k__BackingField() ;

constexpr bool const& __get__autoRecycle_k__BackingField() const;

constexpr void __set__recycled_k__BackingField(bool  value) ;

constexpr bool& __get__recycled_k__BackingField() ;

constexpr bool const& __get__recycled_k__BackingField() const;

static inline void setStaticF_sObjectPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*>*  value) ;

static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*>* getStaticF_sObjectPool() ;

constexpr void __set__owner_k__BackingField(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get__owner_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get__owner_k__BackingField() const;

constexpr void __set__valueUpdated_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  value) ;

constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>* __get__valueUpdated_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*> __get__valueUpdated_k__BackingField() const;

constexpr void __set__initialValue_k__BackingField(::System::Func_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  value) ;

constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>* __get__initialValue_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*> __get__initialValue_k__BackingField() const;

constexpr void __set__interpolator_k__BackingField(::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>*  value) ;

constexpr ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>* __get__interpolator_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>*> __get__interpolator_k__BackingField() const;

constexpr void __set__from(::UnityEngine::UIElements::Experimental::StyleValues  value) ;

constexpr ::UnityEngine::UIElements::Experimental::StyleValues& __get__from() ;

constexpr ::UnityEngine::UIElements::Experimental::StyleValues const& __get__from() const;

constexpr void __set_fromValueSet(bool  value) ;

constexpr bool& __get_fromValueSet() ;

constexpr bool const& __get_fromValueSet() const;

constexpr void __set__to_k__BackingField(::UnityEngine::UIElements::Experimental::StyleValues  value) ;

constexpr ::UnityEngine::UIElements::Experimental::StyleValues& __get__to_k__BackingField() ;

constexpr ::UnityEngine::UIElements::Experimental::StyleValues const& __get__to_k__BackingField() const;

/// @brief Method get_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_durationMs() ;

/// @brief Method set_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_durationMs(int32_t  value) ;

/// @brief Method get_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Func_2<float_t,float_t>* get_easingCurve() ;

/// @brief Method set_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_easingCurve(::System::Func_2<float_t,float_t>*  value) ;

/// @brief Method get_isRunning addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isRunning() ;

/// @brief Method set_isRunning addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_isRunning(bool  value) ;

/// @brief Method get_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Action* get_onAnimationCompleted() ;

/// @brief Method set_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_onAnimationCompleted(::System::Action*  value) ;

/// @brief Method get_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_autoRecycle() ;

/// @brief Method set_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_autoRecycle(bool  value) ;

/// @brief Method get_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_recycled() ;

/// @brief Method set_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_recycled(bool  value) ;

/// @brief Method get_owner addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_owner() ;

/// @brief Method set_owner addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_owner(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>* get_valueUpdated() ;

/// @brief Method set_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_valueUpdated(::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  value) ;

/// @brief Method get_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Func_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>* get_initialValue() ;

/// @brief Method set_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_initialValue(::System::Func_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::Experimental::StyleValues>*  value) ;

/// @brief Method get_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>* get_interpolator() ;

/// @brief Method set_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_interpolator(::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>*  value) ;

/// @brief Method get_from addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Experimental::StyleValues get_from() ;

/// @brief Method set_from addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_from(::UnityEngine::UIElements::Experimental::StyleValues  value) ;

/// @brief Method get_to addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Experimental::StyleValues get_to() ;

/// @brief Method set_to addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_to(::UnityEngine::UIElements::Experimental::StyleValues  value) ;

static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Start() ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Stop() ;

/// @brief Method Recycle addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Recycle() ;

/// @brief Method UnityEngine.UIElements.Experimental.IValueAnimationUpdate.Tick addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_UIElements_Experimental_IValueAnimationUpdate_Tick(int64_t  currentTimeMs) ;

/// @brief Method SetDefaultValues addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefaultValues() ;

/// @brief Method Unregister addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Unregister() ;

/// @brief Method Register addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Register() ;

/// @brief Method SetOwner addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetOwner(::UnityEngine::UIElements::VisualElement*  e) ;

/// @brief Method CheckNotRecycled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CheckNotRecycled() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* Create(::UnityEngine::UIElements::VisualElement*  e, ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>*  interpolator) ;

/// @brief Method KeepAlive addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* KeepAlive() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueAnimation_1(ValueAnimation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueAnimation_1(ValueAnimation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueAnimation_1()  = default;
public:


// Fields

// Static field sObjectPool


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
// Type: UnityEngine.UIElements.Experimental::ValueAnimation`1
namespace UnityEngine::UIElements::Experimental {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7458)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7458), inst: 2 })
// CS Name: ::UnityEngine.UIElements.Experimental::ValueAnimation`1<T>*
class CORDL_TYPE ValueAnimation_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field m_StartTimeMs offset 0x10
 __declspec(property(get=__get_m_StartTimeMs, put=__set_m_StartTimeMs)) int64_t  m_StartTimeMs;

/// @brief Field m_DurationMs offset 0x18
 __declspec(property(get=__get_m_DurationMs, put=__set_m_DurationMs)) int32_t  m_DurationMs;

/// @brief Field <easingCurve>k__BackingField offset 0x20
 __declspec(property(get=__get__easingCurve_k__BackingField, put=__set__easingCurve_k__BackingField)) ::System::Func_2<float_t,float_t>*  _easingCurve_k__BackingField;

/// @brief Field <isRunning>k__BackingField offset 0x28
 __declspec(property(get=__get__isRunning_k__BackingField, put=__set__isRunning_k__BackingField)) bool  _isRunning_k__BackingField;

/// @brief Field <onAnimationCompleted>k__BackingField offset 0x30
 __declspec(property(get=__get__onAnimationCompleted_k__BackingField, put=__set__onAnimationCompleted_k__BackingField)) ::System::Action*  _onAnimationCompleted_k__BackingField;

/// @brief Field <autoRecycle>k__BackingField offset 0x38
 __declspec(property(get=__get__autoRecycle_k__BackingField, put=__set__autoRecycle_k__BackingField)) bool  _autoRecycle_k__BackingField;

/// @brief Field <recycled>k__BackingField offset 0x39
 __declspec(property(get=__get__recycled_k__BackingField, put=__set__recycled_k__BackingField)) bool  _recycled_k__BackingField;

/// @brief Field <owner>k__BackingField offset 0x40
 __declspec(property(get=__get__owner_k__BackingField, put=__set__owner_k__BackingField)) ::UnityEngine::UIElements::VisualElement*  _owner_k__BackingField;

/// @brief Field <valueUpdated>k__BackingField offset 0x48
 __declspec(property(get=__get__valueUpdated_k__BackingField, put=__set__valueUpdated_k__BackingField)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*,T>*  _valueUpdated_k__BackingField;

/// @brief Field <initialValue>k__BackingField offset 0x50
 __declspec(property(get=__get__initialValue_k__BackingField, put=__set__initialValue_k__BackingField)) ::System::Func_2<::UnityEngine::UIElements::VisualElement*,T>*  _initialValue_k__BackingField;

/// @brief Field <interpolator>k__BackingField offset 0x58
 __declspec(property(get=__get__interpolator_k__BackingField, put=__set__interpolator_k__BackingField)) ::System::Func_4<T,T,float_t,T>*  _interpolator_k__BackingField;

/// @brief Field _from offset 0x60
 __declspec(property(get=__get__from, put=__set__from)) T  _from;

/// @brief Field fromValueSet offset 0x68
 __declspec(property(get=__get_fromValueSet, put=__set_fromValueSet)) bool  fromValueSet;

/// @brief Field <to>k__BackingField offset 0x70
 __declspec(property(get=__get__to_k__BackingField, put=__set__to_k__BackingField)) T  _to_k__BackingField;

 __declspec(property(get=get_durationMs, put=set_durationMs)) int32_t  durationMs;

 __declspec(property(get=get_easingCurve, put=set_easingCurve)) ::System::Func_2<float_t,float_t>*  easingCurve;

 __declspec(property(get=get_isRunning, put=set_isRunning)) bool  isRunning;

 __declspec(property(get=get_onAnimationCompleted, put=set_onAnimationCompleted)) ::System::Action*  onAnimationCompleted;

 __declspec(property(get=get_autoRecycle, put=set_autoRecycle)) bool  autoRecycle;

 __declspec(property(get=get_recycled, put=set_recycled)) bool  recycled;

 __declspec(property(get=get_owner, put=set_owner)) ::UnityEngine::UIElements::VisualElement*  owner;

 __declspec(property(get=get_valueUpdated, put=set_valueUpdated)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*,T>*  valueUpdated;

 __declspec(property(get=get_initialValue, put=set_initialValue)) ::System::Func_2<::UnityEngine::UIElements::VisualElement*,T>*  initialValue;

 __declspec(property(get=get_interpolator, put=set_interpolator)) ::System::Func_4<T,T,float_t,T>*  interpolator;

 __declspec(property(get=get_from, put=set_from)) T  from;

 __declspec(property(get=get_to, put=set_to)) T  to;

/// @brief Convert operator to "::UnityEngine::UIElements::Experimental::IValueAnimationUpdate"
constexpr operator  ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*() noexcept;

constexpr void __set_m_StartTimeMs(int64_t  value) ;

constexpr int64_t& __get_m_StartTimeMs() ;

constexpr int64_t const& __get_m_StartTimeMs() const;

constexpr void __set_m_DurationMs(int32_t  value) ;

constexpr int32_t& __get_m_DurationMs() ;

constexpr int32_t const& __get_m_DurationMs() const;

constexpr void __set__easingCurve_k__BackingField(::System::Func_2<float_t,float_t>*  value) ;

constexpr ::System::Func_2<float_t,float_t>* __get__easingCurve_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,float_t>*> __get__easingCurve_k__BackingField() const;

constexpr void __set__isRunning_k__BackingField(bool  value) ;

constexpr bool& __get__isRunning_k__BackingField() ;

constexpr bool const& __get__isRunning_k__BackingField() const;

constexpr void __set__onAnimationCompleted_k__BackingField(::System::Action*  value) ;

constexpr ::System::Action* __get__onAnimationCompleted_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get__onAnimationCompleted_k__BackingField() const;

constexpr void __set__autoRecycle_k__BackingField(bool  value) ;

constexpr bool& __get__autoRecycle_k__BackingField() ;

constexpr bool const& __get__autoRecycle_k__BackingField() const;

constexpr void __set__recycled_k__BackingField(bool  value) ;

constexpr bool& __get__recycled_k__BackingField() ;

constexpr bool const& __get__recycled_k__BackingField() const;

static inline void setStaticF_sObjectPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>*  value) ;

static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* getStaticF_sObjectPool() ;

constexpr void __set__owner_k__BackingField(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get__owner_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get__owner_k__BackingField() const;

constexpr void __set__valueUpdated_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*,T>*  value) ;

constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*,T>* __get__valueUpdated_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*,T>*> __get__valueUpdated_k__BackingField() const;

constexpr void __set__initialValue_k__BackingField(::System::Func_2<::UnityEngine::UIElements::VisualElement*,T>*  value) ;

constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement*,T>* __get__initialValue_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::VisualElement*,T>*> __get__initialValue_k__BackingField() const;

constexpr void __set__interpolator_k__BackingField(::System::Func_4<T,T,float_t,T>*  value) ;

constexpr ::System::Func_4<T,T,float_t,T>* __get__interpolator_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_4<T,T,float_t,T>*> __get__interpolator_k__BackingField() const;

constexpr void __set__from(T  value) ;

constexpr T& __get__from() ;

constexpr T const& __get__from() const;

constexpr void __set_fromValueSet(bool  value) ;

constexpr bool& __get_fromValueSet() ;

constexpr bool const& __get_fromValueSet() const;

constexpr void __set__to_k__BackingField(T  value) ;

constexpr T& __get__to_k__BackingField() ;

constexpr T const& __get__to_k__BackingField() const;

/// @brief Method get_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_durationMs() ;

/// @brief Method set_durationMs addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_durationMs(int32_t  value) ;

/// @brief Method get_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Func_2<float_t,float_t>* get_easingCurve() ;

/// @brief Method set_easingCurve addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_easingCurve(::System::Func_2<float_t,float_t>*  value) ;

/// @brief Method get_isRunning addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_isRunning() ;

/// @brief Method set_isRunning addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_isRunning(bool  value) ;

/// @brief Method get_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Action* get_onAnimationCompleted() ;

/// @brief Method set_onAnimationCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_onAnimationCompleted(::System::Action*  value) ;

/// @brief Method get_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_autoRecycle() ;

/// @brief Method set_autoRecycle addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_autoRecycle(bool  value) ;

/// @brief Method get_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_recycled() ;

/// @brief Method set_recycled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_recycled(bool  value) ;

/// @brief Method get_owner addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_owner() ;

/// @brief Method set_owner addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_owner(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method get_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*,T>* get_valueUpdated() ;

/// @brief Method set_valueUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_valueUpdated(::System::Action_2<::UnityEngine::UIElements::VisualElement*,T>*  value) ;

/// @brief Method get_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Func_2<::UnityEngine::UIElements::VisualElement*,T>* get_initialValue() ;

/// @brief Method set_initialValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_initialValue(::System::Func_2<::UnityEngine::UIElements::VisualElement*,T>*  value) ;

/// @brief Method get_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Func_4<T,T,float_t,T>* get_interpolator() ;

/// @brief Method set_interpolator addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_interpolator(::System::Func_4<T,T,float_t,T>*  value) ;

/// @brief Method get_from addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_from() ;

/// @brief Method set_from addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_from(T  value) ;

/// @brief Method get_to addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_to() ;

/// @brief Method set_to addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_to(T  value) ;

static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Start() ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Stop() ;

/// @brief Method Recycle addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Recycle() ;

/// @brief Method UnityEngine.UIElements.Experimental.IValueAnimationUpdate.Tick addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_UIElements_Experimental_IValueAnimationUpdate_Tick(int64_t  currentTimeMs) ;

/// @brief Method SetDefaultValues addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefaultValues() ;

/// @brief Method Unregister addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Unregister() ;

/// @brief Method Register addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Register() ;

/// @brief Method SetOwner addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetOwner(::UnityEngine::UIElements::VisualElement*  e) ;

/// @brief Method CheckNotRecycled addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CheckNotRecycled() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* Create(::UnityEngine::UIElements::VisualElement*  e, ::System::Func_4<T,T,float_t,T>*  interpolator) ;

/// @brief Method KeepAlive addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* KeepAlive() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueAnimation_1(ValueAnimation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueAnimation_1(ValueAnimation_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueAnimation_1()  = default;
public:


// Fields

// Static field sObjectPool


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Experimental::ValueAnimation_1, "UnityEngine.UIElements.Experimental", "ValueAnimation`1");
