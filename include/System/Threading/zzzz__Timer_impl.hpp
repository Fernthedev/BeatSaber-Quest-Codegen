#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::System::Threading::__Timer__TimerComparer.System_Collections_IComparer_Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::__Timer__TimerComparer::*)(::System::Object*, ::System::Object*)>(&::System::Threading::__Timer__TimerComparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x262002c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(),
                            "System.Collections.IComparer.Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__TimerComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::__Timer__TimerComparer::*)(::System::Threading::Timer*, ::System::Threading::Timer*)>(&::System::Threading::__Timer__TimerComparer::Compare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26200c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr  System::Threading::__Timer__TimerComparer::operator ::System::Collections::IComparer*()  {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr  System::Threading::__Timer__TimerComparer::operator ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline int32_t System::Threading::__Timer__TimerComparer::System_Collections_IComparer_Compare(::System::Object*  x, ::System::Object*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(),
                            "System.Collections.IComparer.Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, x, y);
}
inline int32_t System::Threading::__Timer__TimerComparer::Compare(::System::Threading::Timer*  tx, ::System::Threading::Timer*  ty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__TimerComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, tx, ty);
}
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.InitScheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::InitScheduler)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2620134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "InitScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.WakeupScheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::WakeupScheduler)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2620228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "WakeupScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.SchedulerThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::SchedulerThread)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2620244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "SchedulerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::__Timer__Scheduler* (*)()>(&::System::Threading::__Timer__Scheduler::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2620690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26206e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::__Timer__Scheduler::Remove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x261fd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*, int64_t)>(&::System::Threading::__Timer__Scheduler::Change)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x261fe04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::__Timer__Scheduler::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26207b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.InternalRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::__Timer__Scheduler::InternalRemove)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2620784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "InternalRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.TimerCB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::__Timer__Scheduler::TimerCB)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26208a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "TimerCB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.FireTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__Timer__Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::__Timer__Scheduler::FireTimer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x262091c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "FireTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__Timer__Scheduler.RunSchedulerLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::__Timer__Scheduler::*)()>(&::System::Threading::__Timer__Scheduler::RunSchedulerLoop)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x262037c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "RunSchedulerLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void System::Threading::__Timer__Scheduler::setStaticF_instance(::System::Threading::__Timer__Scheduler*  value)  {
::cordl_internals::setStaticField<::System::Threading::__Timer__Scheduler*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get>(std::forward<::System::Threading::__Timer__Scheduler*>(value));
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::__Timer__Scheduler::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::System::Threading::__Timer__Scheduler*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get>();
}
constexpr void System::Threading::__Timer__Scheduler::__set_needReSort(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::__Timer__Scheduler::__get_needReSort()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Threading::__Timer__Scheduler::__get_needReSort() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Threading::__Timer__Scheduler::__set_list(::System::Collections::Generic::List_1<::System::Threading::Timer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Threading::Timer*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::System::Threading::Timer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Timer*>* System::Threading::__Timer__Scheduler::__get_list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Threading::Timer*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::Timer*>*> System::Threading::__Timer__Scheduler::__get_list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Threading::Timer*>*, 0x18>(this);
}
constexpr void System::Threading::__Timer__Scheduler::__set_current_next_run(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Threading::__Timer__Scheduler::__get_current_next_run()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& System::Threading::__Timer__Scheduler::__get_current_next_run() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void System::Threading::__Timer__Scheduler::__set_changed(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* System::Threading::__Timer__Scheduler::__get_changed()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> System::Threading::__Timer__Scheduler::__get_changed() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this);
}
inline void System::Threading::__Timer__Scheduler::InitScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "InitScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::__Timer__Scheduler::WakeupScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "WakeupScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::__Timer__Scheduler::SchedulerThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "SchedulerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::__Timer__Scheduler::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::__Timer__Scheduler*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::__Timer__Scheduler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__Timer__Scheduler*>());
}
inline void System::Threading::__Timer__Scheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::__Timer__Scheduler::Remove(::System::Threading::Timer*  timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timer);
}
inline void System::Threading::__Timer__Scheduler::Change(::System::Threading::Timer*  timer, int64_t  new_next_run)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timer, new_next_run);
}
inline void System::Threading::__Timer__Scheduler::Add(::System::Threading::Timer*  timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timer);
}
inline void System::Threading::__Timer__Scheduler::InternalRemove(::System::Threading::Timer*  timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "InternalRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timer);
}
inline void System::Threading::__Timer__Scheduler::TimerCB(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "TimerCB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
inline void System::Threading::__Timer__Scheduler::FireTimer(::System::Threading::Timer*  timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "FireTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timer);
}
inline int32_t System::Threading::__Timer__Scheduler::RunSchedulerLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__Timer__Scheduler*>::get(),
                            "RunSchedulerLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Timer.get_scheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::__Timer__Scheduler* (*)()>(&::System::Threading::Timer::get_scheduler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x261f8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "get_scheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int32_t, int32_t)>(&::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x261f934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::TimeSpan)>(&::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x261f9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int64_t, int64_t)>(&::System::Threading::Timer::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x261f980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(int32_t, int32_t)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x261fc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x261fc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x261fcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(int64_t, int64_t, bool)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x261fa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Threading::Timer::*)()>(&::System::Threading::Timer::DisposeAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x261ff94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.KeepRootedWhileScheduled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::KeepRootedWhileScheduled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2620028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "KeepRootedWhileScheduled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.GetTimeMonotonic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::System::Threading::Timer::GetTimeMonotonic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261fe00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "GetTimeMonotonic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Threading::Timer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr  System::Threading::Timer::operator ::System::IAsyncDisposable*() noexcept {
return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
constexpr void System::Threading::Timer::__set_callback(::System::Threading::TimerCallback*  value)  {
::cordl_internals::setInstanceField<::System::Threading::TimerCallback*, 0x18>(this, std::forward<::System::Threading::TimerCallback*>(value));
}
constexpr ::System::Threading::TimerCallback* System::Threading::Timer::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Threading::TimerCallback*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::TimerCallback*> System::Threading::Timer::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Threading::TimerCallback*, 0x18>(this);
}
constexpr void System::Threading::Timer::__set_state(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::Timer::__get_state()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::Timer::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::Threading::Timer::__set_due_time_ms(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Threading::Timer::__get_due_time_ms()  {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr int64_t const& System::Threading::Timer::__get_due_time_ms() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr void System::Threading::Timer::__set_period_ms(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Threading::Timer::__get_period_ms()  {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
constexpr int64_t const& System::Threading::Timer::__get_period_ms() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
constexpr void System::Threading::Timer::__set_next_run(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Threading::Timer::__get_next_run()  {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this);
}
constexpr int64_t const& System::Threading::Timer::__get_next_run() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this);
}
constexpr void System::Threading::Timer::__set_disposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::Timer::__get_disposed()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& System::Threading::Timer::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void System::Threading::Timer::__set_is_dead(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::Timer::__get_is_dead()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& System::Threading::Timer::__get_is_dead() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr void System::Threading::Timer::__set_is_added(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x42>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::Timer::__get_is_added()  {
return ::cordl_internals::getInstanceField<bool, 0x42>(this);
}
constexpr bool const& System::Threading::Timer::__get_is_added() const {
return ::cordl_internals::getInstanceField<bool, 0x42>(this);
}
inline ::System::Threading::__Timer__Scheduler* System::Threading::Timer::get_scheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "get_scheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::__Timer__Scheduler*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback*  callback, ::System::Object*  state, int32_t  dueTime, int32_t  period)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Timer*>(callback, state, dueTime, period));
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback*  callback, ::System::Object*  state, int32_t  dueTime, int32_t  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, state, dueTime, period);
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback*  callback, ::System::Object*  state, ::System::TimeSpan  dueTime, ::System::TimeSpan  period)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Timer*>(callback, state, dueTime, period));
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback*  callback, ::System::Object*  state, ::System::TimeSpan  dueTime, ::System::TimeSpan  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, state, dueTime, period);
}
inline void System::Threading::Timer::Init(::System::Threading::TimerCallback*  callback, ::System::Object*  state, int64_t  dueTime, int64_t  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, state, dueTime, period);
}
inline bool System::Threading::Timer::Change(int32_t  dueTime, int32_t  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, dueTime, period);
}
inline bool System::Threading::Timer::Change(::System::TimeSpan  dueTime, ::System::TimeSpan  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, dueTime, period);
}
inline void System::Threading::Timer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Threading::Timer::Change(int64_t  dueTime, int64_t  period, bool  first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, dueTime, period, first);
}
inline ::System::Threading::Tasks::ValueTask System::Threading::Timer::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(*this, ___internal_method);
}
inline void System::Threading::Timer::KeepRootedWhileScheduled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "KeepRootedWhileScheduled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int64_t System::Threading::Timer::GetTimeMonotonic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(),
                            "GetTimeMonotonic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
