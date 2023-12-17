#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
constexpr void UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__set_buildGuid(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_buildGuid()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_buildGuid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__set_buildTarget(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_buildTarget()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_buildTarget() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__set_buildTargetGroup(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_buildTargetGroup()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_buildTargetGroup() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__set_assigned_loaders(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_assigned_loaders()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__get_assigned_loaders() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent::__XRManagementAnalytics__BuildEvent(::StringW  buildGuid, ::StringW  buildTarget, ::StringW  buildTargetGroup, ::ArrayW<::StringW,::Array<::StringW>*>  assigned_loaders) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->buildGuid = buildGuid;
this->buildTarget = buildTarget;
this->buildTargetGroup = buildTargetGroup;
this->assigned_loaders = assigned_loaders;
}
//  Writing Method size for method: ::UnityEngine::XR::Management::XRManagementAnalytics.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::Management::XRManagementAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c765e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRManagementAnalytics*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Management::XRManagementAnalytics::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRManagementAnalytics*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
