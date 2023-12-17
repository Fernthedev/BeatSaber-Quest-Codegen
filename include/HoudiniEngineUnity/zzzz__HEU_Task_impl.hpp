#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_Task__TaskStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_Task__TaskStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_Task__TaskStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus::__HEU_Task__TaskStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus  HoudiniEngineUnity::__HEU_Task__TaskStatus::NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus  HoudiniEngineUnity::__HEU_Task__TaskStatus::PENDING_START{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus  HoudiniEngineUnity::__HEU_Task__TaskStatus::STARTED{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus  HoudiniEngineUnity::__HEU_Task__TaskStatus::REQUIRE_UPDATE{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus  HoudiniEngineUnity::__HEU_Task__TaskStatus::PENDING_COMPLETE{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus  HoudiniEngineUnity::__HEU_Task__TaskStatus::COMPLETED{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus  HoudiniEngineUnity::__HEU_Task__TaskStatus::UNUSED{static_cast<int32_t>(0x6)};
constexpr void HoudiniEngineUnity::__HEU_Task__TaskResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_Task__TaskResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_Task__TaskResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult::__HEU_Task__TaskResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult  HoudiniEngineUnity::__HEU_Task__TaskResult::NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult  HoudiniEngineUnity::__HEU_Task__TaskResult::SUCCESS{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult  HoudiniEngineUnity::__HEU_Task__TaskResult::FAILED{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult  HoudiniEngineUnity::__HEU_Task__TaskResult::KILLED{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::HoudiniEngineUnity::__HEU_Task__TaskCallback::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x21aa6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::HoudiniEngineUnity::HEU_Task*)>(&::HoudiniEngineUnity::__HEU_Task__TaskCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21aa808;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::HoudiniEngineUnity::HEU_Task*, ::System::AsyncCallback*, ::System::Object*)>(&::HoudiniEngineUnity::__HEU_Task__TaskCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21aa81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::System::IAsyncResult*)>(&::HoudiniEngineUnity::__HEU_Task__TaskCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21aa83c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::__HEU_Task__TaskCallback* HoudiniEngineUnity::__HEU_Task__TaskCallback::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>(object, method));
}
inline void HoudiniEngineUnity::__HEU_Task__TaskCallback::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::__HEU_Task__TaskCallback::Invoke(::HoudiniEngineUnity::HEU_Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::__HEU_Task__TaskCallback::BeginInvoke(::HoudiniEngineUnity::HEU_Task*  task, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, task, callback, object);
}
inline void HoudiniEngineUnity::__HEU_Task__TaskCallback::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.get_TaskGuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::get_TaskGuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21aa6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            "get_TaskGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21aa6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.DoTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::DoTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.UpdateTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::UpdateTask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21aa6d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.KillTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::KillTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.CompleteTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)(::HoudiniEngineUnity::__HEU_Task__TaskResult)>(&::HoudiniEngineUnity::HEU_Task::CompleteTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_Task::__set__status(::HoudiniEngineUnity::__HEU_Task__TaskStatus  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskStatus, 0x10>(this, std::forward<::HoudiniEngineUnity::__HEU_Task__TaskStatus>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus& HoudiniEngineUnity::HEU_Task::__get__status()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskStatus, 0x10>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus const& HoudiniEngineUnity::HEU_Task::__get__status() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskStatus, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_Task::__set__result(::HoudiniEngineUnity::__HEU_Task__TaskResult  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskResult, 0x14>(this, std::forward<::HoudiniEngineUnity::__HEU_Task__TaskResult>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult& HoudiniEngineUnity::HEU_Task::__get__result()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskResult, 0x14>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult const& HoudiniEngineUnity::HEU_Task::__get__result() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskResult, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_Task::__set__guid(::System::Guid  value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x18>(this, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid& HoudiniEngineUnity::HEU_Task::__get__guid()  {
return ::cordl_internals::getInstanceField<::System::Guid, 0x18>(this);
}
constexpr ::System::Guid const& HoudiniEngineUnity::HEU_Task::__get__guid() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_Task::__set__taskCompletedDelegate(::HoudiniEngineUnity::__HEU_Task__TaskCallback*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskCallback*, 0x28>(this, std::forward<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskCallback* HoudiniEngineUnity::HEU_Task::__get__taskCompletedDelegate()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskCallback*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_Task__TaskCallback*> HoudiniEngineUnity::HEU_Task::__get__taskCompletedDelegate() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Task__TaskCallback*, 0x28>(this);
}
inline ::System::Guid HoudiniEngineUnity::HEU_Task::get_TaskGuid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            "get_TaskGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Task* HoudiniEngineUnity::HEU_Task::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_Task*>());
}
inline void HoudiniEngineUnity::HEU_Task::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::DoTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            "DoTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::UpdateTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            "UpdateTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::KillTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            "KillTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::CompleteTask(::HoudiniEngineUnity::__HEU_Task__TaskResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                            "CompleteTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Task__TaskResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
