// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerEndPoint
  class MasterServerEndPoint : public ::Il2CppObject/*, public System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>*/ {
    public:
    // public readonly System.String hostName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* hostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int32 port
    // Size: 0x4
    // Offset: 0x18
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: getEndPointTask
    char __padding1[0x4] = {};
    // private System.Threading.Tasks.Task`1<System.Net.IPEndPoint> _getEndPointTask
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* getEndPointTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>*) == 0x8);
    // Creating value type constructor for type: MasterServerEndPoint
    MasterServerEndPoint(::Il2CppString* hostName_ = {}, int port_ = {}, System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* getEndPointTask_ = {}) noexcept : hostName{hostName_}, port{port_}, getEndPointTask{getEndPointTask_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>
    operator System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>*>(this);
    }
    // public System.Net.IPEndPoint get_endPoint()
    // Offset: 0x14FC248
    System::Net::IPEndPoint* get_endPoint();
    // public System.Void .ctor(System.String hostName, System.Int32 port)
    // Offset: 0x14FC2C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerEndPoint* New_ctor(::Il2CppString* hostName, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerEndPoint*, creationType>(hostName, port)));
    }
    // public System.Void .ctor(System.Net.IPEndPoint endPoint)
    // Offset: 0x14FC2FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerEndPoint* New_ctor(System::Net::IPEndPoint* endPoint) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerEndPoint*, creationType>(endPoint)));
    }
    // public System.Threading.Tasks.Task`1<System.Net.IPEndPoint> GetEndPointAsync()
    // Offset: 0x14FC3B4
    System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* GetEndPointAsync();
    // public System.Net.IPEndPoint GetEndPoint()
    // Offset: 0x14FC460
    System::Net::IPEndPoint* GetEndPoint();
    // private System.Net.IPEndPoint GetEndPointInternal()
    // Offset: 0x14FC4F8
    System::Net::IPEndPoint* GetEndPointInternal();
    // public System.Boolean Equals(MasterServerEndPoint other)
    // Offset: 0x14FA634
    bool Equals(GlobalNamespace::MasterServerEndPoint* other);
    // public override System.String ToString()
    // Offset: 0x14FC5BC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x14FC644
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14FC6F4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // MasterServerEndPoint
  #pragma pack(pop)
  static check_size<sizeof(MasterServerEndPoint), 32 + sizeof(System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>*)> __GlobalNamespace_MasterServerEndPointSizeCheck;
  static_assert(sizeof(MasterServerEndPoint) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerEndPoint*, "", "MasterServerEndPoint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::get_endPoint
// Il2CppName: get_endPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (GlobalNamespace::MasterServerEndPoint::*)()>(&GlobalNamespace::MasterServerEndPoint::get_endPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "get_endPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::GetEndPointAsync
// Il2CppName: GetEndPointAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* (GlobalNamespace::MasterServerEndPoint::*)()>(&GlobalNamespace::MasterServerEndPoint::GetEndPointAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "GetEndPointAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::GetEndPoint
// Il2CppName: GetEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (GlobalNamespace::MasterServerEndPoint::*)()>(&GlobalNamespace::MasterServerEndPoint::GetEndPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "GetEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::GetEndPointInternal
// Il2CppName: GetEndPointInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (GlobalNamespace::MasterServerEndPoint::*)()>(&GlobalNamespace::MasterServerEndPoint::GetEndPointInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "GetEndPointInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MasterServerEndPoint::*)(GlobalNamespace::MasterServerEndPoint*)>(&GlobalNamespace::MasterServerEndPoint::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "MasterServerEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MasterServerEndPoint::*)()>(&GlobalNamespace::MasterServerEndPoint::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MasterServerEndPoint::*)(::Il2CppObject*)>(&GlobalNamespace::MasterServerEndPoint::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerEndPoint::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MasterServerEndPoint::*)()>(&GlobalNamespace::MasterServerEndPoint::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerEndPoint*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
