#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__FileStreamAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileStreamAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::IO::FileStreamAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2540510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.CBWrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::IO::FileStreamAsyncResult::CBWrapper)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2541554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "CBWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25415e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25415f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25415f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2541600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IAsyncResult"
constexpr  System::IO::FileStreamAsyncResult::operator ::System::IAsyncResult*() noexcept {
return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
constexpr void System::IO::FileStreamAsyncResult::__set_state(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::IO::FileStreamAsyncResult::__get_state()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::IO::FileStreamAsyncResult::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_completed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& System::IO::FileStreamAsyncResult::__get_completed()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& System::IO::FileStreamAsyncResult::__get_completed() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_wh(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x20>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* System::IO::FileStreamAsyncResult::__get_wh()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> System::IO::FileStreamAsyncResult::__get_wh() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x20>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_cb(::System::AsyncCallback*  value)  {
::cordl_internals::setInstanceField<::System::AsyncCallback*, 0x28>(this, std::forward<::System::AsyncCallback*>(value));
}
constexpr ::System::AsyncCallback* System::IO::FileStreamAsyncResult::__get_cb()  {
return ::cordl_internals::getInstanceField<::System::AsyncCallback*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> System::IO::FileStreamAsyncResult::__get_cb() const {
return ::cordl_internals::getInstanceField<::System::AsyncCallback*, 0x28>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_completedSynch(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& System::IO::FileStreamAsyncResult::__get_completedSynch()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& System::IO::FileStreamAsyncResult::__get_completedSynch() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_Count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__get_Count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__get_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_OriginalCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__get_OriginalCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__get_OriginalCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_BytesRead(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__get_BytesRead()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__get_BytesRead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void System::IO::FileStreamAsyncResult::__set_realcb(::System::AsyncCallback*  value)  {
::cordl_internals::setInstanceField<::System::AsyncCallback*, 0x40>(this, std::forward<::System::AsyncCallback*>(value));
}
constexpr ::System::AsyncCallback* System::IO::FileStreamAsyncResult::__get_realcb()  {
return ::cordl_internals::getInstanceField<::System::AsyncCallback*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> System::IO::FileStreamAsyncResult::__get_realcb() const {
return ::cordl_internals::getInstanceField<::System::AsyncCallback*, 0x40>(this);
}
inline ::System::IO::FileStreamAsyncResult* System::IO::FileStreamAsyncResult::New_ctor(::System::AsyncCallback*  cb, ::System::Object*  state)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::FileStreamAsyncResult*>(cb, state));
}
inline void System::IO::FileStreamAsyncResult::_ctor(::System::AsyncCallback*  cb, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cb, state);
}
inline void System::IO::FileStreamAsyncResult::CBWrapper(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "CBWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ares);
}
inline ::System::Object* System::IO::FileStreamAsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline bool System::IO::FileStreamAsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IO::FileStreamAsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(*this, ___internal_method);
}
inline bool System::IO::FileStreamAsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
