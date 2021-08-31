// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Services
namespace System::Runtime::Remoting::Services {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Services.TrackingServices
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9D418
  class TrackingServices : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TrackingServices
    TrackingServices() noexcept {}
    // Get static field: static private System.Collections.ArrayList _handlers
    static System::Collections::ArrayList* _get__handlers();
    // Set static field: static private System.Collections.ArrayList _handlers
    static void _set__handlers(System::Collections::ArrayList* value);
    // static private System.Void .cctor()
    // Offset: 0x160D400
    static void _cctor();
    // static System.Void NotifyMarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0x160CDF0
    static void NotifyMarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or);
    // static System.Void NotifyUnmarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0x160D0F8
    static void NotifyUnmarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or);
    // static System.Void NotifyDisconnectedObject(System.Object obj)
    // Offset: 0x160CAF8
    static void NotifyDisconnectedObject(::Il2CppObject* obj);
  }; // System.Runtime.Remoting.Services.TrackingServices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Services::TrackingServices*, "System.Runtime.Remoting.Services", "TrackingServices");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Services::TrackingServices::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Services::TrackingServices*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject
// Il2CppName: NotifyMarshaledObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::Runtime::Remoting::ObjRef*)>(&System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* _or = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ObjRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Services::TrackingServices*), "NotifyMarshaledObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, _or});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject
// Il2CppName: NotifyUnmarshaledObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::Runtime::Remoting::ObjRef*)>(&System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* _or = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ObjRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Services::TrackingServices*), "NotifyUnmarshaledObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, _or});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject
// Il2CppName: NotifyDisconnectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Services::TrackingServices*), "NotifyDisconnectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
