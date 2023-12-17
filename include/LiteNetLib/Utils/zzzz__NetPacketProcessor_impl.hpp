#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
template<typename T>
inline void LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>::setStaticF_Initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>*>::get>(std::forward<bool>(value));
}
template<typename T>
inline bool LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>::getStaticF_Initialized()  {
return ::cordl_internals::getStaticField<bool, "Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>*>::get>();
}
template<typename T>
inline void LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>::setStaticF_Id(uint64_t  value)  {
::cordl_internals::setStaticField<uint64_t, "Id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>*>::get>(std::forward<uint64_t>(value));
}
template<typename T>
inline uint64_t LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>::getStaticF_Id()  {
return ::cordl_internals::getStaticField<uint64_t, "Id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>*>::get>();
}
//  Writing Method size for method: ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x220bb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::*)(::LiteNetLib::Utils::NetDataReader*, ::System::Object*)>(&::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x220bc7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::*)(::LiteNetLib::Utils::NetDataReader*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x220bc90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::*)(::System::IAsyncResult*)>(&::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220bcb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate* LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>(object, method));
}
inline void LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::Invoke(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
inline ::System::IAsyncResult* LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::BeginInvoke(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, reader, userData, callback, object);
}
inline void LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)()>(&::LiteNetLib::Utils::NetPacketProcessor::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x220b6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(int32_t)>(&::LiteNetLib::Utils::NetPacketProcessor::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x220b7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.GetCallbackFromData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate* (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*)>(&::LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x220b928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadAllPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*)>(&::LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x220ba60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadAllPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*, ::System::Object*)>(&::LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x220bab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*)>(&::LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220baac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*, ::System::Object*)>(&::LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220bb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::NetPacketProcessor::__set__netSerializer(::LiteNetLib::Utils::NetSerializer*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetSerializer*, 0x10>(this, std::forward<::LiteNetLib::Utils::NetSerializer*>(value));
}
constexpr ::LiteNetLib::Utils::NetSerializer* LiteNetLib::Utils::NetPacketProcessor::__get__netSerializer()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetSerializer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetSerializer*> LiteNetLib::Utils::NetPacketProcessor::__get__netSerializer() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetSerializer*, 0x10>(this);
}
constexpr void LiteNetLib::Utils::NetPacketProcessor::__set__callbacks(::System::Collections::Generic::Dictionary_2<uint64_t,::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>* LiteNetLib::Utils::NetPacketProcessor::__get__callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t,::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*> LiteNetLib::Utils::NetPacketProcessor::__get__callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint64_t,::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*, 0x18>(this);
}
constexpr void LiteNetLib::Utils::NetPacketProcessor::__set__netDataWriter(::LiteNetLib::Utils::NetDataWriter*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x20>(this, std::forward<::LiteNetLib::Utils::NetDataWriter*>(value));
}
constexpr ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetPacketProcessor::__get__netDataWriter()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> LiteNetLib::Utils::NetPacketProcessor::__get__netDataWriter() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x20>(this);
}
inline ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::NetPacketProcessor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::NetPacketProcessor*>());
}
inline void LiteNetLib::Utils::NetPacketProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::NetPacketProcessor::New_ctor(int32_t  maxStringLength)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::NetPacketProcessor*>(maxStringLength));
}
inline void LiteNetLib::Utils::NetPacketProcessor::_ctor(int32_t  maxStringLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxStringLength);
}
template<typename T>
inline uint64_t LiteNetLib::Utils::NetPacketProcessor::GetHash()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "GetHash",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method);
}
inline ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate* LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "GetCallbackFromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*, false>(*this, ___internal_method, reader);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::WriteHash(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "WriteHash",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,T>*  writeDelegate, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,T>*  readDelegate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writeDelegate, readDelegate);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType(::System::Func_1<T>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, constructor);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadPacket(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::Send(::LiteNetLib::NetPeer*  peer, T  packet, ::LiteNetLib::DeliveryMethod  options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "Send",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, peer, packet, options);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable(::LiteNetLib::NetPeer*  peer, T  packet, ::LiteNetLib::DeliveryMethod  options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SendNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, peer, packet, options);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::Send(::LiteNetLib::NetManager*  manager, T  packet, ::LiteNetLib::DeliveryMethod  options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "Send",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, manager, packet, options);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable(::LiteNetLib::NetManager*  manager, T  packet, ::LiteNetLib::DeliveryMethod  options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SendNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, manager, packet, options);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::Write(::LiteNetLib::Utils::NetDataWriter*  writer, T  packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "Write",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, packet);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable(::LiteNetLib::Utils::NetDataWriter*  writer, T  packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "WriteNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, packet);
}
template<typename T>
inline ::ArrayW<uint8_t,::Array<uint8_t>*> LiteNetLib::Utils::NetPacketProcessor::Write(T  packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "Write",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, packet);
}
template<typename T>
inline ::ArrayW<uint8_t,::Array<uint8_t>*> LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable(T  packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "WriteNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, packet);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadPacket(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::Subscribe(::System::Action_1<T>*  onReceive, ::System::Func_1<T>*  packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "Subscribe",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive, packetConstructor);
}
template<typename T,typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor::Subscribe(::System::Action_2<T,TUserData>*  onReceive, ::System::Func_1<T>*  packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "Subscribe",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T,TUserData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive, packetConstructor);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable(::System::Action_1<T>*  onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SubscribeReusable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive);
}
template<typename T,typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable(::System::Action_2<T,TUserData>*  onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SubscribeReusable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T,TUserData>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive);
}
template<typename T,typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_2<T,TUserData>*  onReceive, ::System::Func_1<T>*  packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T,TUserData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive, packetConstructor);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_1<T>*  onReceive, ::System::Func_1<T>*  packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive, packetConstructor);
}
template<typename T,typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_2<T,TUserData>*  onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T,TUserData>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive);
}
template<typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_1<T>*  onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onReceive);
}
template<typename T>
inline bool LiteNetLib::Utils::NetPacketProcessor::RemoveSubscription()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                        "RemoveSubscription",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__set_packetConstructor(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x10>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__get_packetConstructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__set___4__this(::LiteNetLib::Utils::NetPacketProcessor*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x18>(this, std::forward<::LiteNetLib::Utils::NetPacketProcessor*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__set_onReceive(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x20>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>::_Subscribe_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>*>::get(),
                            "<Subscribe>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__set_packetConstructor(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x10>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::System::Func_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__get_packetConstructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__set___4__this(::LiteNetLib::Utils::NetPacketProcessor*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x18>(this, std::forward<::LiteNetLib::Utils::NetPacketProcessor*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__set_onReceive(::System::Action_2<T,TUserData>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<T,TUserData>*, 0x20>(this, std::forward<::System::Action_2<T,TUserData>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::System::Action_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T,TUserData>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>::_Subscribe_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T,TUserData>*>::get(),
                            "<Subscribe>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__set___4__this(::LiteNetLib::Utils::NetPacketProcessor*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x10>(this, std::forward<::LiteNetLib::Utils::NetPacketProcessor*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__set_reference(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__get_reference()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__set_onReceive(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x20>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>::_SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>*>::get(),
                            "<SubscribeReusable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__set___4__this(::LiteNetLib::Utils::NetPacketProcessor*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x10>(this, std::forward<::LiteNetLib::Utils::NetPacketProcessor*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetPacketProcessor*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__set_reference(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr T& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__get_reference()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr T const& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__set_onReceive(::System::Action_2<T,TUserData>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<T,TUserData>*, 0x20>(this, std::forward<::System::Action_2<T,TUserData>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::System::Action_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T,TUserData>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>::_SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T,TUserData>*>::get(),
                            "<SubscribeReusable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::__set_packetConstructor(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x10>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::System::Func_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::__get_packetConstructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::__set_onReceive(::System::Action_2<T,TUserData>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<T,TUserData>*, 0x18>(this, std::forward<::System::Action_2<T,TUserData>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::System::Action_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T,TUserData>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T,TUserData>*>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::__set_packetConstructor(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x10>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::__get_packetConstructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::__set_onReceive(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x18>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>*>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::__set_reference(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr T& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::__get_reference()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr T const& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::__set_onReceive(::System::Action_2<T,TUserData>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<T,TUserData>*, 0x18>(this, std::forward<::System::Action_2<T,TUserData>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::System::Action_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T,TUserData>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_2<T,TUserData>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TUserData>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T,TUserData>*>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::__set_reference(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::__get_reference()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::__set_onReceive(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x18>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::__get_onReceive()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::__get_onReceive() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>* LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader*  reader, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>*>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, userData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
