#pragma once
#include "System/Net/Http/zzzz__HttpContent_impl.hpp"
#include "System/Net/Http/zzzz__StreamContent_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*)>(&::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28343ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, int32_t)>(&::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x28343f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2830af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(bool)>(&::System::Net::Http::StreamContent::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28344e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.SerializeToStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&::System::Net::Http::StreamContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x283452c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.TryComputeLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::StreamContent::*)(ByRef<int64_t>)>(&::System::Net::Http::StreamContent::TryComputeLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2834604;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::Http::StreamContent::__set_content(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x28>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::Net::Http::StreamContent::__get_content()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::Net::Http::StreamContent::__get_content() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this);
}
constexpr void System::Net::Http::StreamContent::__set_bufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Http::StreamContent::__get_bufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& System::Net::Http::StreamContent::__get_bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void System::Net::Http::StreamContent::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::Net::Http::StreamContent::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this);
}
constexpr ::System::Threading::CancellationToken const& System::Net::Http::StreamContent::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this);
}
constexpr void System::Net::Http::StreamContent::__set_startPosition(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Net::Http::StreamContent::__get_startPosition()  {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
constexpr int64_t const& System::Net::Http::StreamContent::__get_startPosition() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
constexpr void System::Net::Http::StreamContent::__set_contentCopied(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Http::StreamContent::__get_contentCopied()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& System::Net::Http::StreamContent::__get_contentCopied() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream*  content)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::StreamContent*>(content));
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream*  content)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, content);
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream*  content, int32_t  bufferSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::StreamContent*>(content, bufferSize));
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream*  content, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, content, bufferSize);
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream*  content, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::StreamContent*>(content, cancellationToken));
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream*  content, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, content, cancellationToken);
}
inline void System::Net::Http::StreamContent::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::StreamContent::SerializeToStreamAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            "SerializeToStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TransportContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, stream, context);
}
inline bool System::Net::Http::StreamContent::TryComputeLength(ByRef<int64_t>  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                            "TryComputeLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, length);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
