#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerObjectInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerObjectInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerObjectInstaller::*)()>(&::GlobalNamespace::MultiplayerObjectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x22529fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerObjectInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerObjectInstaller::*)()>(&::GlobalNamespace::MultiplayerObjectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2252b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__set__inEnvironmentTextsPrefab(::GlobalNamespace::MultiplayerScoreRingItem*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerScoreRingItem*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerScoreRingItem*>(value));
}
constexpr ::GlobalNamespace::MultiplayerScoreRingItem* GlobalNamespace::MultiplayerObjectInstaller::__get__inEnvironmentTextsPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreRingItem*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingItem*> GlobalNamespace::MultiplayerObjectInstaller::__get__inEnvironmentTextsPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreRingItem*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__set__fireworkItemControllerPrefab(::GlobalNamespace::FireworkItemController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FireworkItemController*, 0x28>(this, std::forward<::GlobalNamespace::FireworkItemController*>(value));
}
constexpr ::GlobalNamespace::FireworkItemController* GlobalNamespace::MultiplayerObjectInstaller::__get__fireworkItemControllerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FireworkItemController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> GlobalNamespace::MultiplayerObjectInstaller::__get__fireworkItemControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FireworkItemController*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__set__multiplayerResultsPyramidViewAvatarPrefab(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* GlobalNamespace::MultiplayerObjectInstaller::__get__multiplayerResultsPyramidViewAvatarPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> GlobalNamespace::MultiplayerObjectInstaller::__get__multiplayerResultsPyramidViewAvatarPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, 0x30>(this);
}
inline void GlobalNamespace::MultiplayerObjectInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerObjectInstaller* GlobalNamespace::MultiplayerObjectInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerObjectInstaller*>());
}
inline void GlobalNamespace::MultiplayerObjectInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
