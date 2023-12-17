#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__LobbyAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::LobbyAvatarInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::LobbyAvatarInstaller::*)()>(&::BeatSaber::AvatarCore::LobbyAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xe0f91c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::LobbyAvatarInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::LobbyAvatarInstaller::*)()>(&::BeatSaber::AvatarCore::LobbyAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0fb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::AvatarCore::LobbyAvatarInstaller::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* BeatSaber::AvatarCore::LobbyAvatarInstaller::__get__connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> BeatSaber::AvatarCore::LobbyAvatarInstaller::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this);
}
inline void BeatSaber::AvatarCore::LobbyAvatarInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::LobbyAvatarInstaller* BeatSaber::AvatarCore::LobbyAvatarInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>());
}
inline void BeatSaber::AvatarCore::LobbyAvatarInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
