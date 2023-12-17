#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23c1940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::Update)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x23c19cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c1ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelController::__set__items(::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*,::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*,::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*,::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*,::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>& GlobalNamespace::MultiplayerLeaderboardPanelController::__get__items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*,::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*,::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*> const& GlobalNamespace::MultiplayerLeaderboardPanelController::__get__items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*,::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelController::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerScoreProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider* GlobalNamespace::MultiplayerLeaderboardPanelController::__get__scoreProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> GlobalNamespace::MultiplayerLeaderboardPanelController::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x20>(this);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLeaderboardPanelController* GlobalNamespace::MultiplayerLeaderboardPanelController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLeaderboardPanelController*>());
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
