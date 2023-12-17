#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSender_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlaceManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.get_lobbyActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLobbyController::*)()>(&::GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a736c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "get_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.set_lobbyActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)(bool)>(&::GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22a7374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "set_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.ActivateMultiplayerLobby
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(&::GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22a7380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "ActivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController.DeactivateMultiplayerLobby
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(&::GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a744c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "DeactivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyController::*)()>(&::GlobalNamespace::MultiplayerLobbyController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22a74d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__innerCircleRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyController::__get__innerCircleRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyController::__get__innerCircleRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__minOuterCircleRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyController::__get__minOuterCircleRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyController::__get__minOuterCircleRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyAvatarManager(::GlobalNamespace::MultiplayerLobbyAvatarManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLobbyAvatarManager*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerLobbyAvatarManager*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarManager* GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyAvatarManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarManager*> GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyAvatarManager*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyCenterStageManager(::GlobalNamespace::MultiplayerLobbyCenterStageManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLobbyCenterStageManager*, 0x28>(this, std::forward<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLobbyCenterStageManager* GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyCenterStageManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyCenterStageManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyCenterStageManager*> GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyCenterStageManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyCenterStageManager*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyAvatarPlaceManager(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarPlaceManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*> GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarPlaceManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__menuEnvironmentManager(::GlobalNamespace::MenuEnvironmentManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuEnvironmentManager*, 0x38>(this, std::forward<::GlobalNamespace::MenuEnvironmentManager*>(value));
}
constexpr ::GlobalNamespace::MenuEnvironmentManager* GlobalNamespace::MultiplayerLobbyController::__get__menuEnvironmentManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuEnvironmentManager*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuEnvironmentManager*> GlobalNamespace::MultiplayerLobbyController::__get__menuEnvironmentManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuEnvironmentManager*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x40>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::MultiplayerLobbyController::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::MultiplayerLobbyController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::OptionalAvatarDataSender*, 0x48>(this, std::forward<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(value));
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender* GlobalNamespace::MultiplayerLobbyController::__get__optionalAvatarDataSender()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::OptionalAvatarDataSender*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> GlobalNamespace::MultiplayerLobbyController::__get__optionalAvatarDataSender() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::OptionalAvatarDataSender*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__lobbyActivated_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerLobbyController::__get__lobbyActivated_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerLobbyController::__get__lobbyActivated_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
inline bool GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "get_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "set_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "ActivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            "DeactivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyController* GlobalNamespace::MultiplayerLobbyController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyController*>());
}
inline void GlobalNamespace::MultiplayerLobbyController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
