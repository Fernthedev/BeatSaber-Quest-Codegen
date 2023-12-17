#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_4_impl.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEffectController_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEffectController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEffectController.get_animationDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BTSStarTextEffectController::*)()>(&::GlobalNamespace::BTSStarTextEffectController::get_animationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEffectController*>::get(),
                            "get_animationDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEffectController.Reinitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEffectController::*)(::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::BTSStarTextEffectController::Reinitialize)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x221d16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEffectController*>::get(),
                            "Reinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEffectController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEffectController::*)()>(&::GlobalNamespace::BTSStarTextEffectController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEffectController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BTSStarTextEffectController::__set__transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::BTSStarTextEffectController::__get__transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::BTSStarTextEffectController::__get__transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void GlobalNamespace::BTSStarTextEffectController::__set__spriteRenderer(::UnityEngine::SpriteRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SpriteRenderer*, 0x20>(this, std::forward<::UnityEngine::SpriteRenderer*>(value));
}
constexpr ::UnityEngine::SpriteRenderer* GlobalNamespace::BTSStarTextEffectController::__get__spriteRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> GlobalNamespace::BTSStarTextEffectController::__get__spriteRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x20>(this);
}
constexpr void GlobalNamespace::BTSStarTextEffectController::__set__animation(::UnityEngine::Animation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animation*, 0x28>(this, std::forward<::UnityEngine::Animation*>(value));
}
constexpr ::UnityEngine::Animation* GlobalNamespace::BTSStarTextEffectController::__get__animation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animation*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> GlobalNamespace::BTSStarTextEffectController::__get__animation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animation*, 0x28>(this);
}
constexpr void GlobalNamespace::BTSStarTextEffectController::__set__currentAnimationDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BTSStarTextEffectController::__get__currentAnimationDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::BTSStarTextEffectController::__get__currentAnimationDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
inline float_t GlobalNamespace::BTSStarTextEffectController::get_animationDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEffectController*>::get(),
                            "get_animationDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BTSStarTextEffectController::Reinitialize(::UnityEngine::Sprite*  sprite, ::UnityEngine::Transform*  parentTransform, float_t  desiredAnimationLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEffectController*>::get(),
                            "Reinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sprite, parentTransform, desiredAnimationLength);
}
inline ::GlobalNamespace::BTSStarTextEffectController* GlobalNamespace::BTSStarTextEffectController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BTSStarTextEffectController*>());
}
inline void GlobalNamespace::BTSStarTextEffectController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEffectController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEffectController__Pool.Reinitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSStarTextEffectController__Pool::*)(::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t, ::GlobalNamespace::BTSStarTextEffectController*)>(&::GlobalNamespace::__BTSStarTextEffectController__Pool::Reinitialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x221d27c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEffectController__Pool*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEffectController__Pool*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEffectController__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSStarTextEffectController__Pool::*)()>(&::GlobalNamespace::__BTSStarTextEffectController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x221d290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEffectController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BTSStarTextEffectController__Pool::Reinitialize(::UnityEngine::Sprite*  sprite, ::UnityEngine::Transform*  transform, float_t  desiredAnimationLength, ::GlobalNamespace::BTSStarTextEffectController*  starTextEffectController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEffectController__Pool*>::get(),
                            "Reinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSStarTextEffectController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sprite, transform, desiredAnimationLength, starTextEffectController);
}
inline ::GlobalNamespace::__BTSStarTextEffectController__Pool* GlobalNamespace::__BTSStarTextEffectController__Pool::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSStarTextEffectController__Pool*>());
}
inline void GlobalNamespace::__BTSStarTextEffectController__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEffectController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
