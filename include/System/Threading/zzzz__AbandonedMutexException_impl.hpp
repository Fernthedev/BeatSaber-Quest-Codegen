#pragma once
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Threading/zzzz__AbandonedMutexException_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Threading/zzzz__Mutex_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)()>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x260fa5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x260fac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x260fbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException.SetupException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(&::System::Threading::AbandonedMutexException::SetupException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x260fb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            "SetupException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::AbandonedMutexException::__set__mutexIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::AbandonedMutexException::__get__mutexIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this);
}
constexpr int32_t const& System::Threading::AbandonedMutexException::__get__mutexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this);
}
constexpr void System::Threading::AbandonedMutexException::__set__mutex(::System::Threading::Mutex*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Mutex*, 0x90>(this, std::forward<::System::Threading::Mutex*>(value));
}
constexpr ::System::Threading::Mutex* System::Threading::AbandonedMutexException::__get__mutex()  {
return ::cordl_internals::getInstanceField<::System::Threading::Mutex*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Mutex*> System::Threading::AbandonedMutexException::__get__mutex() const {
return ::cordl_internals::getInstanceField<::System::Threading::Mutex*, 0x90>(this);
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::AbandonedMutexException*>());
}
inline void System::Threading::AbandonedMutexException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(int32_t  location, ::System::Threading::WaitHandle*  handle)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::AbandonedMutexException*>(location, handle));
}
inline void System::Threading::AbandonedMutexException::_ctor(int32_t  location, ::System::Threading::WaitHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, location, handle);
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::AbandonedMutexException*>(info, context));
}
inline void System::Threading::AbandonedMutexException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline void System::Threading::AbandonedMutexException::SetupException(int32_t  location, ::System::Threading::WaitHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(),
                            "SetupException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, location, handle);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
