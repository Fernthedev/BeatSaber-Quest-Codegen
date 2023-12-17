#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackFunctor_1)
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace UnityEngine::UIElements {
struct CallbackPhase;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallbackFunctor_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TEventType>
class EventCallbackFunctor_1<TEventType>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventCallbackFunctor_1);
// Type: UnityEngine.UIElements::EventCallbackFunctor`1
// Type: UnityEngine.UIElements::EventCallbackFunctor`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TEventType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7184)), TypeDefinitionIndex(TypeDefinitionIndex(7183))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7184), inst: 2 })
// CS Name: ::UnityEngine.UIElements::EventCallbackFunctor`1<TEventType>*
class CORDL_TYPE EventCallbackFunctor_1<TEventType> : public ::UnityEngine::UIElements::EventCallbackFunctorBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::UIElements::EventCallbackFunctorBase)]{};

/// @brief Field m_Callback offset 0x18
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::UnityEngine::UIElements::EventCallback_1<TEventType>*  m_Callback;

/// @brief Field m_EventTypeId offset 0x20
 __declspec(property(get=__get_m_EventTypeId, put=__set_m_EventTypeId)) int64_t  m_EventTypeId;

constexpr void __set_m_Callback(::UnityEngine::UIElements::EventCallback_1<TEventType>*  value) ;

constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallback_1<TEventType>*> __get_m_Callback() const;

constexpr void __set_m_EventTypeId(int64_t  value) ;

constexpr int64_t& __get_m_EventTypeId() ;

constexpr int64_t const& __get_m_EventTypeId() const;

static inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>* New_ctor(::UnityEngine::UIElements::EventCallback_1<TEventType>*  callback, ::UnityEngine::UIElements::CallbackPhase  phase, ::UnityEngine::UIElements::InvokePolicy  invokePolicy) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::EventCallback_1<TEventType>*  callback, ::UnityEngine::UIElements::CallbackPhase  phase, ::UnityEngine::UIElements::InvokePolicy  invokePolicy) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::PropagationPhase  propagationPhase) ;

/// @brief Method IsEquivalentTo addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool IsEquivalentTo(int64_t  eventTypeId, ::System::Delegate*  callback, ::UnityEngine::UIElements::CallbackPhase  phase) ;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventCallbackFunctor_1(EventCallbackFunctor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventCallbackFunctor_1(EventCallbackFunctor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventCallbackFunctor_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallbackFunctor_1, "UnityEngine.UIElements", "EventCallbackFunctor`1");
