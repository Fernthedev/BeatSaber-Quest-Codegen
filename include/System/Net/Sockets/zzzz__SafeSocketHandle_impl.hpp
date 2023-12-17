#pragma once
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleMinusOneIsInvalid_impl.hpp"
#include "System/Net/Sockets/zzzz__SafeSocketHandle_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)(::cordl_internals::intptr_t, bool)>(&::System::Net::Sockets::SafeSocketHandle::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28fdcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.ReleaseHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x28fddc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.RegisterForBlockingSyscall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x28fe394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                            "RegisterForBlockingSyscall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.UnRegisterForBlockingSyscall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x28fe4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                            "UnRegisterForBlockingSyscall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::SafeSocketHandle::__set_blocking_threads(::System::Collections::Generic::List_1<::System::Threading::Thread*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Threading::Thread*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::Threading::Thread*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Thread*>* System::Net::Sockets::SafeSocketHandle::__get_blocking_threads()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Threading::Thread*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::Thread*>*> System::Net::Sockets::SafeSocketHandle::__get_blocking_threads() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Threading::Thread*>*, 0x20>(this);
}
constexpr void System::Net::Sockets::SafeSocketHandle::__set_threads_stacktraces(::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*, 0x28>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>* System::Net::Sockets::SafeSocketHandle::__get_threads_stacktraces()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*> System::Net::Sockets::SafeSocketHandle::__get_threads_stacktraces() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*,::System::Diagnostics::StackTrace*>*, 0x28>(this);
}
constexpr void System::Net::Sockets::SafeSocketHandle::__set_in_cleanup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::SafeSocketHandle::__get_in_cleanup()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& System::Net::Sockets::SafeSocketHandle::__get_in_cleanup() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline void System::Net::Sockets::SafeSocketHandle::setStaticF_THROW_ON_ABORT_RETRIES(bool  value)  {
::cordl_internals::setStaticField<bool, "THROW_ON_ABORT_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::SafeSocketHandle::getStaticF_THROW_ON_ABORT_RETRIES()  {
return ::cordl_internals::getStaticField<bool, "THROW_ON_ABORT_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get>();
}
inline ::System::Net::Sockets::SafeSocketHandle* System::Net::Sockets::SafeSocketHandle::New_ctor(::cordl_internals::intptr_t  preexistingHandle, bool  ownsHandle)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::SafeSocketHandle*>(preexistingHandle, ownsHandle));
}
inline void System::Net::Sockets::SafeSocketHandle::_ctor(::cordl_internals::intptr_t  preexistingHandle, bool  ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, preexistingHandle, ownsHandle);
}
inline bool System::Net::Sockets::SafeSocketHandle::ReleaseHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                            "ReleaseHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                            "RegisterForBlockingSyscall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                            "UnRegisterForBlockingSyscall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
