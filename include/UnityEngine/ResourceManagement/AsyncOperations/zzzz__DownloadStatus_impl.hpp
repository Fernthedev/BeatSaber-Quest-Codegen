#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus.get_Percent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bdd6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>::get(),
                            "get_Percent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__set_TotalBytes(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_TotalBytes()  {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_TotalBytes() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__set_DownloadedBytes(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_DownloadedBytes()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_DownloadedBytes() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__set_IsDone(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_IsDone()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_IsDone() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline float_t UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>::get(),
                            "get_Percent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TotalBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DownloadedBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDone", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::DownloadStatus(int64_t  TotalBytes, int64_t  DownloadedBytes, bool  IsDone) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->TotalBytes = TotalBytes;
this->DownloadedBytes = DownloadedBytes;
this->IsDone = IsDone;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
