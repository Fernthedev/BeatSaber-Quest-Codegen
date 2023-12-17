#pragma once
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorCapabilities_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorType_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::*)()>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToJson)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ae6c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities (*)(::StringW)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::FromJson)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ae6c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::*)()>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ae6d14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::__set_sensorType(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType>(value));
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType& UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::__get_sensorType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const& UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::__get_sensorType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, false>(nullptr, ___internal_method, json);
}
inline ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sensorType", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::AndroidSensorCapabilities(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  sensorType) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->sensorType = sensorType;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
