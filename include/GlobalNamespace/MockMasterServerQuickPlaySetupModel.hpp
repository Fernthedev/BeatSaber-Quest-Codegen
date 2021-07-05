// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMasterServerQuickPlaySetupModel
#include "GlobalNamespace/IMasterServerQuickPlaySetupModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerQuickPlaySetupData
  class MasterServerQuickPlaySetupData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockMasterServerQuickPlaySetupModel
  class MockMasterServerQuickPlaySetupModel : public ::Il2CppObject/*, public GlobalNamespace::IMasterServerQuickPlaySetupModel*/ {
    public:
    // [InjectAttribute] Offset: 0xE1D65C
    // private readonly MasterServerQuickPlaySetupData _masterServerQuickPlaySetupData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MasterServerQuickPlaySetupData* masterServerQuickPlaySetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerQuickPlaySetupData*) == 0x8);
    // Creating value type constructor for type: MockMasterServerQuickPlaySetupModel
    MockMasterServerQuickPlaySetupModel(GlobalNamespace::MasterServerQuickPlaySetupData* masterServerQuickPlaySetupData_ = {}) noexcept : masterServerQuickPlaySetupData{masterServerQuickPlaySetupData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMasterServerQuickPlaySetupModel
    operator GlobalNamespace::IMasterServerQuickPlaySetupModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMasterServerQuickPlaySetupModel*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::MasterServerQuickPlaySetupData*
    constexpr operator GlobalNamespace::MasterServerQuickPlaySetupData*() const noexcept {
      return masterServerQuickPlaySetupData;
    }
    // public System.Threading.Tasks.Task`1<MasterServerQuickPlaySetupData> GetQuickPlaySetupAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x109F4AC
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerQuickPlaySetupData*>* GetQuickPlaySetupAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x109F520
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockMasterServerQuickPlaySetupModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMasterServerQuickPlaySetupModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockMasterServerQuickPlaySetupModel*, creationType>()));
    }
  }; // MockMasterServerQuickPlaySetupModel
  #pragma pack(pop)
  static check_size<sizeof(MockMasterServerQuickPlaySetupModel), 16 + sizeof(GlobalNamespace::MasterServerQuickPlaySetupData*)> __GlobalNamespace_MockMasterServerQuickPlaySetupModelSizeCheck;
  static_assert(sizeof(MockMasterServerQuickPlaySetupModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMasterServerQuickPlaySetupModel*, "", "MockMasterServerQuickPlaySetupModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockMasterServerQuickPlaySetupModel::GetQuickPlaySetupAsync
// Il2CppName: GetQuickPlaySetupAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerQuickPlaySetupData*>* (GlobalNamespace::MockMasterServerQuickPlaySetupModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::MockMasterServerQuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockMasterServerQuickPlaySetupModel*), "GetQuickPlaySetupAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockMasterServerQuickPlaySetupModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
