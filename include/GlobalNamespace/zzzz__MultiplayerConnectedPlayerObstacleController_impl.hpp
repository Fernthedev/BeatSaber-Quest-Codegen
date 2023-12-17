#pragma once
#include "GlobalNamespace/zzzz__ObstacleController_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleClippingController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)(::GlobalNamespace::ObstacleData*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x23d7c4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d7e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__set__multiplayerConnectedPlayerObstacleClippingController(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*, 0x120>(this, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__get__multiplayerConnectedPlayerObstacleClippingController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*> GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__get__multiplayerConnectedPlayerObstacleClippingController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*, 0x120>(this);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init(::GlobalNamespace::ObstacleData*  obstacleData, float_t  worldRotation, ::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  midPos, ::UnityEngine::Vector3  endPos, float_t  move1Duration, float_t  move2Duration, float_t  singleLineWidth, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleData, worldRotation, startPos, midPos, endPos, move1Duration, move2Duration, singleLineWidth, height);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* GlobalNamespace::MultiplayerConnectedPlayerObstacleController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::*)()>(&::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23d7e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool* GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>());
}
inline void GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
