#pragma once
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightLengthEffect_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightLengthEffect.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightLengthEffect::*)(float_t)>(&::GlobalNamespace::TubeBloomPrePassLightLengthEffect::SetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23a71f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightLengthEffect.TriggerValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightLengthEffect::*)(float_t)>(&::GlobalNamespace::TubeBloomPrePassLightLengthEffect::TriggerValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23a7220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightLengthEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightLengthEffect::*)()>(&::GlobalNamespace::TubeBloomPrePassLightLengthEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a724c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TubeBloomPrePassLightLengthEffect::__set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x18>(this, std::forward<::GlobalNamespace::TubeBloomPrePassLight*>(value));
}
constexpr ::GlobalNamespace::TubeBloomPrePassLight* GlobalNamespace::TubeBloomPrePassLightLengthEffect::__get__tubeBloomPrePassLight()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> GlobalNamespace::TubeBloomPrePassLightLengthEffect::__get__tubeBloomPrePassLight() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x18>(this);
}
inline void GlobalNamespace::TubeBloomPrePassLightLengthEffect::SetValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::TubeBloomPrePassLightLengthEffect::TriggerValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                            "TriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::TubeBloomPrePassLightLengthEffect* GlobalNamespace::TubeBloomPrePassLightLengthEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>());
}
inline void GlobalNamespace::TubeBloomPrePassLightLengthEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
