#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundGradient_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundGradient.UpdatePixels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundGradient::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int32_t)>(&::GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2104650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundGradient::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2104968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundGradient::__set__gradient(::UnityEngine::Gradient*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Gradient*, 0x40>(this, std::forward<::UnityEngine::Gradient*>(value));
}
constexpr ::UnityEngine::Gradient* GlobalNamespace::BloomPrePassBackgroundGradient::__get__gradient()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Gradient*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> GlobalNamespace::BloomPrePassBackgroundGradient::__get__gradient() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Gradient*, 0x40>(this);
}
inline void GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  pixels, int32_t  numberOfPixels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(),
                            "UpdatePixels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pixels, numberOfPixels);
}
inline ::GlobalNamespace::BloomPrePassBackgroundGradient* GlobalNamespace::BloomPrePassBackgroundGradient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBackgroundGradient*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundGradient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundGradient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
