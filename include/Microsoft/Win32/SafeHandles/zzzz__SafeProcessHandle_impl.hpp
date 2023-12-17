#pragma once
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::cordl_internals::intptr_t)>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x282addc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::cordl_internals::intptr_t, bool)>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x282abac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle.ReleaseHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282ae08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::setStaticF_InvalidHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  value)  {
::cordl_internals::setStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get>(std::forward<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(value));
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::getStaticF_InvalidHandle()  {
return ::cordl_internals::getStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get>();
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::New_ctor(::cordl_internals::intptr_t  handle)  {
return THROW_UNLESS(::il2cpp_utils::New<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(handle));
}
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::cordl_internals::intptr_t  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, handle);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::New_ctor(::cordl_internals::intptr_t  existingHandle, bool  ownsHandle)  {
return THROW_UNLESS(::il2cpp_utils::New<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(existingHandle, ownsHandle));
}
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::cordl_internals::intptr_t  existingHandle, bool  ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, existingHandle, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                            "ReleaseHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
