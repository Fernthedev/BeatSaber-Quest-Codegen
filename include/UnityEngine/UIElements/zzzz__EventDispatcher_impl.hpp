#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDispatchState_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClickDetector_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
constexpr void UnityEngine::UIElements::__EventDispatcher__EventRecord::__set_m_Event(::UnityEngine::UIElements::EventBase*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::EventBase*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::EventBase*>(value));
}
constexpr ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__EventDispatcher__EventRecord::__get_m_Event()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventBase*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventBase*> UnityEngine::UIElements::__EventDispatcher__EventRecord::__get_m_Event() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventBase*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__EventDispatcher__EventRecord::__set_m_Panel(::UnityEngine::UIElements::IPanel*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IPanel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::IPanel*>(value));
}
constexpr ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::__EventDispatcher__EventRecord::__get_m_Panel()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IPanel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> UnityEngine::UIElements::__EventDispatcher__EventRecord::__get_m_Panel() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IPanel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Panel", ty: "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::__EventDispatcher__EventRecord::__EventDispatcher__EventRecord(::UnityEngine::UIElements::EventBase*  m_Event, ::UnityEngine::UIElements::IPanel*  m_Panel) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_Event = m_Event;
this->m_Panel = m_Panel;
}
constexpr void UnityEngine::UIElements::__EventDispatcher__DispatchContext::__set_m_GateCount(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::__EventDispatcher__DispatchContext::__get_m_GateCount()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::UIElements::__EventDispatcher__DispatchContext::__get_m_GateCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__EventDispatcher__DispatchContext::__set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* UnityEngine::UIElements::__EventDispatcher__DispatchContext::__get_m_Queue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> UnityEngine::UIElements::__EventDispatcher__DispatchContext::__get_m_Queue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Queue", ty: "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::__EventDispatcher__DispatchContext::__EventDispatcher__DispatchContext(uint32_t  m_GateCount, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  m_Queue) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_GateCount = m_GateCount;
this->m_Queue = m_Queue;
}
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_pointerState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PointerDispatchState* (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::get_pointerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e02708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "get_pointerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CreateForRuntime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventDispatcher* (*)(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*)>(&::UnityEngine::UIElements::EventDispatcher::CreateForRuntime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e02710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "CreateForRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*)>(&::UnityEngine::UIElements::EventDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2e02770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_dispatchImmediately
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e0291c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "get_dispatchImmediately",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.set_processingEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(bool)>(&::UnityEngine::UIElements::EventDispatcher::set_processingEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0293c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "set_processingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.Dispatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::EventDispatcher::Dispatch)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2e02948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CloseGate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::CloseGate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e025b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "CloseGate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.OpenGate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::OpenGate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e025e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "OpenGate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEventQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::ProcessEventQueue)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2e02e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "ProcessEventQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::EventDispatcher::ProcessEvent)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2e02aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ApplyDispatchingStrategies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, bool)>(&::UnityEngine::UIElements::EventDispatcher::ApplyDispatchingStrategies)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2e03244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "ApplyDispatchingStrategies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_ClickDetector(::UnityEngine::UIElements::ClickDetector*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ClickDetector*, 0x10>(this, std::forward<::UnityEngine::UIElements::ClickDetector*>(value));
}
constexpr ::UnityEngine::UIElements::ClickDetector* UnityEngine::UIElements::EventDispatcher::__get_m_ClickDetector()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClickDetector*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClickDetector*> UnityEngine::UIElements::EventDispatcher::__get_m_ClickDetector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClickDetector*, 0x10>(this);
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_DispatchingStrategies(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* UnityEngine::UIElements::EventDispatcher::__get_m_DispatchingStrategies()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> UnityEngine::UIElements::EventDispatcher::__get_m_DispatchingStrategies() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*, 0x18>(this);
}
inline void UnityEngine::UIElements::EventDispatcher::setStaticF_k_EventQueuePool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*, "k_EventQueuePool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>(std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*>(value));
}
inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>* UnityEngine::UIElements::EventDispatcher::getStaticF_k_EventQueuePool()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*, "k_EventQueuePool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>();
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*, 0x20>(this, std::forward<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* UnityEngine::UIElements::EventDispatcher::__get_m_Queue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> UnityEngine::UIElements::EventDispatcher::__get_m_Queue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set__pointerState_k__BackingField(::UnityEngine::UIElements::PointerDispatchState*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::PointerDispatchState*, 0x28>(this, std::forward<::UnityEngine::UIElements::PointerDispatchState*>(value));
}
constexpr ::UnityEngine::UIElements::PointerDispatchState* UnityEngine::UIElements::EventDispatcher::__get__pointerState_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::PointerDispatchState*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PointerDispatchState*> UnityEngine::UIElements::EventDispatcher::__get__pointerState_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::PointerDispatchState*, 0x28>(this);
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_GateCount(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::UIElements::EventDispatcher::__get_m_GateCount()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this);
}
constexpr uint32_t const& UnityEngine::UIElements::EventDispatcher::__get_m_GateCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this);
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_DispatchContexts(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*, 0x38>(this, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* UnityEngine::UIElements::EventDispatcher::__get_m_DispatchContexts()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*> UnityEngine::UIElements::EventDispatcher::__get_m_DispatchContexts() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*, 0x38>(this);
}
inline void UnityEngine::UIElements::EventDispatcher::setStaticF_s_EditorStrategies(::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*,::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*,::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>, "s_EditorStrategies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>(std::forward<::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*,::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*,::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> UnityEngine::UIElements::EventDispatcher::getStaticF_s_EditorStrategies()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*,::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>, "s_EditorStrategies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>();
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_Immediate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__get_m_Immediate()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__get_m_Immediate() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set__processingEvents_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__get__processingEvents_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__get__processingEvents_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
inline ::UnityEngine::UIElements::PointerDispatchState* UnityEngine::UIElements::EventDispatcher::get_pointerState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "get_pointerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDispatchState*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::EventDispatcher::CreateForRuntime(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  strategies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "CreateForRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*, false>(nullptr, ___internal_method, strategies);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::EventDispatcher::New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  strategies)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::EventDispatcher*>(strategies));
}
inline void UnityEngine::UIElements::EventDispatcher::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*  strategies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, strategies);
}
inline bool UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "get_dispatchImmediately",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::set_processingEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "set_processingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventDispatcher::Dispatch(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, panel, dispatchMode);
}
inline void UnityEngine::UIElements::EventDispatcher::CloseGate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "CloseGate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::OpenGate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "OpenGate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEventQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "ProcessEventQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, panel);
}
inline void UnityEngine::UIElements::EventDispatcher::ApplyDispatchingStrategies(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel, bool  imguiEventIsInitiallyUsed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                            "ApplyDispatchingStrategies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, panel, imguiEventIsInitiallyUsed);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
