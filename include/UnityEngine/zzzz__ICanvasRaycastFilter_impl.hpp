#pragma once
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::ICanvasRaycastFilter.IsRaycastLocationValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ICanvasRaycastFilter::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&::UnityEngine::ICanvasRaycastFilter::IsRaycastLocationValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ICanvasRaycastFilter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ICanvasRaycastFilter*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::ICanvasRaycastFilter::IsRaycastLocationValid(::UnityEngine::Vector2  sp, ::UnityEngine::Camera*  eventCamera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ICanvasRaycastFilter*>::get(),
                            "IsRaycastLocationValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, sp, eventCamera);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
