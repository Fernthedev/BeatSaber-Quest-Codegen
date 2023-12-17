#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
constexpr void GlobalNamespace::__PartyMessageHandler__MessageType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PartyMessageHandler__MessageType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PartyMessageHandler__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PartyMessageHandler__MessageType::__PartyMessageHandler__MessageType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PartyMessageHandler__MessageType  GlobalNamespace::__PartyMessageHandler__MessageType::ConnectToMasterServer{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe51294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe51358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe513a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe51468;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate* GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>(object, method));
}
inline void GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::Invoke(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectionMask, configuration);
}
inline ::System::IAsyncResult* GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, selectionMask, configuration, callback, object);
}
inline void GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xe51474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::StringW)>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe51548;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe5155c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe5157c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>(object, method));
}
inline void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::Invoke(::StringW  secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, secret);
}
inline ::System::IAsyncResult* GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::BeginInvoke(::StringW  secret, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, secret, callback, object);
}
inline void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>* (*)()>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe50fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::*)(::StringW)>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe511f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Serialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe51588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe515ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::*)()>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe51240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::*)()>(&::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe515d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr  GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr  GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::__set_secret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::__get_secret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>* GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Init(::StringW  secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*, false>(*this, ___internal_method, secret);
}
inline void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>());
}
inline void GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::ConnectedPlayerManager*)>(&::GlobalNamespace::PartyMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xe50e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)()>(&::GlobalNamespace::PartyMessageHandler::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe51010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.add_connectToMasterServerEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*)>(&::GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe51038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "add_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.remove_connectToMasterServerEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*)>(&::GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe510d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "remove_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.ConnectToMasterServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::StringW)>(&::GlobalNamespace::PartyMessageHandler::ConnectToMasterServer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe51170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "ConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.HandleConnectToMasterServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*)>(&::GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe51200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "HandleConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PartyMessageHandler::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::PartyMessageHandler::__set__serializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*, 0x10>(this, std::forward<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*>(value));
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::PartyMessageHandler::__get__serializer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*> GlobalNamespace::PartyMessageHandler::__get__serializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*, 0x10>(this);
}
constexpr void GlobalNamespace::PartyMessageHandler::__set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ConnectedPlayerManager*, 0x18>(this, std::forward<::GlobalNamespace::ConnectedPlayerManager*>(value));
}
constexpr ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::PartyMessageHandler::__get__connectedPlayerManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConnectedPlayerManager*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> GlobalNamespace::PartyMessageHandler::__get__connectedPlayerManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConnectedPlayerManager*, 0x18>(this);
}
constexpr void GlobalNamespace::PartyMessageHandler::__set_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*, 0x20>(this, std::forward<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>(value));
}
constexpr ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* GlobalNamespace::PartyMessageHandler::__get_connectToMasterServerEvent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*> GlobalNamespace::PartyMessageHandler::__get_connectToMasterServerEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*, 0x20>(this);
}
inline ::GlobalNamespace::PartyMessageHandler* GlobalNamespace::PartyMessageHandler::New_ctor(::GlobalNamespace::ConnectedPlayerManager*  connectedPlayerManager)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PartyMessageHandler*>(connectedPlayerManager));
}
inline void GlobalNamespace::PartyMessageHandler::_ctor(::GlobalNamespace::ConnectedPlayerManager*  connectedPlayerManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connectedPlayerManager);
}
inline void GlobalNamespace::PartyMessageHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "add_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "remove_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PartyMessageHandler::ConnectToMasterServer(::StringW  secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "ConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, secret);
}
inline void GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(),
                            "HandleConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packet);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
