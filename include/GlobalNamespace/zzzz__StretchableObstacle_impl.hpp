#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StretchableObstacle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFakeGlowController_def.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFrameController_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.get_bounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::get_bounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x238f8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            "get_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.SetSizeAndColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)(float_t, float_t, float_t, ::UnityEngine::Color)>(&::GlobalNamespace::StretchableObstacle::SetSizeAndColor)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x238cbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            "SetSizeAndColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::OnValidate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x238f8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x238f944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StretchableObstacle::__set__edgeSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__get__edgeSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__get__edgeSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__coreOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__get__coreOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__get__coreOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__addColorMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__get__addColorMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__get__addColorMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__obstacleCoreLerpToWhiteFactor(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__get__obstacleCoreLerpToWhiteFactor()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__get__obstacleCoreLerpToWhiteFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__fakeGlowOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StretchableObstacle::__get__fakeGlowOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StretchableObstacle::__get__fakeGlowOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__obstacleCore(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x38>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::StretchableObstacle::__get__obstacleCore()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::StretchableObstacle::__get__obstacleCore() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>, 0x40>(this, std::forward<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& GlobalNamespace::StretchableObstacle::__get__materialPropertyBlockControllers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>, 0x40>(this);
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& GlobalNamespace::StretchableObstacle::__get__materialPropertyBlockControllers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>, 0x40>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__obstacleFrame(::GlobalNamespace::ParametricBoxFrameController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ParametricBoxFrameController*, 0x48>(this, std::forward<::GlobalNamespace::ParametricBoxFrameController*>(value));
}
constexpr ::GlobalNamespace::ParametricBoxFrameController* GlobalNamespace::StretchableObstacle::__get__obstacleFrame()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ParametricBoxFrameController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParametricBoxFrameController*> GlobalNamespace::StretchableObstacle::__get__obstacleFrame() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ParametricBoxFrameController*, 0x48>(this);
}
constexpr void GlobalNamespace::StretchableObstacle::__set__obstacleFakeGlow(::GlobalNamespace::ParametricBoxFakeGlowController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ParametricBoxFakeGlowController*, 0x50>(this, std::forward<::GlobalNamespace::ParametricBoxFakeGlowController*>(value));
}
constexpr ::GlobalNamespace::ParametricBoxFakeGlowController* GlobalNamespace::StretchableObstacle::__get__obstacleFakeGlow()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ParametricBoxFakeGlowController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParametricBoxFakeGlowController*> GlobalNamespace::StretchableObstacle::__get__obstacleFakeGlow() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ParametricBoxFakeGlowController*, 0x50>(this);
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__uvScaleID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_uvScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__uvScaleID()  {
return ::cordl_internals::getStaticField<int32_t, "_uvScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__tintColorID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__tintColorID()  {
return ::cordl_internals::getStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__addColorID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_addColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__addColorID()  {
return ::cordl_internals::getStaticField<int32_t, "_addColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__mainColorID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_mainColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__mainColorID()  {
return ::cordl_internals::getStaticField<int32_t, "_mainColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get>();
}
constexpr void GlobalNamespace::StretchableObstacle::__set__bounds(::UnityEngine::Bounds  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Bounds, 0x58>(this, std::forward<::UnityEngine::Bounds>(value));
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::StretchableObstacle::__get__bounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0x58>(this);
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::StretchableObstacle::__get__bounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0x58>(this);
}
inline ::UnityEngine::Bounds GlobalNamespace::StretchableObstacle::get_bounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            "get_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StretchableObstacle::SetSizeAndColor(float_t  width, float_t  height, float_t  length, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            "SetSizeAndColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, width, height, length, color);
}
inline void GlobalNamespace::StretchableObstacle::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::StretchableObstacle* GlobalNamespace::StretchableObstacle::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StretchableObstacle*>());
}
inline void GlobalNamespace::StretchableObstacle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StretchableObstacle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
