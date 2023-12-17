#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatcher)
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__EventRecord;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__DispatchContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__EventRecord;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDispatcher);
MARK_VAL_T(::UnityEngine::UIElements::__EventDispatcher__DispatchContext);
MARK_VAL_T(::UnityEngine::UIElements::__EventDispatcher__EventRecord);
// Type: ::EventRecord
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6913))
// CS Name: ::EventDispatcher::EventRecord
struct CORDL_TYPE __EventDispatcher__EventRecord : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Event offset 0x0
 __declspec(property(get=__get_m_Event, put=__set_m_Event)) ::UnityEngine::UIElements::EventBase*  m_Event;

/// @brief Field m_Panel offset 0x8
 __declspec(property(get=__get_m_Panel, put=__set_m_Panel)) ::UnityEngine::UIElements::IPanel*  m_Panel;

constexpr void __set_m_Event(::UnityEngine::UIElements::EventBase*  value) ;

constexpr ::UnityEngine::UIElements::EventBase* __get_m_Event() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventBase*> __get_m_Event() const;

constexpr void __set_m_Panel(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get_m_Panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get_m_Panel() const;

// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: None }, CppParam { name: "m_Panel", ty: "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: None }]
constexpr __EventDispatcher__EventRecord(::UnityEngine::UIElements::EventBase*  m_Event, ::UnityEngine::UIElements::IPanel*  m_Panel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EventDispatcher__EventRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EventDispatcher__EventRecord()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EventDispatcher__EventRecord, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::DispatchContext
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6914))
// CS Name: ::EventDispatcher::DispatchContext
struct CORDL_TYPE __EventDispatcher__DispatchContext : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_GateCount offset 0x0
 __declspec(property(get=__get_m_GateCount, put=__set_m_GateCount)) uint32_t  m_GateCount;

