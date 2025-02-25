// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GetAssetBundleFileResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct GetAssetBundleFileResult/*, public System::ValueType*/ {
    public:
    // public readonly System.Boolean isError
    // Size: 0x1
    // Offset: 0x0
    bool isError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isError and: assetBundlePath
    char __padding0[0x7] = {};
    // public readonly System.String assetBundlePath
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* assetBundlePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GetAssetBundleFileResult
    constexpr GetAssetBundleFileResult(bool isError_ = {}, ::Il2CppString* assetBundlePath_ = {}) noexcept : isError{isError_}, assetBundlePath{assetBundlePath_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Boolean isError
    bool& dyn_isError();
    // Get instance field reference: public readonly System.String assetBundlePath
    ::Il2CppString*& dyn_assetBundlePath();
    // public System.Void .ctor(System.Boolean isError, System.String assetBundlePath)
    // Offset: 0x110452C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  GetAssetBundleFileResult(bool isError, ::Il2CppString* assetBundlePath)
  }; // GetAssetBundleFileResult
  #pragma pack(pop)
  static check_size<sizeof(GetAssetBundleFileResult), 8 + sizeof(::Il2CppString*)> __GlobalNamespace_GetAssetBundleFileResultSizeCheck;
  static_assert(sizeof(GetAssetBundleFileResult) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GetAssetBundleFileResult, "", "GetAssetBundleFileResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
