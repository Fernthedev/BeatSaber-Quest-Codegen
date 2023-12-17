#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServicePointScheduler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Net/zzzz__ServicePointScheduler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.get_Scheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePointScheduler* (::System::Net::__ServicePointScheduler__ConnectionGroup::*)()>(&::System::Net::__ServicePointScheduler__ConnectionGroup::get_Scheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29dafdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "get_Scheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__ConnectionGroup::*)(::System::Net::ServicePointScheduler*, ::StringW)>(&::System::Net::__ServicePointScheduler__ConnectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x29d9530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__ServicePointScheduler__ConnectionGroup::*)()>(&::System::Net::__ServicePointScheduler__ConnectionGroup::IsEmpty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29d9bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.RemoveConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__ConnectionGroup::*)(::System::Net::WebConnection*)>(&::System::Net::__ServicePointScheduler__ConnectionGroup::RemoveConnection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29da2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__ConnectionGroup::*)()>(&::System::Net::__ServicePointScheduler__ConnectionGroup::Cleanup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29da43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__ConnectionGroup::*)()>(&::System::Net::__ServicePointScheduler__ConnectionGroup::Close)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x29dab90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.EnqueueOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__ConnectionGroup::*)(::System::Net::WebOperation*)>(&::System::Net::__ServicePointScheduler__ConnectionGroup::EnqueueOperation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29dab38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "EnqueueOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.GetNextOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebOperation* (::System::Net::__ServicePointScheduler__ConnectionGroup::*)()>(&::System::Net::__ServicePointScheduler__ConnectionGroup::GetNextOperation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x29da704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "GetNextOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.FindIdleConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebConnection* (::System::Net::__ServicePointScheduler__ConnectionGroup::*)(::System::Net::WebOperation*)>(&::System::Net::__ServicePointScheduler__ConnectionGroup::FindIdleConnection)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x29db08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "FindIdleConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__ConnectionGroup.CreateOrReuseConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::System::Net::WebConnection*,bool> (::System::Net::__ServicePointScheduler__ConnectionGroup::*)(::System::Net::WebOperation*, bool)>(&::System::Net::__ServicePointScheduler__ConnectionGroup::CreateOrReuseConnection)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x29da52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "CreateOrReuseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::__ServicePointScheduler__ConnectionGroup::__set__Scheduler_k__BackingField(::System::Net::ServicePointScheduler*  value)  {
::cordl_internals::setInstanceField<::System::Net::ServicePointScheduler*, 0x10>(this, std::forward<::System::Net::ServicePointScheduler*>(value));
}
constexpr ::System::Net::ServicePointScheduler* System::Net::__ServicePointScheduler__ConnectionGroup::__get__Scheduler_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::ServicePointScheduler*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePointScheduler*> System::Net::__ServicePointScheduler__ConnectionGroup::__get__Scheduler_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::ServicePointScheduler*, 0x10>(this);
}
constexpr void System::Net::__ServicePointScheduler__ConnectionGroup::__set__Name_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::__ServicePointScheduler__ConnectionGroup::__get__Name_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Net::__ServicePointScheduler__ConnectionGroup::__get__Name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline void System::Net::__ServicePointScheduler__ConnectionGroup::setStaticF_nextId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::__ServicePointScheduler__ConnectionGroup::getStaticF_nextId()  {
return ::cordl_internals::getStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get>();
}
constexpr void System::Net::__ServicePointScheduler__ConnectionGroup::__set__cordl_ID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__ServicePointScheduler__ConnectionGroup::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Net::__ServicePointScheduler__ConnectionGroup::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Net::__ServicePointScheduler__ConnectionGroup::__set_connections(::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*, 0x28>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* System::Net::__ServicePointScheduler__ConnectionGroup::__get_connections()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*> System::Net::__ServicePointScheduler__ConnectionGroup::__get_connections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*, 0x28>(this);
}
constexpr void System::Net::__ServicePointScheduler__ConnectionGroup::__set_queue(::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*, 0x30>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* System::Net::__ServicePointScheduler__ConnectionGroup::__get_queue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*> System::Net::__ServicePointScheduler__ConnectionGroup::__get_queue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*, 0x30>(this);
}
inline ::System::Net::ServicePointScheduler* System::Net::__ServicePointScheduler__ConnectionGroup::get_Scheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "get_Scheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePointScheduler*, false>(*this, ___internal_method);
}
inline ::System::Net::__ServicePointScheduler__ConnectionGroup* System::Net::__ServicePointScheduler__ConnectionGroup::New_ctor(::System::Net::ServicePointScheduler*  scheduler, ::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__ServicePointScheduler__ConnectionGroup*>(scheduler, name));
}
inline void System::Net::__ServicePointScheduler__ConnectionGroup::_ctor(::System::Net::ServicePointScheduler*  scheduler, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scheduler, name);
}
inline bool System::Net::__ServicePointScheduler__ConnectionGroup::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Net::__ServicePointScheduler__ConnectionGroup::RemoveConnection(::System::Net::WebConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connection);
}
inline void System::Net::__ServicePointScheduler__ConnectionGroup::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::__ServicePointScheduler__ConnectionGroup::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::__ServicePointScheduler__ConnectionGroup::EnqueueOperation(::System::Net::WebOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "EnqueueOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, operation);
}
inline ::System::Net::WebOperation* System::Net::__ServicePointScheduler__ConnectionGroup::GetNextOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "GetNextOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebOperation*, false>(*this, ___internal_method);
}
inline ::System::Net::WebConnection* System::Net::__ServicePointScheduler__ConnectionGroup::FindIdleConnection(::System::Net::WebOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "FindIdleConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebConnection*, false>(*this, ___internal_method, operation);
}
inline ::System::ValueTuple_2<::System::Net::WebConnection*,bool> System::Net::__ServicePointScheduler__ConnectionGroup::CreateOrReuseConnection(::System::Net::WebOperation*  operation, bool  force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(),
                            "CreateOrReuseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Net::WebConnection*,bool>, false>(*this, ___internal_method, operation, force);
}
//  Writing Method size for method: ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::*)()>(&::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29dbaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c._Set_b__4_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::*)(::System::Object*)>(&::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::_Set_b__4_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29dbaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get(),
                            "<Set>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::setStaticF___9(::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get>(std::forward<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>(value));
}
inline ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c* GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get>();
}
inline void GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::setStaticF___9__4_0(::System::Func_2<::System::Object*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get>(std::forward<::System::Func_2<::System::Object*,bool>*>(value));
}
inline ::System::Func_2<::System::Object*,bool>* GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,bool>*, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get>();
}
inline ::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c* GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>());
}
inline void GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c::_Set_b__4_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ServicePointScheduler__AsyncManualResetEvent____c*>::get(),
                            "<Set>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, s);
}
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__AsyncManualResetEvent.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::System::Net::__ServicePointScheduler__AsyncManualResetEvent::*)(int32_t)>(&::System::Net::__ServicePointScheduler__AsyncManualResetEvent::WaitAsync)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29db9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__AsyncManualResetEvent.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__AsyncManualResetEvent::*)()>(&::System::Net::__ServicePointScheduler__AsyncManualResetEvent::Set)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x29d9704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__AsyncManualResetEvent.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__AsyncManualResetEvent::*)()>(&::System::Net::__ServicePointScheduler__AsyncManualResetEvent::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29d9dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler__AsyncManualResetEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler__AsyncManualResetEvent::*)(bool)>(&::System::Net::__ServicePointScheduler__AsyncManualResetEvent::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29d9488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::__ServicePointScheduler__AsyncManualResetEvent::__set_m_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* System::Net::__ServicePointScheduler__AsyncManualResetEvent::__get_m_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> System::Net::__ServicePointScheduler__AsyncManualResetEvent::__get_m_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Net::__ServicePointScheduler__AsyncManualResetEvent::WaitAsync(int32_t  millisecondTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, millisecondTimeout);
}
inline void System::Net::__ServicePointScheduler__AsyncManualResetEvent::Set()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::__ServicePointScheduler__AsyncManualResetEvent::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Net::__ServicePointScheduler__AsyncManualResetEvent* System::Net::__ServicePointScheduler__AsyncManualResetEvent::New_ctor(bool  state)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>(state));
}
inline void System::Net::__ServicePointScheduler__AsyncManualResetEvent::_ctor(bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
//  Writing Method size for method: ::System::Net::__ServicePointScheduler___RunScheduler_d__32.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler___RunScheduler_d__32::*)()>(&::System::Net::__ServicePointScheduler___RunScheduler_d__32::MoveNext)> {
  constexpr static std::size_t size = 0xaf4;
  constexpr static std::size_t addrs = 0x29dbb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___RunScheduler_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler___RunScheduler_d__32.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler___RunScheduler_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__ServicePointScheduler___RunScheduler_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29dc638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___RunScheduler_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::Net::__ServicePointScheduler___RunScheduler_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set___4__this(::System::Net::ServicePointScheduler*  value)  {
::cordl_internals::setInstanceField<::System::Net::ServicePointScheduler*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::ServicePointScheduler*>(value));
}
constexpr ::System::Net::ServicePointScheduler* System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::Net::ServicePointScheduler*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePointScheduler*> System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::ServicePointScheduler*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set__operationArray_5__2(::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>>(value));
}
constexpr ::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__operationArray_5__2()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*> const& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__operationArray_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set__idleArray_5__3(::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>>(value));
}
constexpr ::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__idleArray_5__3()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*> const& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__idleArray_5__3() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set__taskList_5__4(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__taskList_5__4()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*> System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__taskList_5__4() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set__schedulerTask_5__5(::System::Threading::Tasks::Task_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<bool>* System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__schedulerTask_5__5()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__schedulerTask_5__5() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set__finalCleanup_5__6(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__finalCleanup_5__6()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get__finalCleanup_5__6() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___RunScheduler_d__32::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> const& System::Net::__ServicePointScheduler___RunScheduler_d__32::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Net::__ServicePointScheduler___RunScheduler_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___RunScheduler_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::__ServicePointScheduler___RunScheduler_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___RunScheduler_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::ServicePointScheduler*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_operationArray_5__2", ty: "::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_idleArray_5__3", ty: "::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_taskList_5__4", ty: "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_schedulerTask_5__5", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_finalCleanup_5__6", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__ServicePointScheduler___RunScheduler_d__32::__ServicePointScheduler___RunScheduler_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::ServicePointScheduler*  __4__this, ::ArrayW<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>  _operationArray_5__2, ::ArrayW<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>  _idleArray_5__3, ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  _taskList_5__4, ::System::Threading::Tasks::Task_1<bool>*  _schedulerTask_5__5, bool  _finalCleanup_5__6, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_operationArray_5__2 = _operationArray_5__2;
this->_idleArray_5__3 = _idleArray_5__3;
this->_taskList_5__4 = _taskList_5__4;
this->_schedulerTask_5__5 = _schedulerTask_5__5;
this->_finalCleanup_5__6 = _finalCleanup_5__6;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::System::Net::__ServicePointScheduler___WaitAsync_d__46.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler___WaitAsync_d__46::*)()>(&::System::Net::__ServicePointScheduler___WaitAsync_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x29dc644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___WaitAsync_d__46>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__ServicePointScheduler___WaitAsync_d__46.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServicePointScheduler___WaitAsync_d__46::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__ServicePointScheduler___WaitAsync_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29dca90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___WaitAsync_d__46>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::Net::__ServicePointScheduler___WaitAsync_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::Net::__ServicePointScheduler___WaitAsync_d__46::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___WaitAsync_d__46::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___WaitAsync_d__46::__set_millisecondTimeout(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get_millisecondTimeout()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get_millisecondTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___WaitAsync_d__46::__set_workerTask(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::Net::__ServicePointScheduler___WaitAsync_d__46::__get_workerTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::Net::__ServicePointScheduler___WaitAsync_d__46::__get_workerTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___WaitAsync_d__46::__set__cts_5__2(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* System::Net::__ServicePointScheduler___WaitAsync_d__46::__get__cts_5__2()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> System::Net::__ServicePointScheduler___WaitAsync_d__46::__get__cts_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___WaitAsync_d__46::__set__timeoutTask_5__3(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::Net::__ServicePointScheduler___WaitAsync_d__46::__get__timeoutTask_5__3()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::Net::__ServicePointScheduler___WaitAsync_d__46::__get__timeoutTask_5__3() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::__ServicePointScheduler___WaitAsync_d__46::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> const& System::Net::__ServicePointScheduler___WaitAsync_d__46::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Net::__ServicePointScheduler___WaitAsync_d__46::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___WaitAsync_d__46>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::__ServicePointScheduler___WaitAsync_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServicePointScheduler___WaitAsync_d__46>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "millisecondTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_timeoutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__ServicePointScheduler___WaitAsync_d__46::__ServicePointScheduler___WaitAsync_d__46(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, int32_t  millisecondTimeout, ::System::Threading::Tasks::Task*  workerTask, ::System::Threading::CancellationTokenSource*  _cts_5__2, ::System::Threading::Tasks::Task*  _timeoutTask_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->millisecondTimeout = millisecondTimeout;
this->workerTask = workerTask;
this->_cts_5__2 = _cts_5__2;
this->_timeoutTask_5__3 = _timeoutTask_5__3;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::System::Net::ServicePointScheduler.get_ServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint* (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::get_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d9470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.set_ServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::ServicePoint*)>(&::System::Net::ServicePointScheduler::set_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d9478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "set_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.get_MaxIdleTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::get_MaxIdleTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d9480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "get_MaxIdleTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::ServicePoint*, int32_t, int32_t)>(&::System::Net::ServicePointScheduler::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x29d7338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::Run)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29d963c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RunScheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::RunScheduler)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29d9934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RunScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::Cleanup)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x29d9a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RunSchedulerIteration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::RunSchedulerIteration)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x29d9c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RunSchedulerIteration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.OperationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePointScheduler::*)(::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebOperation*)>(&::System::Net::ServicePointScheduler::OperationCompleted)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x29d9f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "OperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.CloseIdleConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::__ServicePointScheduler__ConnectionGroup*, ::System::Net::WebConnection*)>(&::System::Net::ServicePointScheduler::CloseIdleConnection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29da6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "CloseIdleConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.SchedulerIteration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePointScheduler::*)(::System::Net::__ServicePointScheduler__ConnectionGroup*)>(&::System::Net::ServicePointScheduler::SchedulerIteration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29d9e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "SchedulerIteration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RemoveOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebOperation*)>(&::System::Net::ServicePointScheduler::RemoveOperation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x29da7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RemoveOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RemoveIdleConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(&::System::Net::ServicePointScheduler::RemoveIdleConnection)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x29da370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RemoveIdleConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.FinalCleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::FinalCleanup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29da8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "FinalCleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.SendRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebOperation*, ::StringW)>(&::System::Net::ServicePointScheduler::SendRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x29d7f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "SendRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.CloseConnectionGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePointScheduler::*)(::StringW)>(&::System::Net::ServicePointScheduler::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x29d80ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "CloseConnectionGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.GetConnectionGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__ServicePointScheduler__ConnectionGroup* (::System::Net::ServicePointScheduler::*)(::StringW)>(&::System::Net::ServicePointScheduler::GetConnectionGroup)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x29da93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "GetConnectionGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.OnConnectionCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(&::System::Net::ServicePointScheduler::OnConnectionCreated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29daea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "OnConnectionCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.OnConnectionClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(&::System::Net::ServicePointScheduler::OnConnectionClosed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29daeb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "OnConnectionClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::System::Threading::Tasks::Task*, int32_t)>(&::System::Net::ServicePointScheduler::WaitAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29daed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler._Run_b__31_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::_Run_b__31_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29dafd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "<Run>b__31_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::ServicePointScheduler::__set__ServicePoint_k__BackingField(::System::Net::ServicePoint*  value)  {
::cordl_internals::setInstanceField<::System::Net::ServicePoint*, 0x10>(this, std::forward<::System::Net::ServicePoint*>(value));
}
constexpr ::System::Net::ServicePoint* System::Net::ServicePointScheduler::__get__ServicePoint_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::ServicePoint*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePoint*> System::Net::ServicePointScheduler::__get__ServicePoint_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::ServicePoint*, 0x10>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_running(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::ServicePointScheduler::__get_running()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Net::ServicePointScheduler::__get_running() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_maxIdleTime(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::ServicePointScheduler::__get_maxIdleTime()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Net::ServicePointScheduler::__get_maxIdleTime() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_schedulerEvent(::System::Net::__ServicePointScheduler__AsyncManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*, 0x20>(this, std::forward<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*>(value));
}
constexpr ::System::Net::__ServicePointScheduler__AsyncManualResetEvent* System::Net::ServicePointScheduler::__get_schedulerEvent()  {
return ::cordl_internals::getInstanceField<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*> System::Net::ServicePointScheduler::__get_schedulerEvent() const {
return ::cordl_internals::getInstanceField<::System::Net::__ServicePointScheduler__AsyncManualResetEvent*, 0x20>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_defaultGroup(::System::Net::__ServicePointScheduler__ConnectionGroup*  value)  {
::cordl_internals::setInstanceField<::System::Net::__ServicePointScheduler__ConnectionGroup*, 0x28>(this, std::forward<::System::Net::__ServicePointScheduler__ConnectionGroup*>(value));
}
constexpr ::System::Net::__ServicePointScheduler__ConnectionGroup* System::Net::ServicePointScheduler::__get_defaultGroup()  {
return ::cordl_internals::getInstanceField<::System::Net::__ServicePointScheduler__ConnectionGroup*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__ServicePointScheduler__ConnectionGroup*> System::Net::ServicePointScheduler::__get_defaultGroup() const {
return ::cordl_internals::getInstanceField<::System::Net::__ServicePointScheduler__ConnectionGroup*, 0x28>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_groups(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::__ServicePointScheduler__ConnectionGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::__ServicePointScheduler__ConnectionGroup*>*, 0x30>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::__ServicePointScheduler__ConnectionGroup*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::__ServicePointScheduler__ConnectionGroup*>* System::Net::ServicePointScheduler::__get_groups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::__ServicePointScheduler__ConnectionGroup*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::__ServicePointScheduler__ConnectionGroup*>*> System::Net::ServicePointScheduler::__get_groups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::__ServicePointScheduler__ConnectionGroup*>*, 0x30>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_operations(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*, 0x38>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>* System::Net::ServicePointScheduler::__get_operations()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*> System::Net::ServicePointScheduler::__get_operations() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebOperation*>>*, 0x38>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_idleConnections(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*, 0x40>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>* System::Net::ServicePointScheduler::__get_idleConnections()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*> System::Net::ServicePointScheduler::__get_idleConnections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::__ServicePointScheduler__ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*, 0x40>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_currentConnections(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::ServicePointScheduler::__get_currentConnections()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& System::Net::ServicePointScheduler::__get_currentConnections() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_connectionLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::ServicePointScheduler::__get_connectionLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr int32_t const& System::Net::ServicePointScheduler::__get_connectionLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr void System::Net::ServicePointScheduler::__set_idleSince(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x50>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& System::Net::ServicePointScheduler::__get_idleSince()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x50>(this);
}
constexpr ::System::DateTime const& System::Net::ServicePointScheduler::__get_idleSince() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x50>(this);
}
inline void System::Net::ServicePointScheduler::setStaticF_nextId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointScheduler::getStaticF_nextId()  {
return ::cordl_internals::getStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get>();
}
constexpr void System::Net::ServicePointScheduler::__set__cordl_ID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::ServicePointScheduler::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& System::Net::ServicePointScheduler::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
inline ::System::Net::ServicePoint* System::Net::ServicePointScheduler::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*, false>(*this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::set_ServicePoint(::System::Net::ServicePoint*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "set_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t System::Net::ServicePointScheduler::get_MaxIdleTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "get_MaxIdleTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Net::ServicePointScheduler* System::Net::ServicePointScheduler::New_ctor(::System::Net::ServicePoint*  servicePoint, int32_t  connectionLimit, int32_t  maxIdleTime)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::ServicePointScheduler*>(servicePoint, connectionLimit, maxIdleTime));
}
inline void System::Net::ServicePointScheduler::_ctor(::System::Net::ServicePoint*  servicePoint, int32_t  connectionLimit, int32_t  maxIdleTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, servicePoint, connectionLimit, maxIdleTime);
}
inline void System::Net::ServicePointScheduler::Run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::ServicePointScheduler::RunScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RunScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::RunSchedulerIteration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RunSchedulerIteration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Net::ServicePointScheduler::OperationCompleted(::System::Net::__ServicePointScheduler__ConnectionGroup*  group, ::System::Net::WebOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "OperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, group, operation);
}
inline void System::Net::ServicePointScheduler::CloseIdleConnection(::System::Net::__ServicePointScheduler__ConnectionGroup*  group, ::System::Net::WebConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "CloseIdleConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, group, connection);
}
inline bool System::Net::ServicePointScheduler::SchedulerIteration(::System::Net::__ServicePointScheduler__ConnectionGroup*  group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "SchedulerIteration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ServicePointScheduler__ConnectionGroup*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, group);
}
inline void System::Net::ServicePointScheduler::RemoveOperation(::System::Net::WebOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RemoveOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, operation);
}
inline void System::Net::ServicePointScheduler::RemoveIdleConnection(::System::Net::WebConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "RemoveIdleConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connection);
}
inline void System::Net::ServicePointScheduler::FinalCleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "FinalCleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::SendRequest(::System::Net::WebOperation*  operation, ::StringW  groupName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "SendRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, operation, groupName);
}
inline bool System::Net::ServicePointScheduler::CloseConnectionGroup(::StringW  groupName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "CloseConnectionGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, groupName);
}
inline ::System::Net::__ServicePointScheduler__ConnectionGroup* System::Net::ServicePointScheduler::GetConnectionGroup(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "GetConnectionGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__ServicePointScheduler__ConnectionGroup*, false>(*this, ___internal_method, name);
}
inline void System::Net::ServicePointScheduler::OnConnectionCreated(::System::Net::WebConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "OnConnectionCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connection);
}
inline void System::Net::ServicePointScheduler::OnConnectionClosed(::System::Net::WebConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "OnConnectionClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connection);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Net::ServicePointScheduler::WaitAsync(::System::Threading::Tasks::Task*  workerTask, int32_t  millisecondTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, workerTask, millisecondTimeout);
}
inline ::System::Threading::Tasks::Task* System::Net::ServicePointScheduler::_Run_b__31_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                            "<Run>b__31_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
