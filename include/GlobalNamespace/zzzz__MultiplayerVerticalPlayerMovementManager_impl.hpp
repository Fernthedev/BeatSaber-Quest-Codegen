#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerVerticalPlayerMovementManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerFacade_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x225b2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x225b374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x225b444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.HandleStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)(::GlobalNamespace::__MultiplayerController__State)>(&::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x225b364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor)> {
  constexpr static std::size_t size = 0x10e0;
  constexpr static std::size_t addrs = 0x225bc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__movementRange(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__movementRange()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__movementRange() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__duelMovementRange(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__duelMovementRange()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__duelMovementRange() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__maxMoveSpeedMetersPerSecond(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__maxMoveSpeedMetersPerSecond()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__maxMoveSpeedMetersPerSecond() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__accelerationMetersPerSecondSquared(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__accelerationMetersPerSecondSquared()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__accelerationMetersPerSecondSquared() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__decelerationMetersPerSecondSquared(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__decelerationMetersPerSecondSquared()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__decelerationMetersPerSecondSquared() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__minScoreDifference(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__minScoreDifference()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__minScoreDifference() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerPlayersManager*>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayersManager* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerPlayersManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerPlayersManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x38>(this, std::forward<::GlobalNamespace::MultiplayerScoreProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__scoreProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLayoutProvider*, 0x40>(this, std::forward<::GlobalNamespace::MultiplayerLayoutProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__layoutProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLayoutProvider*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__layoutProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLayoutProvider*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__multiplayerController(::GlobalNamespace::MultiplayerController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerController*, 0x48>(this, std::forward<::GlobalNamespace::MultiplayerController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerController* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__reusablePlayersList(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*, 0x50>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__reusablePlayersList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__reusablePlayersList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__currentSpeedsDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*,float_t>*, 0x58>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*,float_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*,float_t>* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__currentSpeedsDictionary()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*,float_t>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*,float_t>*> GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__currentSpeedsDictionary() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*,float_t>*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__lastFrameBaseScore(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__lastFrameBaseScore()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__lastFrameBaseScore() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged(::GlobalNamespace::__MultiplayerController__State  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>());
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
