// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
  // [ComVisibleAttribute] Offset: D7E850
  class CriticalFinalizerObject : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CriticalFinalizerObject
    CriticalFinalizerObject() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x141D6AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CriticalFinalizerObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::ConstrainedExecution::CriticalFinalizerObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CriticalFinalizerObject*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x141D6B4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Runtime.ConstrainedExecution.CriticalFinalizerObject
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::CriticalFinalizerObject*, "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Runtime::ConstrainedExecution::CriticalFinalizerObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::ConstrainedExecution::CriticalFinalizerObject::*)()>(&System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::ConstrainedExecution::CriticalFinalizerObject*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
