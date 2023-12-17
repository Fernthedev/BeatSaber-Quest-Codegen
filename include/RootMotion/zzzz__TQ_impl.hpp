#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/zzzz__TQ_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::RootMotion::TQ._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TQ::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::RootMotion::TQ::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1231c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TQ*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::TQ::__set_t(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::TQ::__get_t()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::TQ::__get_t() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr void RootMotion::TQ::__set_q(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x1c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& RootMotion::TQ::__get_q()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x1c>(this);
}
constexpr ::UnityEngine::Quaternion const& RootMotion::TQ::__get_q() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x1c>(this);
}
inline ::RootMotion::TQ* RootMotion::TQ::New_ctor(::UnityEngine::Vector3  translation, ::UnityEngine::Quaternion  rotation)  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::TQ*>(translation, rotation));
}
inline void RootMotion::TQ::_ctor(::UnityEngine::Vector3  translation, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TQ*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, translation, rotation);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
