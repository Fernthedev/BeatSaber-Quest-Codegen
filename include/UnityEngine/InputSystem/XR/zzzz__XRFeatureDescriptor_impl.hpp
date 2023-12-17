#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__XRFeatureDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__UsageHint_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_def.hpp"
constexpr void UnityEngine::InputSystem::XR::XRFeatureDescriptor::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::XR::XRFeatureDescriptor::__set_usageHints(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>* UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_usageHints()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*> UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_usageHints() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::XR::XRFeatureDescriptor::__set_featureType(::UnityEngine::InputSystem::XR::FeatureType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XR::FeatureType, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::XR::FeatureType>(value));
}
constexpr ::UnityEngine::InputSystem::XR::FeatureType& UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_featureType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::FeatureType, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::XR::FeatureType const& UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_featureType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::FeatureType, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::XR::XRFeatureDescriptor::__set_customSize(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_customSize()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::InputSystem::XR::XRFeatureDescriptor::__get_customSize() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "usageHints", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "featureType", ty: "::UnityEngine::InputSystem::XR::FeatureType", modifiers: "", def_value: Some("{}") }, CppParam { name: "customSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::XRFeatureDescriptor::XRFeatureDescriptor(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*  usageHints, ::UnityEngine::InputSystem::XR::FeatureType  featureType, uint32_t  customSize) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->name = name;
this->usageHints = usageHints;
this->featureType = featureType;
this->customSize = customSize;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
