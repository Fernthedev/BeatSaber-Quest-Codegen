// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodMessage
#include "System/Runtime/Remoting/Messaging/IMethodMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9D96C
  class IMethodReturnMessage/*, public System::Runtime::Remoting::Messaging::IMethodMessage*/ {
    public:
    // Creating value type constructor for type: IMethodReturnMessage
    IMethodReturnMessage() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodMessage
    operator System::Runtime::Remoting::Messaging::IMethodMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodMessage*>(this);
    }
    // public System.Exception get_Exception()
    // Offset: 0xFFFFFFFF
    System::Exception* get_Exception();
    // public System.Object[] get_OutArgs()
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppObject*>* get_OutArgs();
    // public System.Object get_ReturnValue()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_ReturnValue();
  }; // System.Runtime.Remoting.Messaging.IMethodReturnMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IMethodReturnMessage*, "System.Runtime.Remoting.Messaging", "IMethodReturnMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Runtime::Remoting::Messaging::IMethodReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodReturnMessage*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_OutArgs
// Il2CppName: get_OutArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (System::Runtime::Remoting::Messaging::IMethodReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_OutArgs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodReturnMessage*), "get_OutArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_ReturnValue
// Il2CppName: get_ReturnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::IMethodReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodReturnMessage::get_ReturnValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodReturnMessage*), "get_ReturnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
