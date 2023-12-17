#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2258940;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2258b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__get__connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this);
}
inline void GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller* GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>());
}
inline void GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
