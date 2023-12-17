#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectPreset_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectPreset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectPreset::*)()>(&::HoudiniEngineUnity::HEU_InputObjectPreset::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x214e7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectPreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__gameObjectName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputObjectPreset::__get__gameObjectName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__gameObjectName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__isSceneObject(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_InputObjectPreset::__get__isSceneObject()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__isSceneObject() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__useTransformOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_InputObjectPreset::__get__useTransformOffset()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__useTransformOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__translateOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x1c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectPreset::__get__translateOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__translateOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__rotateOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectPreset::__get__rotateOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__rotateOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__scaleOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectPreset::__get__scaleOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__scaleOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
inline ::HoudiniEngineUnity::HEU_InputObjectPreset* HoudiniEngineUnity::HEU_InputObjectPreset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputObjectPreset*>());
}
inline void HoudiniEngineUnity::HEU_InputObjectPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectPreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
