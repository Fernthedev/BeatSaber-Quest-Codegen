#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__TransmitFileOptions_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Net/Sockets/zzzz__IPPacketInformation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/Sockets/zzzz__SendPacketsElement_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_AcceptSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_AcceptSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_BytesTransferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_BytesTransferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_LastOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_LastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_RemoteEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::EndPoint*)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_RemoteEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SendPacketsSendSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_SendPacketsSendSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_SocketError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_SocketError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SocketError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_SocketError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SocketFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_SocketFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_UserToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_UserToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_UserToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Object*)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_UserToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fe7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.add_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*)>(&::System::Net::Sockets::SocketAsyncEventArgs::add_Completed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28fe7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.remove_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*)>(&::System::Net::Sockets::SocketAsyncEventArgs::remove_Completed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28fe870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28fe920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&::System::Net::Sockets::SocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x28fe9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28fea4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&::System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28fea5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28fea70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetBytesTransferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fb43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetBytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_CurrentSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fead4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_CurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetCurrentSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28feadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetCurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetLastOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28feae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetLastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Complete_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Complete_internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28febac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "Complete_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::SocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28febd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_MemoryBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Memory_1<uint8_t> (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28febfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_MemoryBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_Offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fec08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_Offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fec10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_BufferList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_BufferList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fec18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_BufferList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Memory_1<uint8_t>)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetBuffer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x28fec20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::Sockets::SocketAsyncEventArgs::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set_disposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::SocketAsyncEventArgs::__get_disposed()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Net::Sockets::SocketAsyncEventArgs::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set_in_progress(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__get_in_progress()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__get_in_progress() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set_remote_ep(::System::Net::EndPoint*  value)  {
::cordl_internals::setInstanceField<::System::Net::EndPoint*, 0x18>(this, std::forward<::System::Net::EndPoint*>(value));
}
constexpr ::System::Net::EndPoint* System::Net::Sockets::SocketAsyncEventArgs::__get_remote_ep()  {
return ::cordl_internals::getInstanceField<::System::Net::EndPoint*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> System::Net::Sockets::SocketAsyncEventArgs::__get_remote_ep() const {
return ::cordl_internals::getInstanceField<::System::Net::EndPoint*, 0x18>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set_current_socket(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x20>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncEventArgs::__get_current_socket()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> System::Net::Sockets::SocketAsyncEventArgs::__get_current_socket() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x20>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set_socket_async_result(::System::Net::Sockets::SocketAsyncResult*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketAsyncResult*, 0x28>(this, std::forward<::System::Net::Sockets::SocketAsyncResult*>(value));
}
constexpr ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::SocketAsyncEventArgs::__get_socket_async_result()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketAsyncResult*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::SocketAsyncResult*> System::Net::Sockets::SocketAsyncEventArgs::__get_socket_async_result() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketAsyncResult*, 0x28>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__ConnectByNameError_k__BackingField(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x30>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* System::Net::Sockets::SocketAsyncEventArgs::__get__ConnectByNameError_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> System::Net::Sockets::SocketAsyncEventArgs::__get__ConnectByNameError_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x30>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__AcceptSocket_k__BackingField(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x38>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncEventArgs::__get__AcceptSocket_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> System::Net::Sockets::SocketAsyncEventArgs::__get__AcceptSocket_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x38>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__BytesTransferred_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__get__BytesTransferred_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__get__BytesTransferred_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__DisconnectReuseSocket_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::SocketAsyncEventArgs::__get__DisconnectReuseSocket_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& System::Net::Sockets::SocketAsyncEventArgs::__get__DisconnectReuseSocket_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__LastOperation_k__BackingField(::System::Net::Sockets::SocketAsyncOperation  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketAsyncOperation, 0x48>(this, std::forward<::System::Net::Sockets::SocketAsyncOperation>(value));
}
constexpr ::System::Net::Sockets::SocketAsyncOperation& System::Net::Sockets::SocketAsyncEventArgs::__get__LastOperation_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketAsyncOperation, 0x48>(this);
}
constexpr ::System::Net::Sockets::SocketAsyncOperation const& System::Net::Sockets::SocketAsyncEventArgs::__get__LastOperation_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketAsyncOperation, 0x48>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__ReceiveMessageFromPacketInfo_k__BackingField(::System::Net::Sockets::IPPacketInformation  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::IPPacketInformation, 0x50>(this, std::forward<::System::Net::Sockets::IPPacketInformation>(value));
}
constexpr ::System::Net::Sockets::IPPacketInformation& System::Net::Sockets::SocketAsyncEventArgs::__get__ReceiveMessageFromPacketInfo_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::IPPacketInformation, 0x50>(this);
}
constexpr ::System::Net::Sockets::IPPacketInformation const& System::Net::Sockets::SocketAsyncEventArgs::__get__ReceiveMessageFromPacketInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::IPPacketInformation, 0x50>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__SendPacketsElements_k__BackingField(::ArrayW<::System::Net::Sockets::SendPacketsElement*,::Array<::System::Net::Sockets::SendPacketsElement*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Net::Sockets::SendPacketsElement*,::Array<::System::Net::Sockets::SendPacketsElement*>*>, 0x60>(this, std::forward<::ArrayW<::System::Net::Sockets::SendPacketsElement*,::Array<::System::Net::Sockets::SendPacketsElement*>*>>(value));
}
constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement*,::Array<::System::Net::Sockets::SendPacketsElement*>*>& System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsElements_k__BackingField()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::Sockets::SendPacketsElement*,::Array<::System::Net::Sockets::SendPacketsElement*>*>, 0x60>(this);
}
constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement*,::Array<::System::Net::Sockets::SendPacketsElement*>*> const& System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsElements_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::Sockets::SendPacketsElement*,::Array<::System::Net::Sockets::SendPacketsElement*>*>, 0x60>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__SendPacketsFlags_k__BackingField(::System::Net::Sockets::TransmitFileOptions  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::TransmitFileOptions, 0x68>(this, std::forward<::System::Net::Sockets::TransmitFileOptions>(value));
}
constexpr ::System::Net::Sockets::TransmitFileOptions& System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsFlags_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::TransmitFileOptions, 0x68>(this);
}
constexpr ::System::Net::Sockets::TransmitFileOptions const& System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsFlags_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::TransmitFileOptions, 0x68>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__SendPacketsSendSize_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsSendSize_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsSendSize_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__SocketError_k__BackingField(::System::Net::Sockets::SocketError  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketError, 0x70>(this, std::forward<::System::Net::Sockets::SocketError>(value));
}
constexpr ::System::Net::Sockets::SocketError& System::Net::Sockets::SocketAsyncEventArgs::__get__SocketError_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketError, 0x70>(this);
}
constexpr ::System::Net::Sockets::SocketError const& System::Net::Sockets::SocketAsyncEventArgs::__get__SocketError_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketError, 0x70>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__SocketFlags_k__BackingField(::System::Net::Sockets::SocketFlags  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketFlags, 0x74>(this, std::forward<::System::Net::Sockets::SocketFlags>(value));
}
constexpr ::System::Net::Sockets::SocketFlags& System::Net::Sockets::SocketAsyncEventArgs::__get__SocketFlags_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketFlags, 0x74>(this);
}
constexpr ::System::Net::Sockets::SocketFlags const& System::Net::Sockets::SocketAsyncEventArgs::__get__SocketFlags_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketFlags, 0x74>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__UserToken_k__BackingField(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x78>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Net::Sockets::SocketAsyncEventArgs::__get__UserToken_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Net::Sockets::SocketAsyncEventArgs::__get__UserToken_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x78>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*  value)  {
::cordl_internals::setInstanceField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, 0x80>(this, std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
constexpr ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::SocketAsyncEventArgs::__get_Completed()  {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*> System::Net::Sockets::SocketAsyncEventArgs::__get_Completed() const {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, 0x80>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__buffer(::System::Memory_1<uint8_t>  value)  {
::cordl_internals::setInstanceField<::System::Memory_1<uint8_t>, 0x88>(this, std::forward<::System::Memory_1<uint8_t>>(value));
}
constexpr ::System::Memory_1<uint8_t>& System::Net::Sockets::SocketAsyncEventArgs::__get__buffer()  {
return ::cordl_internals::getInstanceField<::System::Memory_1<uint8_t>, 0x88>(this);
}
constexpr ::System::Memory_1<uint8_t> const& System::Net::Sockets::SocketAsyncEventArgs::__get__buffer() const {
return ::cordl_internals::getInstanceField<::System::Memory_1<uint8_t>, 0x88>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__offset(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__get__offset()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__get__offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__get__count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__bufferIsExplicitArray(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::SocketAsyncEventArgs::__get__bufferIsExplicitArray()  {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr bool const& System::Net::Sockets::SocketAsyncEventArgs::__get__bufferIsExplicitArray() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__bufferList(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, 0xa8>(this, std::forward<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(value));
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* System::Net::Sockets::SocketAsyncEventArgs::__get__bufferList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*> System::Net::Sockets::SocketAsyncEventArgs::__get__bufferList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, 0xa8>(this);
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__set__bufferListInternal(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*, 0xb0>(this, std::forward<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* System::Net::Sockets::SocketAsyncEventArgs::__get__bufferListInternal()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*> System::Net::Sockets::SocketAsyncEventArgs::__get__bufferListInternal() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*, 0xb0>(this);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket(::System::Net::Sockets::Socket*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation(::System::Net::Sockets::SocketAsyncOperation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_LastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint(::System::Net::EndPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_RemoteEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_SendPacketsSendSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Net::Sockets::SocketError System::Net::Sockets::SocketAsyncEventArgs::get_SocketError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketError, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_SocketError(::System::Net::Sockets::SocketError  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags(::System::Net::Sockets::SocketFlags  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_SocketFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Object* System::Net::Sockets::SocketAsyncEventArgs::get_UserToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_UserToken(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "set_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Net::Sockets::SocketAsyncEventArgs* System::Net::Sockets::SocketAsyncEventArgs::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::SocketAsyncEventArgs*>());
}
inline void System::Net::Sockets::SocketAsyncEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Net::Sockets::SocketAsyncEventArgs* System::Net::Sockets::SocketAsyncEventArgs::New_ctor(bool  flowExecutionContext)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::SocketAsyncEventArgs*>(flowExecutionContext));
}
inline void System::Net::Sockets::SocketAsyncEventArgs::_ctor(bool  flowExecutionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowExecutionContext);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetBytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_CurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket(::System::Net::Sockets::Socket*  socket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetCurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, socket);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation(::System::Net::Sockets::SocketAsyncOperation  op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetLastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, op);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Complete_internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "Complete_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline ::System::Memory_1<uint8_t> System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_MemoryBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Memory_1<uint8_t>, false>(*this, ___internal_method);
}
inline int32_t System::Net::Sockets::SocketAsyncEventArgs::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_Offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Net::Sockets::SocketAsyncEventArgs::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* System::Net::Sockets::SocketAsyncEventArgs::get_BufferList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "get_BufferList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetBuffer(::System::Memory_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                            "SetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
