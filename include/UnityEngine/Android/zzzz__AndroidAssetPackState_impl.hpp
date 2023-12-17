#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackState_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPackState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPackState::*)(::StringW, ::UnityEngine::Android::AndroidAssetPackStatus, ::UnityEngine::Android::AndroidAssetPackError)>(&::UnityEngine::Android::AndroidAssetPackState::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c8cbc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackError>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Android::AndroidAssetPackState::__set__name_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::Android::AndroidAssetPackState::__get__name_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::Android::AndroidAssetPackState::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Android::AndroidAssetPackStatus, 0x18>(this, std::forward<::UnityEngine::Android::AndroidAssetPackStatus>(value));
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus& UnityEngine::Android::AndroidAssetPackState::__get__status_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Android::AndroidAssetPackStatus, 0x18>(this);
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& UnityEngine::Android::AndroidAssetPackState::__get__status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Android::AndroidAssetPackStatus, 0x18>(this);
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Android::AndroidAssetPackError, 0x1c>(this, std::forward<::UnityEngine::Android::AndroidAssetPackError>(value));
}
constexpr ::UnityEngine::Android::AndroidAssetPackError& UnityEngine::Android::AndroidAssetPackState::__get__error_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Android::AndroidAssetPackError, 0x1c>(this);
}
constexpr ::UnityEngine::Android::AndroidAssetPackError const& UnityEngine::Android::AndroidAssetPackState::__get__error_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Android::AndroidAssetPackError, 0x1c>(this);
}
inline ::UnityEngine::Android::AndroidAssetPackState* UnityEngine::Android::AndroidAssetPackState::New_ctor(::StringW  name, ::UnityEngine::Android::AndroidAssetPackStatus  status, ::UnityEngine::Android::AndroidAssetPackError  error)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Android::AndroidAssetPackState*>(name, status, error));
}
inline void UnityEngine::Android::AndroidAssetPackState::_ctor(::StringW  name, ::UnityEngine::Android::AndroidAssetPackStatus  status, ::UnityEngine::Android::AndroidAssetPackError  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPackState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::AndroidAssetPackError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, status, error);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
