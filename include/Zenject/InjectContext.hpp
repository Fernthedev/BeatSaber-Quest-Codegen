// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectContext
  // [NoReflectionBakingAttribute] Offset: DDCD94
  class InjectContext : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: Zenject::InjectContext::$get_ParentContexts$d__52
    class $get_ParentContexts$d__52;
    // Nested type: Zenject::InjectContext::$get_ParentContextsAndSelf$d__54
    class $get_ParentContextsAndSelf$d__54;
    // Nested type: Zenject::InjectContext::$get_AllObjectTypes$d__56
    class $get_AllObjectTypes$d__56;
    // private Zenject.BindingId _bindingId
    // Size: 0x10
    // Offset: 0x10
    Zenject::BindingId bindingId;
    // Field size check
    static_assert(sizeof(Zenject::BindingId) == 0x10);
    // private System.Type _objectType
    // Size: 0x8
    // Offset: 0x20
    System::Type* objectType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private Zenject.InjectContext _parentContext
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* parentContext;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // private System.Object _objectInstance
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* objectInstance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String _memberName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* memberName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _optional
    // Size: 0x1
    // Offset: 0x40
    bool optional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: optional and: sourceType
    char __padding5[0x3] = {};
    // private Zenject.InjectSources _sourceType
    // Size: 0x4
    // Offset: 0x44
    Zenject::InjectSources sourceType;
    // Field size check
    static_assert(sizeof(Zenject::InjectSources) == 0x4);
    // private System.Object _fallBackValue
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* fallBackValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _concreteIdentifier
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* concreteIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x58
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: InjectContext
    InjectContext(Zenject::BindingId bindingId_ = {}, System::Type* objectType_ = {}, Zenject::InjectContext* parentContext_ = {}, ::Il2CppObject* objectInstance_ = {}, ::Il2CppString* memberName_ = {}, bool optional_ = {}, Zenject::InjectSources sourceType_ = {}, ::Il2CppObject* fallBackValue_ = {}, ::Il2CppObject* concreteIdentifier_ = {}, Zenject::DiContainer* container_ = {}) noexcept : bindingId{bindingId_}, objectType{objectType_}, parentContext{parentContext_}, objectInstance{objectInstance_}, memberName{memberName_}, optional{optional_}, sourceType{sourceType_}, fallBackValue{fallBackValue_}, concreteIdentifier{concreteIdentifier_}, container{container_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType)
    // Offset: 0x163F9A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>(container, memberType)));
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType, System.Object identifier)
    // Offset: 0x1632D40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType, ::Il2CppObject* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>(container, memberType, identifier)));
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Type memberType, System.Object identifier, System.Boolean optional)
    // Offset: 0x163FA00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor(Zenject::DiContainer* container, System::Type* memberType, ::Il2CppObject* identifier, bool optional) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>(container, memberType, identifier, optional)));
    }
    // public System.Void Dispose()
    // Offset: 0x163FA60
    void Dispose();
    // public System.Void Reset()
    // Offset: 0x163F93C
    void Reset();
    // public Zenject.BindingId get_BindingId()
    // Offset: 0x163FB54
    Zenject::BindingId get_BindingId();
    // public System.Type get_ObjectType()
    // Offset: 0x163FB60
    System::Type* get_ObjectType();
    // public System.Void set_ObjectType(System.Type value)
    // Offset: 0x163FB68
    void set_ObjectType(System::Type* value);
    // public Zenject.InjectContext get_ParentContext()
    // Offset: 0x163FB70
    Zenject::InjectContext* get_ParentContext();
    // public System.Void set_ParentContext(Zenject.InjectContext value)
    // Offset: 0x163FB78
    void set_ParentContext(Zenject::InjectContext* value);
    // public System.Object get_ObjectInstance()
    // Offset: 0x163FB80
    ::Il2CppObject* get_ObjectInstance();
    // public System.Void set_ObjectInstance(System.Object value)
    // Offset: 0x163FB88
    void set_ObjectInstance(::Il2CppObject* value);
    // public System.Object get_Identifier()
    // Offset: 0x163FB90
    ::Il2CppObject* get_Identifier();
    // public System.Void set_Identifier(System.Object value)
    // Offset: 0x163F9F8
    void set_Identifier(::Il2CppObject* value);
    // public System.String get_MemberName()
    // Offset: 0x163FB98
    ::Il2CppString* get_MemberName();
    // public System.Void set_MemberName(System.String value)
    // Offset: 0x163FBA0
    void set_MemberName(::Il2CppString* value);
    // public System.Type get_MemberType()
    // Offset: 0x163EF40
    System::Type* get_MemberType();
    // public System.Void set_MemberType(System.Type value)
    // Offset: 0x163F9F0
    void set_MemberType(System::Type* value);
    // public System.Boolean get_Optional()
    // Offset: 0x163FBA8
    bool get_Optional();
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0x163FBB0
    void set_Optional(bool value);
    // public Zenject.InjectSources get_SourceType()
    // Offset: 0x163FBBC
    Zenject::InjectSources get_SourceType();
    // public System.Void set_SourceType(Zenject.InjectSources value)
    // Offset: 0x163FBC4
    void set_SourceType(Zenject::InjectSources value);
    // public System.Object get_ConcreteIdentifier()
    // Offset: 0x163FBCC
    ::Il2CppObject* get_ConcreteIdentifier();
    // public System.Void set_ConcreteIdentifier(System.Object value)
    // Offset: 0x163FBD4
    void set_ConcreteIdentifier(::Il2CppObject* value);
    // public System.Object get_FallBackValue()
    // Offset: 0x163FBDC
    ::Il2CppObject* get_FallBackValue();
    // public System.Void set_FallBackValue(System.Object value)
    // Offset: 0x163FBE4
    void set_FallBackValue(::Il2CppObject* value);
    // public Zenject.DiContainer get_Container()
    // Offset: 0x163FBEC
    Zenject::DiContainer* get_Container();
    // public System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0x163FBF4
    void set_Container(Zenject::DiContainer* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectContext> get_ParentContexts()
    // Offset: 0x163FBFC
    System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* get_ParentContexts();
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectContext> get_ParentContextsAndSelf()
    // Offset: 0x163FCB4
    System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* get_ParentContextsAndSelf();
    // public System.Collections.Generic.IEnumerable`1<System.Type> get_AllObjectTypes()
    // Offset: 0x163FD6C
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_AllObjectTypes();
    // public Zenject.InjectContext CreateSubContext(System.Type memberType)
    // Offset: 0x163FE24
    Zenject::InjectContext* CreateSubContext(System::Type* memberType);
    // public Zenject.InjectContext CreateSubContext(System.Type memberType, System.Object identifier)
    // Offset: 0x163FE2C
    Zenject::InjectContext* CreateSubContext(System::Type* memberType, ::Il2CppObject* identifier);
    // public Zenject.InjectContext Clone()
    // Offset: 0x163FEF4
    Zenject::InjectContext* Clone();
    // public System.String GetObjectGraphString()
    // Offset: 0x163FFC0
    ::Il2CppString* GetObjectGraphString();
    // public System.Void .ctor()
    // Offset: 0x163F910
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectContext*, creationType>()));
    }
  }; // Zenject.InjectContext
  #pragma pack(pop)
  static check_size<sizeof(InjectContext), 88 + sizeof(Zenject::DiContainer*)> __Zenject_InjectContextSizeCheck;
  static_assert(sizeof(InjectContext) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext*, "Zenject", "InjectContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InjectContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InjectContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InjectContext::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)()>(&Zenject::InjectContext::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)()>(&Zenject::InjectContext::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_BindingId
// Il2CppName: get_BindingId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindingId (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_BindingId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_BindingId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_ObjectType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_ObjectType
// Il2CppName: set_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(System::Type*)>(&Zenject::InjectContext::set_ObjectType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_ParentContext
// Il2CppName: get_ParentContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_ParentContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_ParentContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_ParentContext
// Il2CppName: set_ParentContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(Zenject::InjectContext*)>(&Zenject::InjectContext::set_ParentContext)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_ParentContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_ObjectInstance
// Il2CppName: get_ObjectInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_ObjectInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_ObjectInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_ObjectInstance
// Il2CppName: set_ObjectInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(::Il2CppObject*)>(&Zenject::InjectContext::set_ObjectInstance)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_ObjectInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_Identifier
// Il2CppName: get_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_Identifier)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_Identifier
// Il2CppName: set_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(::Il2CppObject*)>(&Zenject::InjectContext::set_Identifier)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_MemberName
// Il2CppName: get_MemberName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_MemberName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_MemberName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_MemberName
// Il2CppName: set_MemberName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(::Il2CppString*)>(&Zenject::InjectContext::set_MemberName)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_MemberName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_MemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_MemberType
// Il2CppName: set_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(System::Type*)>(&Zenject::InjectContext::set_MemberType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_Optional
// Il2CppName: get_Optional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_Optional)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_Optional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_Optional
// Il2CppName: set_Optional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(bool)>(&Zenject::InjectContext::set_Optional)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_Optional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_SourceType
// Il2CppName: get_SourceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectSources (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_SourceType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_SourceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_SourceType
// Il2CppName: set_SourceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(Zenject::InjectSources)>(&Zenject::InjectContext::set_SourceType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "InjectSources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_SourceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_ConcreteIdentifier
// Il2CppName: get_ConcreteIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_ConcreteIdentifier)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_ConcreteIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_ConcreteIdentifier
// Il2CppName: set_ConcreteIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(::Il2CppObject*)>(&Zenject::InjectContext::set_ConcreteIdentifier)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_ConcreteIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_FallBackValue
// Il2CppName: get_FallBackValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_FallBackValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_FallBackValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_FallBackValue
// Il2CppName: set_FallBackValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(::Il2CppObject*)>(&Zenject::InjectContext::set_FallBackValue)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_FallBackValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_Container)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::set_Container
// Il2CppName: set_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectContext::*)(Zenject::DiContainer*)>(&Zenject::InjectContext::set_Container)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "set_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_ParentContexts
// Il2CppName: get_ParentContexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_ParentContexts)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_ParentContexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_ParentContextsAndSelf
// Il2CppName: get_ParentContextsAndSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_ParentContextsAndSelf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_ParentContextsAndSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::get_AllObjectTypes
// Il2CppName: get_AllObjectTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Type*>* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::get_AllObjectTypes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "get_AllObjectTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::CreateSubContext
// Il2CppName: CreateSubContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext* (Zenject::InjectContext::*)(System::Type*)>(&Zenject::InjectContext::CreateSubContext)> {
  const MethodInfo* get() {
    static auto* memberType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "CreateSubContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memberType});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::CreateSubContext
// Il2CppName: CreateSubContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext* (Zenject::InjectContext::*)(System::Type*, ::Il2CppObject*)>(&Zenject::InjectContext::CreateSubContext)> {
  const MethodInfo* get() {
    static auto* memberType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* identifier = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "CreateSubContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memberType, identifier});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::GetObjectGraphString
// Il2CppName: GetObjectGraphString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Zenject::InjectContext::*)()>(&Zenject::InjectContext::GetObjectGraphString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectContext*), "GetObjectGraphString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
