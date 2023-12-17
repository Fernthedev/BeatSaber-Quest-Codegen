#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IChannelInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ChannelInfo::*)()>(&::System::Runtime::Remoting::ChannelInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2484c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ChannelInfo::*)(::System::Object*)>(&::System::Runtime::Remoting::ChannelInfo::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2484ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelInfo.get_ChannelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*,::Array<::System::Object*>*> (::System::Runtime::Remoting::ChannelInfo::*)()>(&::System::Runtime::Remoting::ChannelInfo::get_ChannelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2484d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                            "get_ChannelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::IChannelInfo"
constexpr  System::Runtime::Remoting::ChannelInfo::operator ::System::Runtime::Remoting::IChannelInfo*() noexcept {
return static_cast<::System::Runtime::Remoting::IChannelInfo*>(static_cast<void*>(this));
}
constexpr void System::Runtime::Remoting::ChannelInfo::__set_channelData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x10>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Runtime::Remoting::ChannelInfo::__get_channelData()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Runtime::Remoting::ChannelInfo::__get_channelData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x10>(this);
}
inline ::System::Runtime::Remoting::ChannelInfo* System::Runtime::Remoting::ChannelInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::ChannelInfo*>());
}
inline void System::Runtime::Remoting::ChannelInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Runtime::Remoting::ChannelInfo* System::Runtime::Remoting::ChannelInfo::New_ctor(::System::Object*  remoteChannelData)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::ChannelInfo*>(remoteChannelData));
}
inline void System::Runtime::Remoting::ChannelInfo::_ctor(::System::Object*  remoteChannelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, remoteChannelData);
}
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> System::Runtime::Remoting::ChannelInfo::get_ChannelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ChannelInfo*>::get(),
                            "get_ChannelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*,::Array<::System::Object*>*>, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
