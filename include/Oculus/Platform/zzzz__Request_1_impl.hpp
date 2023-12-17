#pragma once
#include "Oculus/Platform/zzzz__Request_impl.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Request_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Request_1<bool>::*)(uint64_t)>(&::Oculus::Platform::Request_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request_1<bool>.OnComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<bool>* (::Oculus::Platform::Request_1<bool>::*)(::Oculus::Platform::__Message_1__Callback<bool>*)>(&::Oculus::Platform::Request_1<bool>::OnComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<bool>*>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request_1<bool>.HandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Request_1<bool>::*)(::Oculus::Platform::Message*)>(&::Oculus::Platform::Request_1<bool>::HandleMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<bool>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Request_1<bool>::__set_callback_(::Oculus::Platform::__Message_1__Callback<bool>*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::__Message_1__Callback<bool>*, 0x20>(this, std::forward<::Oculus::Platform::__Message_1__Callback<bool>*>(value));
}
constexpr ::Oculus::Platform::__Message_1__Callback<bool>* Oculus::Platform::Request_1<bool>::__get_callback_()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::__Message_1__Callback<bool>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<bool>*> Oculus::Platform::Request_1<bool>::__get_callback_() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::__Message_1__Callback<bool>*, 0x20>(this);
}
inline ::Oculus::Platform::Request_1<bool>* Oculus::Platform::Request_1<bool>::New_ctor(uint64_t  requestID)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Request_1<bool>*>(requestID));
}
inline void Oculus::Platform::Request_1<bool>::_ctor(uint64_t  requestID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, requestID);
}
inline ::Oculus::Platform::Request_1<bool>* Oculus::Platform::Request_1<bool>::OnComplete(::Oculus::Platform::__Message_1__Callback<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<bool>*>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<bool>*, false>(*this, ___internal_method, callback);
}
inline void Oculus::Platform::Request_1<bool>::HandleMessage(::Oculus::Platform::Message*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<bool>*>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Oculus::Platform::Request_1<T>::__set_callback_(::Oculus::Platform::__Message_1__Callback<T>*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::__Message_1__Callback<T>*, 0x20>(this, std::forward<::Oculus::Platform::__Message_1__Callback<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Oculus::Platform::__Message_1__Callback<T>* Oculus::Platform::Request_1<T>::__get_callback_()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::__Message_1__Callback<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<T>*> Oculus::Platform::Request_1<T>::__get_callback_() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::__Message_1__Callback<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::New_ctor(uint64_t  requestID)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Request_1<T>*>(requestID));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Oculus::Platform::Request_1<T>::_ctor(uint64_t  requestID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, requestID);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::OnComplete(::Oculus::Platform::__Message_1__Callback<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<T>*, false>(*this, ___internal_method, callback);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Oculus::Platform::Request_1<T>::HandleMessage(::Oculus::Platform::Message*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
