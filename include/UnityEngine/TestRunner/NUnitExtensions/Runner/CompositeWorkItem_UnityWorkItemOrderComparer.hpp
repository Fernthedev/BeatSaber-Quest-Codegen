// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/CompositeWorkItem.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemOrderComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class CompositeWorkItem::UnityWorkItemOrderComparer : public ::Il2CppObject/*, public System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*/ {
    public:
    // Creating value type constructor for type: UnityWorkItemOrderComparer
    UnityWorkItemOrderComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>
    operator System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*>(this);
    }
    // public System.Int32 Compare(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem x, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem y)
    // Offset: 0x14B3E28
    int Compare(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* x, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* y);
    // public System.Void .ctor()
    // Offset: 0x14B1AAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeWorkItem::UnityWorkItemOrderComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeWorkItem::UnityWorkItemOrderComparer*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemOrderComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem/UnityWorkItemOrderComparer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer::*)(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItem")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
