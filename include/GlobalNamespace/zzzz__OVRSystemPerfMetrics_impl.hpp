#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSystemPerfMetrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRSystemPerfMetrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics.ToJSON
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::ToJSON)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x27c24c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                            "ToJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics.LoadFromJSON
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::*)(::StringW)>(&::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::LoadFromJSON)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x27c2cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                            "LoadFromJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27c3db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_frameCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_frameCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_frameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_frameTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_frameTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_frameTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deltaFrameTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deltaFrameTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deltaFrameTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_appCpuTime_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appCpuTime_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appCpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_appCpuTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appCpuTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appCpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_appGpuTime_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appGpuTime_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appGpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_appGpuTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appGpuTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_appGpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorCpuTime_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorCpuTime_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorCpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorCpuTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorCpuTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorCpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorGpuTime_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorGpuTime_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorGpuTime_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorGpuTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorGpuTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorGpuTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorDroppedFrameCount_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorDroppedFrameCount_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorDroppedFrameCount_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorDroppedFrameCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorDroppedFrameCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorDroppedFrameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorSpaceWarpMode_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorSpaceWarpMode_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorSpaceWarpMode_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_compositorSpaceWarpMode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorSpaceWarpMode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_compositorSpaceWarpMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_systemGpuUtilPercentage_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemGpuUtilPercentage_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemGpuUtilPercentage_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_systemGpuUtilPercentage(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemGpuUtilPercentage()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemGpuUtilPercentage() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilAveragePercentage_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilAveragePercentage_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilAveragePercentage_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilAveragePercentage(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilAveragePercentage()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilAveragePercentage() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilWorstPercentage_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilWorstPercentage_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilWorstPercentage_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_systemCpuUtilWorstPercentage(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilWorstPercentage()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_systemCpuUtilWorstPercentage() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockFrequencyInMHz_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockFrequencyInMHz_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockFrequencyInMHz_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockFrequencyInMHz(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockFrequencyInMHz()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockFrequencyInMHz() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockFrequencyInMHz_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockFrequencyInMHz_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockFrequencyInMHz_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockFrequencyInMHz(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockFrequencyInMHz()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockFrequencyInMHz() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockLevel_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockLevel_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockLevel_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuClockLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuClockLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockLevel_IsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockLevel_IsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockLevel_IsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceGpuClockLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceGpuClockLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuCoreUtilPercentage_IsValid(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<bool,::Array<bool>*>, 0x88>(this, std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
constexpr ::ArrayW<bool,::Array<bool>*>& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuCoreUtilPercentage_IsValid()  {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x88>(this);
}
constexpr ::ArrayW<bool,::Array<bool>*> const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuCoreUtilPercentage_IsValid() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x88>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__set_deviceCpuCoreUtilPercentage(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x90>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuCoreUtilPercentage()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x90>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__get_deviceCpuCoreUtilPercentage() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x90>(this);
}
inline ::StringW GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::ToJSON()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                            "ToJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::LoadFromJSON(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                            "LoadFromJSON",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, json);
}
inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>());
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnEnable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27c3e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27c3f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27c4020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.GatherPerfMetrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::GatherPerfMetrics)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x27c40a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "GatherPerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27c43a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::setStaticF_singleton(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*, "singleton", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get>(std::forward<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>(value));
}
inline ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::getStaticF_singleton()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*, "singleton", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get>();
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__set_tcpServer(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*, 0x18>(this, std::forward<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>(value));
}
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__get_tcpServer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*> GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__get_tcpServer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__set_listeningPort(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__get_listeningPort()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__get_listeningPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::GatherPerfMetrics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            "GatherPerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>());
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRSystemPerfMetrics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSystemPerfMetrics::*)()>(&::GlobalNamespace::OVRSystemPerfMetrics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c24b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSystemPerfMetrics*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSystemPerfMetrics* GlobalNamespace::OVRSystemPerfMetrics::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSystemPerfMetrics*>());
}
inline void GlobalNamespace::OVRSystemPerfMetrics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSystemPerfMetrics*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
