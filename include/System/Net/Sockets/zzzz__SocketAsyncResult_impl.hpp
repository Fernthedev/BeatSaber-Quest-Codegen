#pragma once
#include "System/zzzz__IOAsyncResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::__SocketAsyncResult____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__SocketAsyncResult____c::*)()>(&::System::Net::Sockets::__SocketAsyncResult____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ff010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__SocketAsyncResult____c._Complete_b__27_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__SocketAsyncResult____c::*)(::System::Object*)>(&::System::Net::Sockets::__SocketAsyncResult____c::_Complete_b__27_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x28ff018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(),
                            "<Complete>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::__SocketAsyncResult____c::setStaticF___9(::System::Net::Sockets::__SocketAsyncResult____c*  value)  {
::cordl_internals::setStaticField<::System::Net::Sockets::__SocketAsyncResult____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>(std::forward<::System::Net::Sockets::__SocketAsyncResult____c*>(value));
}
inline ::System::Net::Sockets::__SocketAsyncResult____c* System::Net::Sockets::__SocketAsyncResult____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::Sockets::__SocketAsyncResult____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>();
}
inline void System::Net::Sockets::__SocketAsyncResult____c::setStaticF___9__27_0(::System::Threading::WaitCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::Sockets::__SocketAsyncResult____c::getStaticF___9__27_0()  {
return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get>();
}
inline ::System::Net::Sockets::__SocketAsyncResult____c* System::Net::Sockets::__SocketAsyncResult____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::__SocketAsyncResult____c*>());
}
inline void System::Net::Sockets::__SocketAsyncResult____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::__SocketAsyncResult____c::_Complete_b__27_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__SocketAsyncResult____c*>::get(),
                            "<Complete>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::get_Handle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28fed14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::SocketAsyncResult::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28fed78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x28fee2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.get_ErrorCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::get_ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28fee64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "get_ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.CheckIfThrowDelayedException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28feee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "CheckIfThrowDelayedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.CompleteDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::CompleteDisposed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28fef8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x28fac2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(bool)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28fef90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fb6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*, bool)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28fef9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fa4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fa4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*, int32_t)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28fa6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::SocketAsyncResult::__set_socket(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x30>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncResult::__get_socket()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> System::Net::Sockets::SocketAsyncResult::__get_socket() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x30>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_operation(::System::Net::Sockets::SocketOperation  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketOperation, 0x38>(this, std::forward<::System::Net::Sockets::SocketOperation>(value));
}
constexpr ::System::Net::Sockets::SocketOperation& System::Net::Sockets::SocketAsyncResult::__get_operation()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketOperation, 0x38>(this);
}
constexpr ::System::Net::Sockets::SocketOperation const& System::Net::Sockets::SocketAsyncResult::__get_operation() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketOperation, 0x38>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_DelayedException(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x40>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* System::Net::Sockets::SocketAsyncResult::__get_DelayedException()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> System::Net::Sockets::SocketAsyncResult::__get_DelayedException() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x40>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_EndPoint(::System::Net::EndPoint*  value)  {
::cordl_internals::setInstanceField<::System::Net::EndPoint*, 0x48>(this, std::forward<::System::Net::EndPoint*>(value));
}
constexpr ::System::Net::EndPoint* System::Net::Sockets::SocketAsyncResult::__get_EndPoint()  {
return ::cordl_internals::getInstanceField<::System::Net::EndPoint*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> System::Net::Sockets::SocketAsyncResult::__get_EndPoint() const {
return ::cordl_internals::getInstanceField<::System::Net::EndPoint*, 0x48>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Buffer(::System::Memory_1<uint8_t>  value)  {
::cordl_internals::setInstanceField<::System::Memory_1<uint8_t>, 0x50>(this, std::forward<::System::Memory_1<uint8_t>>(value));
}
constexpr ::System::Memory_1<uint8_t>& System::Net::Sockets::SocketAsyncResult::__get_Buffer()  {
return ::cordl_internals::getInstanceField<::System::Memory_1<uint8_t>, 0x50>(this);
}
constexpr ::System::Memory_1<uint8_t> const& System::Net::Sockets::SocketAsyncResult::__get_Buffer() const {
return ::cordl_internals::getInstanceField<::System::Memory_1<uint8_t>, 0x50>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Offset(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Offset()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Size(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Size()  {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_SockFlags(::System::Net::Sockets::SocketFlags  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketFlags, 0x68>(this, std::forward<::System::Net::Sockets::SocketFlags>(value));
}
constexpr ::System::Net::Sockets::SocketFlags& System::Net::Sockets::SocketAsyncResult::__get_SockFlags()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketFlags, 0x68>(this);
}
constexpr ::System::Net::Sockets::SocketFlags const& System::Net::Sockets::SocketAsyncResult::__get_SockFlags() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketFlags, 0x68>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_AcceptSocket(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x70>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncResult::__get_AcceptSocket()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> System::Net::Sockets::SocketAsyncResult::__get_AcceptSocket() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x70>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Addresses(::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>, 0x78>(this, std::forward<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>(value));
}
constexpr ::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>& System::Net::Sockets::SocketAsyncResult::__get_Addresses()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>, 0x78>(this);
}
constexpr ::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*> const& System::Net::Sockets::SocketAsyncResult::__get_Addresses() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>, 0x78>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Buffers(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, 0x88>(this, std::forward<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(value));
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* System::Net::Sockets::SocketAsyncResult::__get_Buffers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*> System::Net::Sockets::SocketAsyncResult::__get_Buffers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, 0x88>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_ReuseSocket(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::SocketAsyncResult::__get_ReuseSocket()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& System::Net::Sockets::SocketAsyncResult::__get_ReuseSocket() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_CurrentAddress(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_CurrentAddress()  {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_CurrentAddress() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_AcceptedSocket(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x98>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncResult::__get_AcceptedSocket()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> System::Net::Sockets::SocketAsyncResult::__get_AcceptedSocket() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x98>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_Total(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_Total()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_Total() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_error(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_error()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa4>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_error() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa4>(this);
}
constexpr void System::Net::Sockets::SocketAsyncResult::__set_EndCalled(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__get_EndCalled()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__get_EndCalled() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this);
}
inline ::cordl_internals::intptr_t System::Net::Sockets::SocketAsyncResult::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::SocketAsyncResult::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::SocketAsyncResult*>());
}
inline void System::Net::Sockets::SocketAsyncResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Init(::System::Net::Sockets::Socket*  socket, ::System::AsyncCallback*  callback, ::System::Object*  state, ::System::Net::Sockets::SocketOperation  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, socket, callback, state, operation);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::SocketAsyncResult::New_ctor(::System::Net::Sockets::Socket*  socket, ::System::AsyncCallback*  callback, ::System::Object*  state, ::System::Net::Sockets::SocketOperation  operation)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::SocketAsyncResult*>(socket, callback, state, operation));
}
inline void System::Net::Sockets::SocketAsyncResult::_ctor(::System::Net::Sockets::Socket*  socket, ::System::AsyncCallback*  callback, ::System::Object*  state, ::System::Net::Sockets::SocketOperation  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, socket, callback, state, operation);
}
inline ::System::Net::Sockets::SocketError System::Net::Sockets::SocketAsyncResult::get_ErrorCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "get_ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketError, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "CheckIfThrowDelayedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::CompleteDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "CompleteDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(bool  synch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, synch);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(int32_t  total)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, total);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Exception*  e, bool  synch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e, synch);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Net::Sockets::Socket*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, s);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Net::Sockets::Socket*  s, int32_t  total)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, s, total);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
