#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackMediaType_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackMediaType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackMediaType::*)(::UnityEngine::Timeline::__TimelineAsset__MediaType)>(&::UnityEngine::Timeline::TrackMediaType::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c6e640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackMediaType*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineAsset__MediaType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::TrackMediaType::__set_m_MediaType(::UnityEngine::Timeline::__TimelineAsset__MediaType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::__TimelineAsset__MediaType, 0x10>(this, std::forward<::UnityEngine::Timeline::__TimelineAsset__MediaType>(value));
}
constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType& UnityEngine::Timeline::TrackMediaType::__get_m_MediaType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimelineAsset__MediaType, 0x10>(this);
}
constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType const& UnityEngine::Timeline::TrackMediaType::__get_m_MediaType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimelineAsset__MediaType, 0x10>(this);
}
inline ::UnityEngine::Timeline::TrackMediaType* UnityEngine::Timeline::TrackMediaType::New_ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType  mt)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackMediaType*>(mt));
}
inline void UnityEngine::Timeline::TrackMediaType::_ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType  mt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackMediaType*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineAsset__MediaType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mt);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
