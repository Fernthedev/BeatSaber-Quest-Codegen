#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRDeviceDescriptor_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRFeatureDescriptor_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::XR::XRDeviceDescriptor::*)()>(&::UnityEngine::InputSystem::XR::XRDeviceDescriptor::ToJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac8328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::XRDeviceDescriptor* (*)(::StringW)>(&::UnityEngine::InputSystem::XR::XRDeviceDescriptor::FromJson)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ac5be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::XRDeviceDescriptor::*)()>(&::UnityEngine::InputSystem::XR::XRDeviceDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac8330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__set_deviceName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_deviceName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_deviceName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__set_manufacturer(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_manufacturer()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_manufacturer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__set_serialNumber(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_serialNumber()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_serialNumber() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics  value)  {
::cordl_internals::setInstanceField<::UnityEngine::XR::InputDeviceCharacteristics, 0x28>(this, std::forward<::UnityEngine::XR::InputDeviceCharacteristics>(value));
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_characteristics()  {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::InputDeviceCharacteristics, 0x28>(this);
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_characteristics() const {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::InputDeviceCharacteristics, 0x28>(this);
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__set_deviceId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_deviceId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_deviceId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__set_inputFeatures(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_inputFeatures()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*> UnityEngine::InputSystem::XR::XRDeviceDescriptor::__get_inputFeatures() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, 0x30>(this);
}
inline ::StringW UnityEngine::InputSystem::XR::XRDeviceDescriptor::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* UnityEngine::InputSystem::XR::XRDeviceDescriptor::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*, false>(nullptr, ___internal_method, json);
}
inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* UnityEngine::InputSystem::XR::XRDeviceDescriptor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>());
}
inline void UnityEngine::InputSystem::XR::XRDeviceDescriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
