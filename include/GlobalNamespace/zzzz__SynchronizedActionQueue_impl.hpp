#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::*)(float_t, ::System::Action*)>(&::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe59548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__set_time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__get_time()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__set_action(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__get_action()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::_ctor(float_t  time, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, action);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__SynchronizedActionQueue__SynchronizedAction(float_t  time, ::System::Action*  action) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->time = time;
this->action = action;
}
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe5941c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.EnqueueAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t, ::System::Action*)>(&::GlobalNamespace::SynchronizedActionQueue::EnqueueAction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe5948c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            "EnqueueAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t)>(&::GlobalNamespace::SynchronizedActionQueue::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xe59554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe59668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SynchronizedActionQueue::__set__synchronizedActionQueue(::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>* GlobalNamespace::SynchronizedActionQueue::__get__synchronizedActionQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*> GlobalNamespace::SynchronizedActionQueue::__get__synchronizedActionQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*, 0x10>(this);
}
inline void GlobalNamespace::SynchronizedActionQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SynchronizedActionQueue::EnqueueAction(float_t  time, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            "EnqueueAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, action);
}
inline void GlobalNamespace::SynchronizedActionQueue::Update(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time);
}
inline ::GlobalNamespace::SynchronizedActionQueue* GlobalNamespace::SynchronizedActionQueue::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SynchronizedActionQueue*>());
}
inline void GlobalNamespace::SynchronizedActionQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
