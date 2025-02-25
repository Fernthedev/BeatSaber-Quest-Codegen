// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.Header
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA3850
  class Header : public ::Il2CppObject {
    public:
    // public System.String HeaderNamespace
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* HeaderNamespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean MustUnderstand
    // Size: 0x1
    // Offset: 0x18
    bool MustUnderstand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: MustUnderstand and: Name
    char __padding1[0x7] = {};
    // public System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Object Value
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: Header
    Header(::Il2CppString* HeaderNamespace_ = {}, bool MustUnderstand_ = {}, ::Il2CppString* Name_ = {}, ::Il2CppObject* Value_ = {}) noexcept : HeaderNamespace{HeaderNamespace_}, MustUnderstand{MustUnderstand_}, Name{Name_}, Value{Value_} {}
    // Get instance field reference: public System.String HeaderNamespace
    ::Il2CppString*& dyn_HeaderNamespace();
    // Get instance field reference: public System.Boolean MustUnderstand
    bool& dyn_MustUnderstand();
    // Get instance field reference: public System.String Name
    ::Il2CppString*& dyn_Name();
    // Get instance field reference: public System.Object Value
    ::Il2CppObject*& dyn_Value();
  }; // System.Runtime.Remoting.Messaging.Header
  #pragma pack(pop)
  static check_size<sizeof(Header), 40 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_Messaging_HeaderSizeCheck;
  static_assert(sizeof(Header) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::Header*, "System.Runtime.Remoting.Messaging", "Header");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
