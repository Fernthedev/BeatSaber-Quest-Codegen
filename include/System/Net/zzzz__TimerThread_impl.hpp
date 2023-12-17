#pragma once
#include "System/Net/zzzz__TimerThread_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Net::__TimerThread__Queue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Queue::*)(int32_t)>(&::System::Net::__TimerThread__Queue::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29aa210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Queue.get_Duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__TimerThread__Queue::*)()>(&::System::Net::__TimerThread__Queue::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                            "get_Duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Queue.CreateTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Timer* (::System::Net::__TimerThread__Queue::*)(::System::Net::__TimerThread__Callback*, ::System::Object*)>(&::System::Net::__TimerThread__Queue::CreateTimer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::__TimerThread__Queue::__set_m_DurationMilliseconds(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__TimerThread__Queue::__get_m_DurationMilliseconds()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Net::__TimerThread__Queue::__get_m_DurationMilliseconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline ::System::Net::__TimerThread__Queue* System::Net::__TimerThread__Queue::New_ctor(int32_t  durationMilliseconds)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__Queue*>(durationMilliseconds));
}
inline void System::Net::__TimerThread__Queue::_ctor(int32_t  durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, durationMilliseconds);
}
inline int32_t System::Net::__TimerThread__Queue::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                            "get_Duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__Queue::CreateTimer(::System::Net::__TimerThread__Callback*  callback, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                            "CreateTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Callback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Timer*, false>(*this, ___internal_method, callback, context);
}
//  Writing Method size for method: ::System::Net::__TimerThread__Timer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Timer::*)(int32_t)>(&::System::Net::__TimerThread__Timer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29aa240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.get_StartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::get_StartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "get_StartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.get_Expiration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::get_Expiration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29aa27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "get_Expiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::Cancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.get_HasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::get_HasExpired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29aa288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::__TimerThread__Timer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Net::__TimerThread__Timer::__set_m_StartTimeMilliseconds(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__TimerThread__Timer::__get_m_StartTimeMilliseconds()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Net::__TimerThread__Timer::__get_m_StartTimeMilliseconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Net::__TimerThread__Timer::__set_m_DurationMilliseconds(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__TimerThread__Timer::__get_m_DurationMilliseconds()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Net::__TimerThread__Timer::__get_m_DurationMilliseconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__Timer::New_ctor(int32_t  durationMilliseconds)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__Timer*>(durationMilliseconds));
}
inline void System::Net::__TimerThread__Timer::_ctor(int32_t  durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, durationMilliseconds);
}
inline int32_t System::Net::__TimerThread__Timer::get_StartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "get_StartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Net::__TimerThread__Timer::get_Expiration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "get_Expiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Net::__TimerThread__Timer::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Net::__TimerThread__Timer::get_HasExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "get_HasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Net::__TimerThread__Timer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Net::__TimerThread__Callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Callback::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::System::Net::__TimerThread__Callback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29aa294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Callback::*)(::System::Net::__TimerThread__Timer*, int32_t, ::System::Object*)>(&::System::Net::__TimerThread__Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29aa3c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::System::Net::__TimerThread__Callback* System::Net::__TimerThread__Callback::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__Callback*>(object, method));
}
inline void System::Net::__TimerThread__Callback::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void System::Net::__TimerThread__Callback::Invoke(::System::Net::__TimerThread__Timer*  timer, int32_t  timeNoticed, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Timer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timer, timeNoticed, context);
}
//  Writing Method size for method: ::System::Net::__TimerThread__TimerQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerQueue::*)(int32_t)>(&::System::Net::__TimerThread__TimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29a8bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerQueue.CreateTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Timer* (::System::Net::__TimerThread__TimerQueue::*)(::System::Net::__TimerThread__Callback*, ::System::Object*)>(&::System::Net::__TimerThread__TimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x29aa408;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerQueue.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerQueue::*)(ByRef<int32_t>)>(&::System::Net::__TimerThread__TimerQueue::Fire)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x29a9edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::__TimerThread__TimerQueue::__set_m_ThisHandle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Net::__TimerThread__TimerQueue::__get_m_ThisHandle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Net::__TimerThread__TimerQueue::__get_m_ThisHandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this);
}
constexpr void System::Net::__TimerThread__TimerQueue::__set_m_Timers(::System::Net::__TimerThread__TimerNode*  value)  {
::cordl_internals::setInstanceField<::System::Net::__TimerThread__TimerNode*, 0x20>(this, std::forward<::System::Net::__TimerThread__TimerNode*>(value));
}
constexpr ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerQueue::__get_m_Timers()  {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__TimerNode*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> System::Net::__TimerThread__TimerQueue::__get_m_Timers() const {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__TimerNode*, 0x20>(this);
}
inline ::System::Net::__TimerThread__TimerQueue* System::Net::__TimerThread__TimerQueue::New_ctor(int32_t  durationMilliseconds)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__TimerQueue*>(durationMilliseconds));
}
inline void System::Net::__TimerThread__TimerQueue::_ctor(int32_t  durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, durationMilliseconds);
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__TimerQueue::CreateTimer(::System::Net::__TimerThread__Callback*  callback, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                            "CreateTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Callback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Timer*, false>(*this, ___internal_method, callback, context);
}
inline bool System::Net::__TimerThread__TimerQueue::Fire(ByRef<int32_t>  nextExpiration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, nextExpiration);
}
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimerQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__InfiniteTimerQueue::*)()>(&::System::Net::__TimerThread__InfiniteTimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29a8bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimerQueue.CreateTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Timer* (::System::Net::__TimerThread__InfiniteTimerQueue::*)(::System::Net::__TimerThread__Callback*, ::System::Object*)>(&::System::Net::__TimerThread__InfiniteTimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29aa8e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline ::System::Net::__TimerThread__InfiniteTimerQueue* System::Net::__TimerThread__InfiniteTimerQueue::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__InfiniteTimerQueue*>());
}
inline void System::Net::__TimerThread__InfiniteTimerQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__InfiniteTimerQueue::CreateTimer(::System::Net::__TimerThread__Callback*  callback, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(),
                            "CreateTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Callback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Timer*, false>(*this, ___internal_method, callback, context);
}
constexpr void GlobalNamespace::__TimerThread__TimerNode__TimerState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TimerThread__TimerNode__TimerState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__TimerThread__TimerNode__TimerState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState::__TimerThread__TimerNode__TimerState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState  GlobalNamespace::__TimerThread__TimerNode__TimerState::Ready{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState  GlobalNamespace::__TimerThread__TimerNode__TimerState::Fired{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState  GlobalNamespace::__TimerThread__TimerNode__TimerState::Cancelled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState  GlobalNamespace::__TimerThread__TimerNode__TimerState::Sentinel{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)(::System::Net::__TimerThread__Callback*, ::System::Object*, int32_t, ::System::Object*)>(&::System::Net::__TimerThread__TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29aa614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Callback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29aa3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.get_HasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::get_HasExpired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29aa984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.get_Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__TimerNode* (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "get_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.set_Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)(::System::Net::__TimerThread__TimerNode*)>(&::System::Net::__TimerThread__TimerNode::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "set_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.get_Prev
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__TimerNode* (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::get_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "get_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.set_Prev
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)(::System::Net::__TimerThread__TimerNode*)>(&::System::Net::__TimerThread__TimerNode::set_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "set_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::Cancel)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x29aa9b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::Fire)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x29aa66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::__TimerThread__TimerNode::__set_m_TimerState(::GlobalNamespace::__TimerThread__TimerNode__TimerState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__TimerThread__TimerNode__TimerState, 0x18>(this, std::forward<::GlobalNamespace::__TimerThread__TimerNode__TimerState>(value));
}
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState& System::Net::__TimerThread__TimerNode::__get_m_TimerState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TimerThread__TimerNode__TimerState, 0x18>(this);
}
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState const& System::Net::__TimerThread__TimerNode::__get_m_TimerState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TimerThread__TimerNode__TimerState, 0x18>(this);
}
constexpr void System::Net::__TimerThread__TimerNode::__set_m_Callback(::System::Net::__TimerThread__Callback*  value)  {
::cordl_internals::setInstanceField<::System::Net::__TimerThread__Callback*, 0x20>(this, std::forward<::System::Net::__TimerThread__Callback*>(value));
}
constexpr ::System::Net::__TimerThread__Callback* System::Net::__TimerThread__TimerNode::__get_m_Callback()  {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__Callback*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__Callback*> System::Net::__TimerThread__TimerNode::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__Callback*, 0x20>(this);
}
constexpr void System::Net::__TimerThread__TimerNode::__set_m_Context(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Net::__TimerThread__TimerNode::__get_m_Context()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Net::__TimerThread__TimerNode::__get_m_Context() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void System::Net::__TimerThread__TimerNode::__set_m_QueueLock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x30>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Net::__TimerThread__TimerNode::__get_m_QueueLock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Net::__TimerThread__TimerNode::__get_m_QueueLock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr void System::Net::__TimerThread__TimerNode::__set_next(::System::Net::__TimerThread__TimerNode*  value)  {
::cordl_internals::setInstanceField<::System::Net::__TimerThread__TimerNode*, 0x38>(this, std::forward<::System::Net::__TimerThread__TimerNode*>(value));
}
constexpr ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__TimerNode*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> System::Net::__TimerThread__TimerNode::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__TimerNode*, 0x38>(this);
}
constexpr void System::Net::__TimerThread__TimerNode::__set_prev(::System::Net::__TimerThread__TimerNode*  value)  {
::cordl_internals::setInstanceField<::System::Net::__TimerThread__TimerNode*, 0x40>(this, std::forward<::System::Net::__TimerThread__TimerNode*>(value));
}
constexpr ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::__get_prev()  {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__TimerNode*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> System::Net::__TimerThread__TimerNode::__get_prev() const {
return ::cordl_internals::getInstanceField<::System::Net::__TimerThread__TimerNode*, 0x40>(this);
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::New_ctor(::System::Net::__TimerThread__Callback*  callback, ::System::Object*  context, int32_t  durationMilliseconds, ::System::Object*  queueLock)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__TimerNode*>(callback, context, durationMilliseconds, queueLock));
}
inline void System::Net::__TimerThread__TimerNode::_ctor(::System::Net::__TimerThread__Callback*  callback, ::System::Object*  context, int32_t  durationMilliseconds, ::System::Object*  queueLock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Callback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, context, durationMilliseconds, queueLock);
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__TimerNode*>());
}
inline void System::Net::__TimerThread__TimerNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Net::__TimerThread__TimerNode::get_HasExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "get_HasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::get_Next()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "get_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__TimerNode*, false>(*this, ___internal_method);
}
inline void System::Net::__TimerThread__TimerNode::set_Next(::System::Net::__TimerThread__TimerNode*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "set_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::get_Prev()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "get_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__TimerNode*, false>(*this, ___internal_method);
}
inline void System::Net::__TimerThread__TimerNode::set_Prev(::System::Net::__TimerThread__TimerNode*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "set_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool System::Net::__TimerThread__TimerNode::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Net::__TimerThread__TimerNode::Fire()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__InfiniteTimer::*)()>(&::System::Net::__TimerThread__InfiniteTimer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29aa958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimer.get_HasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__InfiniteTimer::*)()>(&::System::Net::__TimerThread__InfiniteTimer::get_HasExpired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aaaec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimer.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__InfiniteTimer::*)()>(&::System::Net::__TimerThread__InfiniteTimer::Cancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29aaaf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::__TimerThread__InfiniteTimer::__set_cancelled(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__TimerThread__InfiniteTimer::__get_cancelled()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Net::__TimerThread__InfiniteTimer::__get_cancelled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::System::Net::__TimerThread__InfiniteTimer* System::Net::__TimerThread__InfiniteTimer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__TimerThread__InfiniteTimer*>());
}
inline void System::Net::__TimerThread__InfiniteTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Net::__TimerThread__InfiniteTimer::get_HasExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                            "get_HasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Net::__TimerThread__InfiniteTimer::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Net::TimerThread.CreateQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Queue* (*)(int32_t)>(&::System::Net::TimerThread::CreateQueue)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x29a4204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "CreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.GetOrCreateQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Queue* (*)(int32_t)>(&::System::Net::TimerThread::GetOrCreateQueue)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x29a8c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "GetOrCreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.Prod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::TimerThread::Prod)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29a9600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "Prod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.ThreadProc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::TimerThread::ThreadProc)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x29a9714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "ThreadProc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.StopTimerThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::TimerThread::StopTimerThread)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29aa0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "StopTimerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.IsTickBetween
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::System::Net::TimerThread::IsTickBetween)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29aa0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "IsTickBetween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.OnDomainUnload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::EventArgs*)>(&::System::Net::TimerThread::OnDomainUnload)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29aa14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "OnDomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void System::Net::TimerThread::setStaticF_s_Queues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_Queues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* System::Net::TimerThread::getStaticF_s_Queues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_Queues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_NewQueues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_NewQueues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* System::Net::TimerThread::getStaticF_s_NewQueues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_NewQueues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadState(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ThreadState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::TimerThread::getStaticF_s_ThreadState()  {
return ::cordl_internals::getStaticField<int32_t, "s_ThreadState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadReadyEvent(::System::Threading::AutoResetEvent*  value)  {
::cordl_internals::setStaticField<::System::Threading::AutoResetEvent*, "s_ThreadReadyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<::System::Threading::AutoResetEvent*>(value));
}
inline ::System::Threading::AutoResetEvent* System::Net::TimerThread::getStaticF_s_ThreadReadyEvent()  {
return ::cordl_internals::getStaticField<::System::Threading::AutoResetEvent*, "s_ThreadReadyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadShutdownEvent(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setStaticField<::System::Threading::ManualResetEvent*, "s_ThreadShutdownEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<::System::Threading::ManualResetEvent*>(value));
}
inline ::System::Threading::ManualResetEvent* System::Net::TimerThread::getStaticF_s_ThreadShutdownEvent()  {
return ::cordl_internals::getStaticField<::System::Threading::ManualResetEvent*, "s_ThreadShutdownEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadEvents(::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*>, "s_ThreadEvents", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*>>(value));
}
inline ::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*> System::Net::TimerThread::getStaticF_s_ThreadEvents()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::WaitHandle*,::Array<::System::Threading::WaitHandle*>*>, "s_ThreadEvents", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_CacheScanIteration(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CacheScanIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::TimerThread::getStaticF_s_CacheScanIteration()  {
return ::cordl_internals::getStaticField<int32_t, "s_CacheScanIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_QueuesCache(::System::Collections::Hashtable*  value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_QueuesCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Net::TimerThread::getStaticF_s_QueuesCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_QueuesCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline ::System::Net::__TimerThread__Queue* System::Net::TimerThread::CreateQueue(int32_t  durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "CreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Queue*, false>(nullptr, ___internal_method, durationMilliseconds);
}
inline ::System::Net::__TimerThread__Queue* System::Net::TimerThread::GetOrCreateQueue(int32_t  durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "GetOrCreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Queue*, false>(nullptr, ___internal_method, durationMilliseconds);
}
inline void System::Net::TimerThread::Prod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "Prod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Net::TimerThread::ThreadProc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "ThreadProc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Net::TimerThread::StopTimerThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "StopTimerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::Net::TimerThread::IsTickBetween(int32_t  start, int32_t  end, int32_t  comparand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "IsTickBetween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, start, end, comparand);
}
inline void System::Net::TimerThread::OnDomainUnload(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(),
                            "OnDomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, e);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
