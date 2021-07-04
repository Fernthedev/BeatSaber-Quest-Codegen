// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
  struct DownloadStatus/*, public System::ValueType*/ {
    public:
    // public System.Int64 TotalBytes
    // Size: 0x8
    // Offset: 0x0
    int64_t TotalBytes;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 DownloadedBytes
    // Size: 0x8
    // Offset: 0x8
    int64_t DownloadedBytes;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Boolean IsDone
    // Size: 0x1
    // Offset: 0x10
    bool IsDone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DownloadStatus
    constexpr DownloadStatus(int64_t TotalBytes_ = {}, int64_t DownloadedBytes_ = {}, bool IsDone_ = {}) noexcept : TotalBytes{TotalBytes_}, DownloadedBytes{DownloadedBytes_}, IsDone{IsDone_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Single get_Percent()
    // Offset: 0xF02B54
    float get_Percent();
  }; // UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
  #pragma pack(pop)
  static check_size<sizeof(DownloadStatus), 16 + sizeof(bool)> __UnityEngine_ResourceManagement_AsyncOperations_DownloadStatusSizeCheck;
  static_assert(sizeof(DownloadStatus) == 0x11);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, "UnityEngine.ResourceManagement.AsyncOperations", "DownloadStatus");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent
// Il2CppName: get_Percent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus), "get_Percent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
