#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
constexpr void UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData::__set_PoseNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData::__get_PoseNames()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData::__get_PoseNames() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData::__set_Poses(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>* UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData::__get_Poses()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*> UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData::__get_Poses() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "PoseNames", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Poses", ty: "::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData::__TrackedPoseDriverDataDescription__PoseData(::System::Collections::Generic::List_1<::StringW>*  PoseNames, ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*  Poses) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->PoseNames = PoseNames;
this->Poses = Poses;
}
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d189ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::setStaticF_DeviceData(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>*, "DeviceData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>* UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::getStaticF_DeviceData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>*, "DeviceData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get>();
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>());
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
