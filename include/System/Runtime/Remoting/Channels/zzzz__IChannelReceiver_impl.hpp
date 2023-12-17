#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__IChannelReceiver_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannelReceiver.get_ChannelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Channels::IChannelReceiver::*)()>(&::System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannelReceiver.StartListening
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::IChannelReceiver::*)(::System::Object*)>(&::System::Runtime::Remoting::Channels::IChannelReceiver::StartListening)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr  System::Runtime::Remoting::Channels::IChannelReceiver::operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept {
return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
inline ::System::Object* System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                            "get_ChannelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Channels::IChannelReceiver::StartListening(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                            "StartListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