/// @brief Field m_Queue offset 0x8
 __declspec(property(get=__get_m_Queue, put=__set_m_Queue)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  m_Queue;

constexpr void __set_m_GateCount(uint32_t  value) ;

constexpr uint32_t& __get_m_GateCount() ;

constexpr uint32_t const& __get_m_GateCount() const;

constexpr void __set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* __get_m_Queue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> __get_m_Queue() const;

// Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Queue", ty: "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*", modifiers: "", def_value: None }]
constexpr __EventDispatcher__DispatchContext(uint32_t  m_GateCount, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  m_Queue) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EventDispatcher__DispatchContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EventDispatcher__DispatchContext()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EventDispatcher__DispatchContext, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::EventDispatcher
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6915))
// CS Name: ::UnityEngine.UIElements::EventDispatcher*
class CORDL_TYPE EventDispatcher : public ::System::Object {
public:
// Declarations
using DispatchContext = ::UnityEngine::UIElements::__EventDispatcher__DispatchContext;

using EventRecord = ::UnityEngine::UIElements::__EventDispatcher__EventRecord;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field m_ClickDetector offset 0x10
 __declspec(property(get=__get_m_ClickDetector, put=__set_m_ClickDetector)) ::UnityEngine::UIElements::ClickDetector*  m_ClickDetector;

/// @brief Field m_DispatchingStrategies offset 0x18
 __declspec(property(get=__get_m_DispatchingStrategies, put=__set_m_DispatchingStrategies)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  m_DispatchingStrategies;

/// @brief Field m_Queue offset 0x20
 __declspec(property(get=__get_m_Queue, put=__set_m_Queue)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  m_Queue;

/// @brief Field <pointerState>k__BackingField offset 0x28
 __declspec(property(get=__get__pointerState_k__BackingField, put=__set__pointerState_k__BackingField)) ::UnityEngine::UIElements::PointerDispatchState*  _pointerState_k__BackingField;

/// @brief Field m_GateCount offset 0x30
 __declspec(property(get=__get_m_GateCount, put=__set_m_GateCount)) uint32_t  m_GateCount;

/// @brief Field m_DispatchContexts offset 0x38
 __declspec(property(get=__get_m_DispatchContexts, put=__set_m_DispatchContexts)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*  m_DispatchContexts;

/// @brief Field m_Immediate offset 0x40
 __declspec(property(get=__get_m_Immediate, put=__set_m_Immediate)) bool  m_Immediate;

/// @brief Field <processingEvents>k__BackingField offset 0x41
 __declspec(property(get=__get__processingEvents_k__BackingField, put=__set__processingEvents_k__BackingField)) bool  _processingEvents_k__BackingField;

 __declspec(property(get=get_pointerState)) ::UnityEngine::UIElements::PointerDispatchState*  pointerState;

 __declspec(property(get=get_dispatchImmediately)) bool  dispatchImmediately;

 __declspec(property(put=set_processingEvents)) bool  processingEvents;

constexpr void __set_m_ClickDetector(::UnityEngine::UIElements::ClickDetector*  value) ;

constexpr ::UnityEngine::UIElements::ClickDetector* __get_m_ClickDetector() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClickDetector*> __get_m_ClickDetector() const;

constexpr void __set_m_DispatchingStrategies(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* __get_m_DispatchingStrategies() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> __get_m_DispatchingStrategies() const;

static inline void setStaticF_k_EventQueuePool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*  value) ;

static inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>* getStaticF_k_EventQueuePool() ;

constexpr void __set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* __get_m_Queue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> __get_m_Queue() const;

constexpr void __set__pointerState_k__BackingField(::UnityEngine::UIElements::PointerDispatchState*  value) ;

constexpr ::UnityEngine::UIElements::PointerDispatchState* __get__pointerState_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PointerDispatchState*> __get__pointerState_k__BackingField() const;

constexpr void __set_m_GateCount(uint32_t  value) ;

constexpr uint32_t& __get_m_GateCount() ;

constexpr uint32_t const& __get_m_GateCount() const;

constexpr void __set_m_DispatchContexts(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* __get_m_DispatchContexts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*> __get_m_DispatchContexts() const;

static inline void setStaticF_s_EditorStrategies(::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*,::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>  value) ;

static inline ::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*,::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> getStaticF_s_EditorStrategies() ;

constexpr void __set_m_Immediate(bool  value) ;

constexpr bool& __get_m_Immediate() ;

constexpr bool const& __get_m_Immediate() const;

constexpr void __set__processingEvents_k__BackingField(bool  value) ;

constexpr bool& __get__processingEvents_k__BackingField() ;

constexpr bool const& __get__processingEvents_k__BackingField() const;

/// @brief Method get_pointerState addr 0x2e02708 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::PointerDispatchState* get_pointerState() ;

/// @brief Method CreateForRuntime addr 0x2e02710 size 0x60 virtual false final false
static inline ::UnityEngine::UIElements::EventDispatcher* CreateForRuntime(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  strategies) ;

static inline ::UnityEngine::UIElements::EventDispatcher* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  strategies) ;

/// @brief Method .ctor addr 0x2e02770 size 0x1ac virtual false final false
inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  strategies) ;

/// @brief Method get_dispatchImmediately addr 0x2e0291c size 0x20 virtual false final false
inline bool get_dispatchImmediately() ;

/// @brief Method set_processingEvents addr 0x2e0293c size 0xc virtual false final false
inline void set_processingEvents(bool  value) ;

/// @brief Method Dispatch addr 0x2e02948 size 0x164 virtual false final false
inline void Dispatch(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel, ::UnityEngine::UIElements::DispatchMode  dispatchMode) ;

/// @brief Method CloseGate addr 0x2e025b8 size 0x10 virtual false final false
inline void CloseGate() ;

/// @brief Method OpenGate addr 0x2e025e0 size 0x88 virtual false final false
inline void OpenGate() ;

/// @brief Method ProcessEventQueue addr 0x2e02e7c size 0x3c8 virtual false final false
inline void ProcessEventQueue() ;

/// @brief Method ProcessEvent addr 0x2e02aac size 0x3d0 virtual false final false
inline void ProcessEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method ApplyDispatchingStrategies addr 0x2e03244 size 0x330 virtual false final false
inline void ApplyDispatchingStrategies(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel, bool  imguiEventIsInitiallyUsed) ;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDispatcher(EventDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDispatcher(EventDispatcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventDispatcher()  = default;
public:


// Fields

// Static field k_EventQueuePool

// Static field s_EditorStrategies


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcher, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcher*, "UnityEngine.UIElements", "EventDispatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EventDispatcher__DispatchContext, "UnityEngine.UIElements", "EventDispatcher/DispatchContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EventDispatcher__EventRecord, "UnityEngine.UIElements", "EventDispatcher/EventRecord");
