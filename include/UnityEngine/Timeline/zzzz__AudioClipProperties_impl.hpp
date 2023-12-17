#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AudioClipProperties_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::AudioClipProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AudioClipProperties::*)()>(&::UnityEngine::Timeline::AudioClipProperties::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c61ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioClipProperties*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::AudioClipProperties::__set_volume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Timeline::AudioClipProperties::__get_volume()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& UnityEngine::Timeline::AudioClipProperties::__get_volume() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline ::UnityEngine::Timeline::AudioClipProperties* UnityEngine::Timeline::AudioClipProperties::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::AudioClipProperties*>());
}
inline void UnityEngine::Timeline::AudioClipProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioClipProperties*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
