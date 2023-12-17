#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::PlayerSessionInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::PlayerSessionInfo::*)()>(&::BGNet::Core::GameLift::PlayerSessionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe60edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::PlayerSessionInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_playerSessionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_playerSessionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_playerSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_gameSessionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameSessionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_dnsName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_dnsName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_dnsName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BGNet::Core::GameLift::PlayerSessionInfo::__get_port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& BGNet::Core::GameLift::PlayerSessionInfo::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x30>(this, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& BGNet::Core::GameLift::PlayerSessionInfo::__get_beatmapLevelSelectionMask()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x30>(this);
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& BGNet::Core::GameLift::PlayerSessionInfo::__get_beatmapLevelSelectionMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x30>(this);
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x58>(this, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameplayServerConfiguration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x58>(this);
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& BGNet::Core::GameLift::PlayerSessionInfo::__get_gameplayServerConfiguration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x58>(this);
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_privateGameSecret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameSecret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameSecret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void BGNet::Core::GameLift::PlayerSessionInfo::__set_privateGameCode(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameCode()  {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr ::StringW const& BGNet::Core::GameLift::PlayerSessionInfo::__get_privateGameCode() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
inline ::BGNet::Core::GameLift::PlayerSessionInfo* BGNet::Core::GameLift::PlayerSessionInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::GameLift::PlayerSessionInfo*>());
}
inline void BGNet::Core::GameLift::PlayerSessionInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::PlayerSessionInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
