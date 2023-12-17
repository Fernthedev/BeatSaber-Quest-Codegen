#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarShadowController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(&::BeatSaber::AvatarCore::AvatarShadowController::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe0c9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(&::BeatSaber::AvatarCore::AvatarShadowController::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe0c9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.FollowPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)(::UnityEngine::Vector3)>(&::BeatSaber::AvatarCore::AvatarShadowController::FollowPosition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe0ca68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            "FollowPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(&::BeatSaber::AvatarCore::AvatarShadowController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe0cb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__spriteRenderer(::UnityEngine::SpriteRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SpriteRenderer*, 0x18>(this, std::forward<::UnityEngine::SpriteRenderer*>(value));
}
constexpr ::UnityEngine::SpriteRenderer* BeatSaber::AvatarCore::AvatarShadowController::__get__spriteRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> BeatSaber::AvatarCore::AvatarShadowController::__get__spriteRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x18>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__distanceScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__distanceScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__distanceScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__scale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__scale()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__alpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__alpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__floorYPos(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPos()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__floorYPosLocal(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPosLocal()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPosLocal() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__avatarController(::BeatSaber::AvatarCore::AvatarController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarController*, 0x38>(this, std::forward<::BeatSaber::AvatarCore::AvatarController*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarController* BeatSaber::AvatarCore::AvatarShadowController::__get__avatarController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarController*> BeatSaber::AvatarCore::AvatarShadowController::__get__avatarController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarController*, 0x38>(this);
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x40>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::AvatarCore::AvatarShadowController::__get__transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::AvatarCore::AvatarShadowController::__get__transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
inline void BeatSaber::AvatarCore::AvatarShadowController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarShadowController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarShadowController::FollowPosition(::UnityEngine::Vector3  followPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            "FollowPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, followPosition);
}
inline ::BeatSaber::AvatarCore::AvatarShadowController* BeatSaber::AvatarCore::AvatarShadowController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarShadowController*>());
}
inline void BeatSaber::AvatarCore::AvatarShadowController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
